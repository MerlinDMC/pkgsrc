# $NetBSD: Makefile,v 1.37 2016/04/26 12:42:33 wen Exp $

DISTNAME=	Convert-UUlib-1.5
PKGNAME=	p5-${DISTNAME}0
CATEGORIES=	converters perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Convert/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Convert-UUlib/
COMMENT=	Perl5 module interface to the uulib library
LICENSE=	gnu-gpl-v2

DEPENDS+=	p5-Canary-Stability>=0:../../devel/p5-Canary-Stability

PERL5_PACKLIST=		auto/Convert/UUlib/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
