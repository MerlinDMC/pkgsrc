# $NetBSD: Makefile,v 1.18 2016/01/24 04:32:54 zafer Exp $
#

DISTNAME=		unalz-0.65
CATEGORIES=		archivers
MASTER_SITES=		https://kippler.com/win/unalz/
EXTRACT_SUFX=		.tgz

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		https://kippler.com/win/unalz/
COMMENT=		Alzip archive (.alz) extractor

BUILD_TARGET=		posix-utf8
USE_LANGUAGES=		c c++
WRKSRC=			${WRKDIR}/unalz

INSTALLATION_DIRS=	bin

SUBST_CLASSES+=		d2u
SUBST_STAGE.d2u=	pre-configure
SUBST_FILES.d2u=	bzip2/*.[ch] zlib/*.[ch]
SUBST_FILTER_CMD.d2u=	${TR} -d '\r'
USE_TOOLS+=		tr

.include "../../archivers/bzip2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../converters/libiconv/buildlink3.mk"

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/unalz ${DESTDIR}${PREFIX}/bin

.include "../../mk/bsd.pkg.mk"
