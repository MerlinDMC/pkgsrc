$NetBSD$

Ensure the wrapper can be found.

--- src/logic/slbt_exec_execute.c.orig	2016-05-04 00:54:52.000000000 +0000
+++ src/logic/slbt_exec_execute.c
@@ -45,7 +45,7 @@ int  slbt_exec_execute(
 	script  = ectx->cargv[1];
 
 	/* wrapper */
-	if ((size_t)snprintf(wrapper,sizeof(wrapper),"%s.exe.wrapper",
+	if ((size_t)snprintf(wrapper,sizeof(wrapper),"./%s.exe.wrapper",
 				script)
 			>= sizeof(wrapper)) {
 		slbt_free_exec_ctx(actx);
