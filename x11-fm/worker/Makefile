# Created by: Simon Dick <simond@irrelevant.org>
# $FreeBSD$

PORTNAME=	worker
PORTVERSION=	4.5.0
CATEGORIES=	x11-fm
MASTER_SITES=	http://www.boomerangsworld.de/cms/worker/downloads/

MAINTAINER=	mp39590@gmail.com
COMMENT=	X11 file manager based on Directory Opus of AmigaOS

LICENSE=	GPLv2+

RUN_DEPENDS=	bash:shells/bash

USES=		compiler:c++14-lang localbase pkgconfig python:run \
		shebangfix tar:bzip2 xorg
GNU_CONFIGURE=	yes
USE_XORG=	x11 xinerama

SHEBANG_FILES=	${WRKSRC}/scripts/*.sh \
		${WRKSRC}/scripts/xeditor \
		${WRKSRC}/scripts/find_file_by_chksum.py

OPTIONS_DEFINE=	AVFS HAL INOTIFY LUA XFT
OPTIONS_DEFAULT=	AVFS INOTIFY XFT
OPTIONS_EXCLUDE_DragonFly=	AVFS

INOTIFY_DESC=	Monitor directory changes via libinotify
AVFS_DESC=	Use AVFS library to access archives

AVFS_LIB_DEPENDS=	libavfs.so:sysutils/avfs

HAL_LIB_DEPENDS=	libhal-storage.so:sysutils/hal \
			libdbus-glib-1.so:devel/dbus-glib \
			libdbus-1.so:devel/dbus
HAL_USE=	gnome=glib20 xorg=sm,ice
HAL_USES=	gettext-runtime gnome

INOTIFY_LIB_DEPENDS=	libinotify.so:devel/libinotify

LUA_CONFIGURE_OFF=	--disable-lua
LUA_USES=	lua

XFT_CONFIGURE_OFF=	--disable-xft
XFT_USE=	xorg=xft

.include <bsd.port.mk>
