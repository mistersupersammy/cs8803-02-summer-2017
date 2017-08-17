/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "minifyjpeg.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

enum clnt_stat 
minifyjpeg_proc_1(minify_in arg1, minify_out *clnt_res,  CLIENT *clnt)
{
	return (clnt_call(clnt, MINIFYJPEG_PROC,
		(xdrproc_t) xdr_minify_in, (caddr_t) &arg1,
		(xdrproc_t) xdr_minify_out, (caddr_t) clnt_res,
		TIMEOUT));
}
