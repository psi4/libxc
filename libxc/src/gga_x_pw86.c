#include <stdio.h>
#include <assert.h>
#include "util.h"

#define XC_GGA_X_PW86         108 /* Perdew & Wang 86 */

static inline void
func(xc_gga_type *p, double x, double *f, double *dfdx, double *ldfdx)
{
  const double x2s = 0.12827824385304220645; /* 1/(2*(6*pi^2)^(1/3)) */
  const double aa = 1.296, bb = 14.0, cc = 0.2;
  double ss, ss2, ss4, dd;

  ss  = x2s*x;
  ss2 = ss*ss;
  ss4 = ss2*ss2;

  dd = 1.0 + aa*ss2 + bb*ss4 + cc*ss4*ss2;

  *f     = pow(dd, 1.0/15.0);
  *dfdx  = x2s*ss*(2.0*aa + 4.0*bb*ss2 + 6.0*cc*ss4)/15.0 * pow(dd, -14.0/15.0);
  *ldfdx = x2s*x2s*aa/15.0;
}

#include "work_gga_x.c"

const xc_func_info_type func_info_gga_x_pw86 = {
  XC_GGA_X_PW86,
  XC_EXCHANGE,
  "Perdew & Wang 86",
  XC_FAMILY_GGA,
  "J.P. Perdew and Y. Wang, Phys. Rev. B 33, 8800 (1986).",
  XC_PROVIDES_EXC | XC_PROVIDES_VXC,
  NULL, NULL, NULL,
  work_gga_x
};