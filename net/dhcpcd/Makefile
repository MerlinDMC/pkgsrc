# $NetBSD: Makefile,v 1.55 2016/04/20 09:02:44 roy Exp $
#

DISTNAME=		dhcpcd-6.10.3
CATEGORIES=		net
MASTER_SITES=		ftp://roy.marples.name/pub/dhcpcd/
MASTER_SITES+=		http://roy.aydogan.net/dhcpcd/
MASTER_SITES+=		http://cflags.cc/roy/dhcpcd/
EXTRACT_SUFX=		.tar.xz

MAINTAINER=		roy@NetBSD.org
HOMEPAGE=		http://roy.marples.name/projects/dhcpcd/
COMMENT=		DHCP / IPv4LL / IPv6RA / DHCPv6 client
LICENSE=		modified-bsd

USE_LANGUAGES=		c99
HAS_CONFIGURE=		yes
CONFIGURE_ARGS+=	--mandir=${PREFIX}/${PKGMANDIR}
CONFIGURE_ARGS+=	--sysconfdir=${PKG_SYSCONFDIR}
CONFIGURE_ARGS+=	--with-hooks=ntp
CONFIGURE_ARGS+=	--datadir=${PREFIX}/share/examples

EGDIR=			${PREFIX}/share/examples/dhcpcd
INSTALL_MAKE_FLAGS+=	SYSCONFDIR=${EGDIR}
CONF_FILES+=		${EGDIR}/dhcpcd.conf ${PKG_SYSCONFDIR}/dhcpcd.conf

RCD_SCRIPTS+=		dhcpcd

.include "../../mk/bsd.pkg.mk"
