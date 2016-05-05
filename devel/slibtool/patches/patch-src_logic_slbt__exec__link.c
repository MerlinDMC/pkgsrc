$NetBSD$

Don't append .la contents, libtool doesn't do this.
Fix progname for ranlib.

--- src/logic/slbt_exec_link.c.orig	2016-05-06 01:32:50.000000000 +0000
+++ src/logic/slbt_exec_link.c
@@ -419,6 +419,7 @@ static int slbt_exec_link_create_dep_fil
 	char **	parg;
 	char *	popt;
 	char *	plib;
+	char	cwd[PATH_MAX];
 	char	depfile[PATH_MAX];
 
 	if (ectx->fdeps)
@@ -429,6 +430,9 @@ static int slbt_exec_link_create_dep_fil
 			>= sizeof(depfile))
 		return -1;
 
+	if (!getcwd(cwd,sizeof(cwd)))
+		return -1;
+
 	if (!(ectx->fdeps = fopen(depfile,"w")))
 		return -1;
 
@@ -453,6 +457,13 @@ static int slbt_exec_link_create_dep_fil
 		if (plib)
 			if (fprintf(ectx->fdeps,"-l%s\n",plib) < 0)
 				return -1;
+
+		popt = strrchr(*parg, '.');
+		if (popt && !strcmp(popt, ".la")) {
+			slbt_adjust_input_argument(*parg,".la",".so",true);
+			if (fprintf(ectx->fdeps,"%s/%s\n",cwd,*parg) < 0)
+				return -1;
+		}
 	}
 
 	if (fflush(ectx->fdeps))
@@ -621,6 +632,7 @@ static int slbt_exec_link_create_archive
 	ranlib[1] = output;
 	ranlib[2] = 0;
 	ectx->argv = ranlib;
+	ectx->program = program;
 
 	/* step output */
 	if (!(dctx->cctx->drvflags & SLBT_DRIVER_SILENT))
