# $FreeBSD$

PORTNAME=	vault
PORTVERSION=	1.5.2
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Tool for securely accessing secrets

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules

USE_GITHUB=	yes
GH_TUPLE=	hashicorp:${PORTNAME}:${VAULTTAG}:DEFAULT \
		swills:vaultui:${VAULTUITAG}:vaultui \
		hashicorp:vault-plugin-auth-gcp:07ff53341dfe:hashicorp_vault_plugin_auth_gcp

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
COMMIT_ID=	685fdfa
GO_BUILDFLAGS=	-tags=ui \
		-ldflags="\
		-X github.com/hashicorp/vault/sdk/version.Version=${PORTVERSION} \
		-X github.com/hashicorp/vault/sdk/version.VersionPrerelease= \
		-X github.com/hashicorp/vault/sdk/version.VersionMetadata= \
		-X github.com/hashicorp/vault/sdk/version.GitCommit='${COMMIT_ID}'"

VAULTTAG=	${DISTVERSIONPREFIX}${PORTVERSION}
VAULTUITAG=	${DISTVERSIONPREFIX}${PORTVERSION}

USE_RC_SUBR=	vault

USERS=		vault
GROUPS=		vault

PLIST_FILES=	bin/${PORTNAME}
SUB_FILES=	pkg-message

PORTSCOUT=	limit:^(v?)[0-9]+\.[0-9]+\.[0-9]+$

post-patch:
	@${CP} ${WRKDIR}/vaultui-${PORTVERSION}/http/bindata_assetfs.go ${WRKDIR}/vault-${PORTVERSION}/http/bindata_assetfs.go
	@${RM} -r ${WRKSRC}/vendor/github.com/hashicorp/vault-plugin-auth-gcp
	@${MV} ${WRKSRC_hashicorp_vault_plugin_auth_gcp} ${WRKSRC}/vendor/github.com/hashicorp/vault-plugin-auth-gcp

.include <bsd.port.mk>
