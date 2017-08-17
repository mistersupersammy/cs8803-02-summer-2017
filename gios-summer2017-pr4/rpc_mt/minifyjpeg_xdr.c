/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "minifyjpeg.h"

bool_t
xdr_minify_in (XDR *xdrs, minify_in *objp)
{
	register int32_t *buf;

	 if (!xdr_bytes (xdrs, (char **)&objp->high_res_img.high_res_img_val, (u_int *) &objp->high_res_img.high_res_img_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_minify_out (XDR *xdrs, minify_out *objp)
{
	register int32_t *buf;

	 if (!xdr_bytes (xdrs, (char **)&objp->low_res_img.low_res_img_val, (u_int *) &objp->low_res_img.low_res_img_len, ~0))
		 return FALSE;
	return TRUE;
}
