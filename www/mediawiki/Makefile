# $NetBSD: Makefile,v 1.58 2015/12/26 10:45:45 wen Exp $

DISTNAME=	mediawiki-${VER}.${PVER}
CATEGORIES=	www
MASTER_SITES=	https://releases.wikimedia.org/mediawiki/${VER}/

MAINTAINER=	wenheping@gmail.com
HOMEPAGE=	http://www.mediawiki.org/
COMMENT=	Free software wiki package originally written for Wikipedia
LICENSE=	gnu-gpl-v2

DEPENDS+=	${PHP_PKG_PREFIX}-dom>=5.3.3:../../textproc/php-dom
DEPENDS+=	${PHP_PKG_PREFIX}-gd>=5.3.3:../../graphics/php-gd
DEPENDS+=	${PHP_PKG_PREFIX}-intl>=5.3.3:../../textproc/php-intl
DEPENDS+=	${PHP_PKG_PREFIX}-json>=5.3.3:../../textproc/php-json

EGDIR=			share/examples/mediawiki
MEDIAWIKI=		${PREFIX}/share/mediawiki
INSTALLATION_DIRS=	${EGDIR} share/mediawiki

.include "../../mk/bsd.prefs.mk"
.include "options.mk"

VER=			1.26
PVER=			2

APACHE_USER?=		www
APACHE_GROUP?=		www
BUILD_DEFS+=		APACHE_USER APACHE_GROUP

PKG_SYSCONFSUBDIR?=	httpd
MESSAGE_SUBST+=		PKG_SYSCONFDIR=${PKG_SYSCONFDIR}

CONF_FILES=		${PREFIX}/${EGDIR}/mediawiki.conf \
			${PKG_SYSCONFDIR}/mediawiki.conf

NO_CONFIGURE=		YES
NO_BUILD=		YES

SUBST_CLASSES+=		paths
SUBST_MESSAGE.paths=	Fixing pathnames in configuration file.
SUBST_STAGE.paths=	post-patch
SUBST_FILES.paths=	../mediawiki.conf
SUBST_SED.paths=	-e "s,@MEDIAWIKI@,${MEDIAWIKI},g"

SUBST_CLASSES+=		sh
SUBST_STAGE.sh=		post-patch
SUBST_MESSAGE.sh=	Fixing path to sh
SUBST_FILES.sh+=	maintenance/storage/make-blobs
SUBST_FILES.sh+=	maintenance/dev/install.sh maintenance/dev/installphp.sh
SUBST_FILES.sh+=	maintenance/dev/installmw.sh maintenance/dev/start.sh
SUBST_FILES.sh+=	includes/limit.sh
SUBST_SED.sh=		-e "s|/bin/bash|${SH}|"

SUBST_CLASSES+=		sh2
SUBST_STAGE.sh2=	post-patch
SUBST_MESSAGE.sh2=	Fixing path to sh
SUBST_FILES.sh2+=	maintenance/mwjsduck-gen
SUBST_FILES.sh2+=	docs/kss/scripts/kss-node-check.sh
SUBST_FILES.sh2+=	maintenance/resources/update-oojs-ui.sh
SUBST_FILES.sh2+=	maintenance/resources/update-oojs.sh
SUBST_SED.sh2=		-e "s|/usr/bin/env bash|${SH}|"

SUBST_CLASSES+=		perl
SUBST_STAGE.perl=	post-patch
SUBST_MESSAGE.perl=	Fixing path to perl
SUBST_FILES.perl+=	maintenance/postgres/compare_schemas.pl
SUBST_FILES.perl+=	maintenance/postgres/mediawiki_mysql2postgres.pl
SUBST_SED.perl=		-e "s|/usr/bin/perl|${PERL5}|"

SUBST_CLASSES+=		python
SUBST_STAGE.python=	post-patch
SUBST_MESSAGE.python=	Fixing python path
SUBST_FILES.python+=	extensions/ConfirmEdit/captcha.py
SUBST_SED.python=	-e "s,/usr/bin/python,${PYTHONBIN},"

SUBST_CLASSES+=		python2
SUBST_STAGE.python2=	post-patch
SUBST_MESSAGE.python2=	Fixing python path
SUBST_FILES.python2+=	maintenance/language/zhtable/Makefile.py
SUBST_SED.python2=	-e "s,/usr/bin/env python,${PYTHONBIN},"

post-extract:
	${CP} ${FILESDIR}/mediawiki.conf ${WRKDIR}/mediawiki.conf

do-install:
	cd ${WRKSRC} && ${FIND} . -type d -exec ${INSTALL_DATA_DIR} \
	  ${DESTDIR}${MEDIAWIKI}/{} \; -exec ${CHOWN} \
	  ${APACHE_USER}:${APACHE_GROUP} ${DESTDIR}${MEDIAWIKI}/{} \;
	cd ${WRKSRC} && ${FIND} . \! -type d \! -name '.git*' \
	  -exec ${INSTALL_DATA} {} ${DESTDIR}${MEDIAWIKI}/{} \; \
	  -exec ${CHOWN} ${APACHE_USER}:${APACHE_GROUP} \
	  ${DESTDIR}${MEDIAWIKI}/{} \;
	${INSTALL_DATA} ${WRKDIR}/mediawiki.conf \
	  ${DESTDIR}${PREFIX}/${EGDIR}/mediawiki.conf

.include "../../lang/php/phpversion.mk"
.include "../../mk/bsd.pkg.mk"
