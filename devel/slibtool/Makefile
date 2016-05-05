# $NetBSD$

DISTNAME=	slibtool-0.5.2
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=midipix-project/}
GITHUB_PROJECT=	slibtool
GITHUB_TAG=	9eda979fc5ebc5bdf6056e24fc2af787bee3eea2

MAINTAINER=	wiedi@frubar.net
HOMEPAGE=	http://midipix.org/
COMMENT=	Skinny libtool implementation, written in C
LICENSE=	mit

HAS_CONFIGURE=	yes
USE_LANGUAGES=	c
USE_TOOLS+=	gmake

OPSYSVARS+=	SOEXT
SOEXT.Darwin=	dylib
SOEXT.*=	so

PLIST_SUBST+=	SOEXT=${SOEXT:Q}

.include "../../mk/bsd.prefs.mk"

.if ${OPSYS} == "Darwin"
.PHONY: fix-darwin-install-name
post-install: fix-darwin-install-name
fix-darwin-install-name:
	${FIND} ${DESTDIR}${PREFIX} -name "*.dylib" | while read lib; do   \
		libname=`basename $${lib}`;                             \
		libdir=`dirname $${lib} | sed -e 's,${DESTDIR},,'`;     \
		install_name_tool -id $${libdir}/$${libname} $${lib};   \
	done
.endif

.include "../../mk/bsd.pkg.mk"
