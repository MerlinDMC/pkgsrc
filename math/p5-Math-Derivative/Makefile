# $NetBSD: Makefile,v 1.4 2016/04/13 13:31:23 wen Exp $

DISTNAME=	Math-Derivative-0.04
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	math perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Math/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Math-Derivative
COMMENT=	Numeric 1st and 2nd order differentiation
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=	auto/Math/Derivative/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
