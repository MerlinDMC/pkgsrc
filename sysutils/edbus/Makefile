# $NetBSD: Makefile,v 1.11 2016/03/05 11:27:55 jperkin Exp $
#

DISTNAME=	e_dbus-1.7.7
PKGNAME=	edbus-1.7.7
PKGREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://download.enlightenment.org/releases/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	joerg@NetBSD.org
HOMEPAGE=	http://www.enlightenment.org/
COMMENT=	Convenience wrappers around dbus to ease integrating dbus with E17
LICENSE=	2-clause-bsd

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config

PKGCONFIG_OVERRIDE=	ehal.pc.in edbus.pc.in enm.pc.in enotify.pc.in

.include "../../devel/ecore/buildlink3.mk"
.include "../../sysutils/dbus/buildlink3.mk"
.include "../../sysutils/efreet/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
