/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/lda_c_chachiyo.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t3, t5, t6, t7, t11, t12, t13, t16;
  double t18, t19, t22, t23, t24;


  t3 = r->rs * r->rs;
  t5 = 0.204562557e2 / t3;
  t6 = 0.1e1 + 0.204562557e2 / r->rs + t5;
  t7 = log(t6);
  r->f = -0.1554535e-1 * t7;

  if(r->order < 1) return;

  t11 = 0.409125114e2 / t3 / r->rs;
  t12 = -t5 - t11;
  t13 = 0.1e1 / t6;
  r->dfdrs = -0.1554535e-1 * t12 * t13;

  if(r->order < 2) return;

  t16 = t3 * t3;
  t18 = 0.1227375342e3 / t16;
  t19 = t11 + t18;
  t22 = t12 * t12;
  t23 = t6 * t6;
  t24 = 0.1e1 / t23;
  r->d2fdrs2 = -0.1554535e-1 * t19 * t13 + 0.1554535e-1 * t22 * t24;

  if(r->order < 3) return;

  r->d3fdrs3 = -0.1554535e-1 * (-t18 - 0.4909501368e3 / t16 / r->rs) * t13 + 0.4663605e-1 * t19 * t24 * t12 - 0.3109070e-1 * t22 * t12 / t23 / t6;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t3, t4, t5, t6, t7, t8, t10;
  double t11, t12, t14, t15, t16, t18, t19, t21;
  double t23, t26, t29, t30, t31, t32, t34, t35;
  double t36, t37, t40, t44, t46, t47, t48, t49;
  double t51, t52, t53, t54, t56, t57, t58, t61;
  double t62, t63, t66, t70, t72, t75, t78, t82;
  double t85, t90;


  t1 = 0.1e1 / r->rs;
  t3 = r->rs * r->rs;
  t4 = 0.1e1 / t3;
  t5 = 0.204562557e2 * t4;
  t6 = 0.1e1 + 0.204562557e2 * t1 + t5;
  t7 = log(t6);
  t8 = 0.1554535e-1 * t7;
  t10 = 0.274203609e2 * t4;
  t11 = 0.1e1 + 0.274203609e2 * t1 + t10;
  t12 = log(t11);
  t14 = -0.77726750000000000000e-2 * t12 + t8;
  t15 = 0.1e1 + r->z;
  t16 = cbrt(t15);
  t18 = 0.1e1 - r->z;
  t19 = cbrt(t18);
  t21 = t16 * t15 + t19 * t18 - 0.2e1;
  t23 = M_CBRT2;
  t26 = 0.1e1 / (0.2e1 * t23 - 0.2e1);
  r->f = t14 * t21 * t26 - t8;

  if(r->order < 1) return;

  t29 = 0.1e1 / t3 / r->rs;
  t30 = 0.409125114e2 * t29;
  t31 = -t5 - t30;
  t32 = 0.1e1 / t6;
  t34 = 0.1554535e-1 * t31 * t32;
  t35 = 0.548407218e2 * t29;
  t36 = -t10 - t35;
  t37 = 0.1e1 / t11;
  t40 = -0.77726750000000000000e-2 * t36 * t37 + t34;
  r->dfdrs = t40 * t21 * t26 - t34;
  t44 = 0.4e1 / 0.3e1 * t16 - 0.4e1 / 0.3e1 * t19;
  r->dfdz = t14 * t44 * t26;

  if(r->order < 2) return;

  t46 = t3 * t3;
  t47 = 0.1e1 / t46;
  t48 = 0.1227375342e3 * t47;
  t49 = t30 + t48;
  t51 = 0.1554535e-1 * t49 * t32;
  t52 = t31 * t31;
  t53 = t6 * t6;
  t54 = 0.1e1 / t53;
  t56 = 0.1554535e-1 * t52 * t54;
  t57 = 0.1645221654e3 * t47;
  t58 = t35 + t57;
  t61 = t36 * t36;
  t62 = t11 * t11;
  t63 = 0.1e1 / t62;
  t66 = -0.77726750000000000000e-2 * t58 * t37 + 0.77726750000000000000e-2 * t61 * t63 + t51 - t56;
  r->d2fdrs2 = t66 * t21 * t26 - t51 + t56;
  r->d2fdrsz = t40 * t44 * t26;
  t70 = t16 * t16;
  t72 = t19 * t19;
  t75 = 0.4e1 / 0.9e1 / t70 + 0.4e1 / 0.9e1 / t72;
  r->d2fdz2 = t14 * t75 * t26;

  if(r->order < 3) return;

  t78 = 0.1e1 / t46 / r->rs;
  t82 = 0.1554535e-1 * (-t48 - 0.4909501368e3 * t78) * t32;
  t85 = 0.4663605e-1 * t49 * t54 * t31;
  t90 = 0.3109070e-1 * t52 * t31 / t53 / t6;
  r->d3fdrs3 = -t82 + t85 - t90 + (-0.77726750000000000000e-2 * (-t57 - 0.6580886616e3 * t78) * t37 + 0.23318025000000000000e-1 * t58 * t63 * t36 - 0.15545350000000000000e-1 * t61 * t36 / t62 / t11 + t82 - t85 + t90) * t21 * t26;
  r->d3fdrs2z = t66 * t44 * t26;
  r->d3fdrsz2 = t40 * t75 * t26;
  r->d3fdz3 = t14 * (-0.8e1 / 0.27e2 / t70 / t15 + 0.8e1 / 0.27e2 / t72 / t18) * t26;

  if(r->order < 4) return;


}

void 
XC(lda_c_chachiyo_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_chachiyo_func)
