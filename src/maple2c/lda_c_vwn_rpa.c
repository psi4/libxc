/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/lda_c_vwn_rpa.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t3, t4, t6, t9, t12, t14, t15;
  double t17, t19, t20, t22, t24, t26, t27, t28;
  double t31, t32, t35, t36, t39, t41, t43, t44;
  double t45, t51, t53, t58, t59, t62, t63, t64;
  double t70, t75, t79, t81, t83, t84, t89, t90;
  double t95, t100, t101, t105, t106, t107, t131, t140;
  double t150, t151, t153, t175, t191;


  t1 = sqrt(r->rs);
  t3 = r->rs + 0.130720e2 * t1 + 0.427198e2;
  t4 = 0.1e1 / t3;
  t6 = log(r->rs * t4);
  t9 = 0.2e1 * t1 + 0.130720e2;
  t12 = atan(0.44899888641287296627e-1 / t9);
  t14 = t1 + 0.409286e0;
  t15 = t14 * t14;
  t17 = log(t15 * t4);
  r->f = 0.310907e-1 * t6 + 0.20521972937837502661e2 * t12 + 0.44313737677495382697e-2 * t17;

  if(r->order < 1) return;

  t19 = t3 * t3;
  t20 = 0.1e1 / t19;
  t22 = 0.1e1 / t1;
  t24 = 0.1e1 + 0.65360000000000000000e1 * t22;
  t26 = -r->rs * t20 * t24 + t4;
  t27 = 0.1e1 / r->rs;
  t28 = t26 * t27;
  t31 = t9 * t9;
  t32 = 0.1e1 / t31;
  t35 = 0.20160000000000000000e-2 * t32 + 0.1e1;
  t36 = 0.1e1 / t35;
  t39 = t14 * t4;
  t41 = t15 * t20;
  t43 = t39 * t22 - t41 * t24;
  t44 = 0.1e1 / t15;
  t45 = t43 * t44;
  r->dfdrs = 0.310907e-1 * t28 * t3 - 0.92143429960841537844e0 * t32 * t22 * t36 + 0.44313737677495382697e-2 * t45 * t3;

  if(r->order < 2) return;

  t51 = 0.1e1 / t19 / t3;
  t53 = t24 * t24;
  t58 = -0.2e1 * t20 * t24 + 0.2e1 * r->rs * t51 * t53 + 0.32680000000000000000e1 * t22 * t20;
  t59 = t58 * t27;
  t62 = r->rs * r->rs;
  t63 = 0.1e1 / t62;
  t64 = t26 * t63;
  t70 = 0.1e1 / t31 / t9;
  t75 = 0.1e1 / t1 / r->rs;
  t79 = t31 * t31;
  t81 = 0.1e1 / t79 / t9;
  t83 = t35 * t35;
  t84 = 0.1e1 / t83;
  t89 = t14 * t20;
  t90 = t22 * t24;
  t95 = t15 * t51;
  t100 = t27 * t4 / 0.2e1 - 0.2e1 * t89 * t90 - t39 * t75 / 0.2e1 + 0.2e1 * t95 * t53 + 0.32680000000000000000e1 * t41 * t75;
  t101 = t100 * t44;
  t105 = 0.1e1 / t15 / t14;
  t106 = t43 * t105;
  t107 = t3 * t22;
  r->d2fdrs2 = 0.310907e-1 * t59 * t3 - 0.310907e-1 * t64 * t3 + 0.310907e-1 * t28 * t24 + 0.18428685992168307569e1 * t70 * t27 * t36 + 0.46071714980420768922e0 * t32 * t75 * t36 - 0.37152230960211308059e-2 * t81 * t27 * t84 + 0.44313737677495382697e-2 * t101 * t3 - 0.44313737677495382697e-2 * t106 * t107 + 0.44313737677495382697e-2 * t45 * t24;

  if(r->order < 3) return;

  t131 = 0.1e1 / t1 / t62;
  t140 = t15 * t15;
  t150 = t19 * t19;
  t151 = 0.1e1 / t150;
  t153 = t53 * t24;
  t175 = t79 * t79;
  t191 = t75 * t24;
  r->d3fdrs3 = 0.22156868838747691348e-2 * t106 * t3 * t75 - 0.621814e-1 * t58 * t63 * t3 + 0.621814e-1 * t26 / t62 / r->rs * t3 - 0.55286057976504922707e1 / t79 * t75 * t36 - 0.27643028988252461353e1 * t70 * t63 * t36 - 0.69107572470631153383e0 * t32 * t131 * t36 - 0.88627475354990765394e-2 * t100 * t105 * t107 - 0.88627475354990765394e-2 * t106 * t90 + 0.66470606516243074046e-2 * t43 / t140 * t3 * t27 + 0.310907e-1 * (0.6e1 * t51 * t53 + 0.49020000000000000000e1 * t20 * t75 - 0.6e1 * r->rs * t151 * t153 - 0.19608000000000000000e2 * t22 * t51 * t24) * t27 * t3 + 0.621814e-1 * t59 * t24 - 0.621814e-1 * t64 * t24 + 0.26006561672147915642e-1 / t79 / t31 * t75 * t84 + 0.55728346440316962088e-2 * t81 * t63 * t84 - 0.29959559046314398819e-4 / t175 * t75 / t83 / t35 + 0.44313737677495382697e-2 * (-0.3e1 / 0.4e1 * t63 * t4 - 0.3e1 / 0.2e1 * t27 * t20 * t24 + 0.6e1 * t14 * t51 * t22 * t53 + 0.3e1 / 0.2e1 * t89 * t191 + 0.98040000000000000000e1 * t89 * t63 + 0.3e1 / 0.4e1 * t39 * t131 - 0.6e1 * t15 * t151 * t153 - 0.19608000000000000000e2 * t95 * t191 - 0.49020000000000000000e1 * t41 * t131) * t44 * t3 + 0.88627475354990765394e-2 * t101 * t24 - 0.14481729473005491065e-1 * t45 * t75 - 0.10160440760000000000e0 * t26 * t131;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t3, t4, t6, t8, t9, t12, t14;
  double t15, t17, t19, t20, t21, t23, t24, t26;
  double t27, t30, t32, t35, t36, t38, t40, t43;
  double t45, t46, t48, t50, t53, t54, t56, t58;
  double t60, t61, t62, t65, t66, t69, t70, t73;
  double t75, t77, t78, t79, t82, t84, t85, t88;
  double t90, t91, t94, t95, t98, t99, t102, t104;
  double t106, t107, t108, t111, t115, t123, t125, t130;
  double t131, t134, t135, t136, t142, t147, t151, t153;
  double t155, t156, t161, t162, t167, t172, t173, t177;
  double t178, t179, t184, t189, t191, t196, t197, t200;
  double t206, t213, t215, t217, t218, t223, t224, t229;
  double t234, t235, t239, t240, t241, t246, t253, t255;
  double t258, t270, t282, t291, t301, t302, t304, t326;
  double t342, t366, t392, t402, t403, t405, t427, t443;
  double t467, t483;


  t1 = sqrt(r->rs);
  t3 = r->rs + 0.130720e2 * t1 + 0.427198e2;
  t4 = 0.1e1 / t3;
  t6 = log(r->rs * t4);
  t8 = 0.2e1 * t1;
  t9 = t8 + 0.130720e2;
  t12 = atan(0.44899888641287296627e-1 / t9);
  t14 = t1 + 0.409286e0;
  t15 = t14 * t14;
  t17 = log(t15 * t4);
  t19 = 0.310907e-1 * t6 + 0.20521972937837502661e2 * t12 + 0.44313737677495382697e-2 * t17;
  t20 = 0.1e1 + r->z;
  t21 = cbrt(t20);
  t23 = 0.1e1 - r->z;
  t24 = cbrt(t23);
  t26 = t21 * t20 + t24 * t23 - 0.2e1;
  t27 = M_CBRT2;
  t30 = 0.1e1 / (0.2e1 * t27 - 0.2e1);
  t32 = -t26 * t30 + 0.1e1;
  t35 = r->rs + 0.201231e2 * t1 + 0.101578e3;
  t36 = 0.1e1 / t35;
  t38 = log(r->rs * t36);
  t40 = t8 + 0.201231e2;
  t43 = atan(0.11716852777089929792e1 / t40);
  t45 = t1 + 0.743294e0;
  t46 = t45 * t45;
  t48 = log(t46 * t36);
  t50 = 0.1554535e-1 * t38 + 0.61881802979060631482e0 * t43 + 0.26673100072733151594e-2 * t48;
  r->f = t50 * t26 * t30 + t19 * t32;

  if(r->order < 1) return;

  t53 = t3 * t3;
  t54 = 0.1e1 / t53;
  t56 = 0.1e1 / t1;
  t58 = 0.1e1 + 0.65360000000000000000e1 * t56;
  t60 = -r->rs * t54 * t58 + t4;
  t61 = 0.1e1 / r->rs;
  t62 = t60 * t61;
  t65 = t9 * t9;
  t66 = 0.1e1 / t65;
  t69 = 0.20160000000000000000e-2 * t66 + 0.1e1;
  t70 = 0.1e1 / t69;
  t73 = t14 * t4;
  t75 = t15 * t54;
  t77 = t73 * t56 - t75 * t58;
  t78 = 0.1e1 / t15;
  t79 = t77 * t78;
  t82 = 0.310907e-1 * t62 * t3 - 0.92143429960841537844e0 * t66 * t56 * t70 + 0.44313737677495382697e-2 * t79 * t3;
  t84 = t35 * t35;
  t85 = 0.1e1 / t84;
  t88 = 0.1e1 + 0.10061550000000000000e2 * t56;
  t90 = -r->rs * t85 * t88 + t36;
  t91 = t90 * t61;
  t94 = t40 * t40;
  t95 = 0.1e1 / t94;
  t98 = 0.13728463900000000000e1 * t95 + 0.1e1;
  t99 = 0.1e1 / t98;
  t102 = t45 * t36;
  t104 = t46 * t85;
  t106 = t102 * t56 - t104 * t88;
  t107 = 0.1e1 / t46;
  t108 = t106 * t107;
  t111 = 0.1554535e-1 * t91 * t35 - 0.72505997508653845050e0 * t95 * t56 * t99 + 0.26673100072733151594e-2 * t108 * t35;
  r->dfdrs = t111 * t26 * t30 + t82 * t32;
  t115 = 0.4e1 / 0.3e1 * t21 - 0.4e1 / 0.3e1 * t24;
  r->dfdz = -t19 * t115 * t30 + t50 * t115 * t30;

  if(r->order < 2) return;

  t123 = 0.1e1 / t53 / t3;
  t125 = t58 * t58;
  t130 = -0.2e1 * t54 * t58 + 0.2e1 * r->rs * t123 * t125 + 0.32680000000000000000e1 * t56 * t54;
  t131 = t130 * t61;
  t134 = r->rs * r->rs;
  t135 = 0.1e1 / t134;
  t136 = t60 * t135;
  t142 = 0.1e1 / t65 / t9;
  t147 = 0.1e1 / t1 / r->rs;
  t151 = t65 * t65;
  t153 = 0.1e1 / t151 / t9;
  t155 = t69 * t69;
  t156 = 0.1e1 / t155;
  t161 = t14 * t54;
  t162 = t56 * t58;
  t167 = t15 * t123;
  t172 = t61 * t4 / 0.2e1 - 0.2e1 * t161 * t162 - t73 * t147 / 0.2e1 + 0.2e1 * t167 * t125 + 0.32680000000000000000e1 * t75 * t147;
  t173 = t172 * t78;
  t177 = 0.1e1 / t15 / t14;
  t178 = t77 * t177;
  t179 = t3 * t56;
  t184 = 0.310907e-1 * t131 * t3 - 0.310907e-1 * t136 * t3 + 0.310907e-1 * t62 * t58 + 0.18428685992168307569e1 * t142 * t61 * t70 + 0.46071714980420768922e0 * t66 * t147 * t70 - 0.37152230960211308059e-2 * t153 * t61 * t156 + 0.44313737677495382697e-2 * t173 * t3 - 0.44313737677495382697e-2 * t178 * t179 + 0.44313737677495382697e-2 * t79 * t58;
  t189 = 0.1e1 / t84 / t35;
  t191 = t88 * t88;
  t196 = -0.2e1 * t85 * t88 + 0.2e1 * r->rs * t189 * t191 + 0.50307750000000000000e1 * t56 * t85;
  t197 = t196 * t61;
  t200 = t90 * t135;
  t206 = 0.1e1 / t94 / t40;
  t213 = t94 * t94;
  t215 = 0.1e1 / t213 / t40;
  t217 = t98 * t98;
  t218 = 0.1e1 / t217;
  t223 = t45 * t85;
  t224 = t56 * t88;
  t229 = t46 * t189;
  t234 = t61 * t36 / 0.2e1 - 0.2e1 * t223 * t224 - t102 * t147 / 0.2e1 + 0.2e1 * t229 * t191 + 0.50307750000000000000e1 * t104 * t147;
  t235 = t234 * t107;
  t239 = 0.1e1 / t46 / t45;
  t240 = t106 * t239;
  t241 = t35 * t56;
  t246 = 0.1554535e-1 * t197 * t35 - 0.1554535e-1 * t200 * t35 + 0.1554535e-1 * t91 * t88 + 0.14501199501730769010e1 * t206 * t61 * t99 + 0.36252998754326922525e0 * t95 * t147 * t99 - 0.19907919386620884987e1 * t215 * t61 * t218 + 0.26673100072733151594e-2 * t235 * t35 - 0.26673100072733151594e-2 * t240 * t241 + 0.26673100072733151594e-2 * t108 * t88;
  r->d2fdrs2 = t246 * t26 * t30 + t184 * t32;
  r->d2fdrsz = t111 * t115 * t30 - t82 * t115 * t30;
  t253 = t21 * t21;
  t255 = t24 * t24;
  t258 = 0.4e1 / 0.9e1 / t253 + 0.4e1 / 0.9e1 / t255;
  r->d2fdz2 = -t19 * t258 * t30 + t50 * t258 * t30;

  if(r->order < 3) return;

  t270 = 0.1e1 / t134 / r->rs;
  t282 = 0.1e1 / t1 / t134;
  t291 = t15 * t15;
  t301 = t53 * t53;
  t302 = 0.1e1 / t301;
  t304 = t125 * t58;
  t326 = t151 * t151;
  t342 = t147 * t58;
  t366 = 0.22156868838747691348e-2 * t178 * t3 * t147 - 0.621814e-1 * t130 * t135 * t3 + 0.621814e-1 * t60 * t270 * t3 - 0.55286057976504922707e1 / t151 * t147 * t70 - 0.27643028988252461353e1 * t142 * t135 * t70 - 0.69107572470631153383e0 * t66 * t282 * t70 - 0.88627475354990765394e-2 * t172 * t177 * t179 - 0.88627475354990765394e-2 * t178 * t162 + 0.66470606516243074046e-2 * t77 / t291 * t3 * t61 + 0.310907e-1 * (0.6e1 * t123 * t125 + 0.49020000000000000000e1 * t54 * t147 - 0.6e1 * r->rs * t302 * t304 - 0.19608000000000000000e2 * t56 * t123 * t58) * t61 * t3 + 0.621814e-1 * t131 * t58 - 0.621814e-1 * t136 * t58 + 0.26006561672147915642e-1 / t151 / t65 * t147 * t156 + 0.55728346440316962088e-2 * t153 * t135 * t156 - 0.29959559046314398819e-4 / t326 * t147 / t155 / t69 + 0.44313737677495382697e-2 * (-0.3e1 / 0.4e1 * t135 * t4 - 0.3e1 / 0.2e1 * t61 * t54 * t58 + 0.6e1 * t14 * t123 * t56 * t125 + 0.3e1 / 0.2e1 * t161 * t342 + 0.98040000000000000000e1 * t161 * t135 + 0.3e1 / 0.4e1 * t73 * t282 - 0.6e1 * t15 * t302 * t304 - 0.19608000000000000000e2 * t167 * t342 - 0.49020000000000000000e1 * t75 * t282) * t78 * t3 + 0.88627475354990765394e-2 * t173 * t58 - 0.14481729473005491065e-1 * t79 * t147 - 0.10160440760000000000e0 * t60 * t282;
  t392 = t46 * t46;
  t402 = t84 * t84;
  t403 = 0.1e1 / t402;
  t405 = t191 * t88;
  t427 = t213 * t213;
  t443 = t147 * t88;
  t467 = 0.13336550036366575797e-2 * t240 * t35 * t147 - 0.3109070e-1 * t196 * t135 * t35 + 0.3109070e-1 * t90 * t270 * t35 - 0.43503598505192307030e1 / t213 * t147 * t99 - 0.21751799252596153515e1 * t206 * t135 * t99 - 0.54379498131490383788e0 * t95 * t282 * t99 - 0.53346200145466303188e-2 * t234 * t239 * t241 - 0.53346200145466303188e-2 * t240 * t224 + 0.40009650109099727391e-2 * t106 / t392 * t35 * t61 + 0.1554535e-1 * (0.6e1 * t189 * t191 + 0.75461625000000000000e1 * t85 * t147 - 0.6e1 * r->rs * t403 * t405 - 0.30184650000000000000e2 * t56 * t189 * t88) * t61 * t35 + 0.3109070e-1 * t197 * t88 - 0.3109070e-1 * t200 * t88 + 0.13935543570634619491e2 / t213 / t94 * t147 * t218 + 0.29861879079931327481e1 * t215 * t135 * t218 - 0.10932206104933398501e2 / t427 * t147 / t217 / t98 + 0.26673100072733151594e-2 * (-0.3e1 / 0.4e1 * t135 * t36 - 0.3e1 / 0.2e1 * t61 * t85 * t88 + 0.6e1 * t45 * t189 * t56 * t191 + 0.3e1 / 0.2e1 * t223 * t443 + 0.15092325000000000000e2 * t223 * t135 + 0.3e1 / 0.4e1 * t102 * t282 - 0.6e1 * t46 * t403 * t405 - 0.30184650000000000000e2 * t229 * t443 - 0.75461625000000000000e1 * t104 * t282) * t107 * t35 + 0.53346200145466303188e-2 * t235 * t88 - 0.13418636501840412071e-1 * t108 * t147 - 0.78205158146250000000e-1 * t90 * t282;
  r->d3fdrs3 = t467 * t26 * t30 + t366 * t32;
  r->d3fdrs2z = -t184 * t115 * t30 + t246 * t115 * t30;
  r->d3fdrsz2 = t111 * t258 * t30 - t82 * t258 * t30;
  t483 = -0.8e1 / 0.27e2 / t253 / t20 + 0.8e1 / 0.27e2 / t255 / t23;
  r->d3fdz3 = -t19 * t483 * t30 + t50 * t483 * t30;

  if(r->order < 4) return;


}

void 
XC(lda_c_vwn_rpa_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_vwn_rpa_func)
