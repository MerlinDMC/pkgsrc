# $NetBSD: Makefile,v 1.5 2015/06/11 16:33:43 taca Exp $

DISTNAME=	xpath-2.0.0
PKGNAME=	${RUBY_PKGPREFIX}-${DISTNAME}
CATEGORIES=	ruby textproc

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	http://github.com/jnicklas/xpath
COMMENT=	Ruby DSL for generating XPath expressions
LICENSE=	mit

DEPENDS+=	${RUBY_PKGPREFIX}-nokogiri>=1.3:../../textproc/ruby-nokogiri

USE_LANGUAGES=	# none

.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
