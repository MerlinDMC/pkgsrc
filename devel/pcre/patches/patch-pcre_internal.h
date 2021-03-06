$NetBSD: patch-pcre_internal.h,v 1.1 2016/03/22 19:38:15 tez Exp $

Fix for CVE-2016-3191 from
 http://vcs.pcre.org/pcre?view=revision&revision=1631

--- pcre_internal.h.orig	2016-03-22 19:14:14.468718400 +0000
+++ pcre_internal.h
@@ -7,7 +7,7 @@
 and semantics are as close as possible to those of the Perl 5 language.
 
                        Written by Philip Hazel
-           Copyright (c) 1997-2014 University of Cambridge
+           Copyright (c) 1997-2016 University of Cambridge
 
 -----------------------------------------------------------------------------
 Redistribution and use in source and binary forms, with or without
@@ -2289,7 +2289,7 @@ enum { ERR0,  ERR1,  ERR2,  ERR3,  ERR4,
        ERR50, ERR51, ERR52, ERR53, ERR54, ERR55, ERR56, ERR57, ERR58, ERR59,
        ERR60, ERR61, ERR62, ERR63, ERR64, ERR65, ERR66, ERR67, ERR68, ERR69,
        ERR70, ERR71, ERR72, ERR73, ERR74, ERR75, ERR76, ERR77, ERR78, ERR79,
-       ERR80, ERR81, ERR82, ERR83, ERR84, ERR85, ERR86, ERRCOUNT };
+       ERR80, ERR81, ERR82, ERR83, ERR84, ERR85, ERR86, ERR87, ERRCOUNT };
 
 /* JIT compiling modes. The function list is indexed by them. */
 
