# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD$

PORTNAME=	gettext
PORTVERSION=	3.2.9
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	32

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby implementation of the gettext library

LICENSE=	LGPL3 RUBY
LICENSE_COMB=	dual
LICENSE_FILE_LGPL3=	${WRKSRC}/doc/text/lgpl-3.0.txt
LICENSE_FILE_RUBY=	${WRKSRC}/doc/text/ruby-license.txt

RUN_DEPENDS=	rubygem-locale>=2.0.5:devel/rubygem-locale \
		rubygem-text>=1.3.0:textproc/rubygem-text

USES=		gem shebangfix
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^3\.2\.

SHEBANG_FILES=	samples/*.rb samples/cgi/*.rb

# Do not conflict with rubygem-gettext
post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/*

.include <bsd.port.mk>
