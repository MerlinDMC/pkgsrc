# $NetBSD: Makefile,v 1.5 2016/04/20 06:59:24 leot Exp $

DISTNAME=	zathura-0.3.6
CATEGORIES=	print
MASTER_SITES=	http://pwmt.org/projects/zathura/download/

MAINTAINER=	leot@NetBSD.org
HOMEPAGE=	http://pwmt.org/projects/zathura/
COMMENT=	PDF viewer with vi-like keybindings
LICENSE=	zlib

USE_TOOLS+=	gmake msgfmt pkg-config
USE_LIBTOOL=	yes

MAKE_ENV+=	COLOR=0
MAKE_ENV+=	MANPREFIX=${PREFIX}/${PKGMANDIR}

.include "../../databases/sqlite3/buildlink3.mk"
.include "../../graphics/cairo/buildlink3.mk"
.include "../../graphics/girara/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../sysutils/file/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
