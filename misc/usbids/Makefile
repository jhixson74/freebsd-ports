# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD$

PORTNAME=	usbids
PORTVERSION=	20200707
CATEGORIES=	misc

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Database of all known IDs used in USB devices

LICENSE=	BSD3CLAUSE GPLv2+
LICENSE_COMB=	dual

NO_ARCH=	yes
NO_BUILD=	yes

PORTDATA=	usb.ids

GH_TAGNAME=	a3ee67a
USE_GITHUB=	yes

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/usb.ids ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
