# $NetBSD: Makefile,v 1.41 2016/01/08 14:11:00 wen Exp $

DISTNAME=	YAML-1.15
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	perl5 textproc
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=YAML/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/YAML/
COMMENT=	YAML implementation for Perl
LICENSE=	${PERL5_LICENSE}

BUILD_DEPENDS+=	p5-Test-YAML>=1.05:../../textproc/p5-Test-YAML

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/YAML/.packlist
MAKE_PARAMS+=		< /dev/null
# By using Module::Install::Bundled a circular dependency on
# involving devel/p5-Module-Build, textproc/p5-YAML and
# devel/p5-Module-Install is avoided
PERL5_MODULE_TYPE=	Module::Install::Bundled

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
