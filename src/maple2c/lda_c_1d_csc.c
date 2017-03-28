/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/lda_c_1d_csc.mpl
  Type of functional: work_lda
*/

static void
func0(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t2, t4, t5, t8, t9, t10, t11;
  double t12, t13, t15, t18, t19, t20, t22, t23;
  double t24, t26, t27, t31, t32, t34, t37, t38;
  double t39, t40, t42, t43, t49, t50, t52, t55;
  double t60, t61, t66, t67, t69, t70, t71, t72;
  double t73, t75, t76, t80, t81, t82, t85, t90;
  double t96, t97, t129, t151;

  lda_c_1d_csc_params *params;

  assert(p->params != NULL);
  params = (lda_c_1d_csc_params * )(p->params);

  t1 = params->para[4];
  t2 = r->rs * r->rs;
  t4 = t1 * t2 + r->rs;
  t5 = params->para[7];
  t8 = params->para[9];
  t9 = pow(r->rs, t8);
  t10 = params->para[8] * t9;
  t11 = t5 * r->rs + t10 + 0.1e1;
  t12 = log(t11);
  t13 = t4 * t12;
  t15 = params->para[1];
  t18 = params->para[5];
  t19 = pow(r->rs, t18);
  t20 = params->para[2] * t19;
  t22 = params->para[6];
  t23 = pow(r->rs, t22);
  t24 = params->para[3] * t23;
  t26 = 0.2e1 * t15 * r->rs + 0.2e1 * t20 + 0.2e1 * t24 + 0.2e1 * params->para[0];
  t27 = 0.1e1 / t26;
  r->f = -t13 * t27;

  if(r->order < 1) return;

  t31 = 0.2e1 * r->rs * t1 + 0.1e1;
  t32 = t31 * t12;
  t34 = 0.1e1 / r->rs;
  t37 = t10 * t8 * t34 + t5;
  t38 = t4 * t37;
  t39 = 0.1e1 / t11;
  t40 = t39 * t27;
  t42 = t26 * t26;
  t43 = 0.1e1 / t42;
  t49 = 0.2e1 * t20 * t18 * t34 + 0.2e1 * t24 * t22 * t34 + 0.2e1 * t15;
  t50 = t43 * t49;
  r->dfdrs = t13 * t50 - t32 * t27 - t38 * t40;

  if(r->order < 2) return;

  t52 = t1 * t12;
  t55 = t31 * t37;
  t60 = t8 * t8;
  t61 = 0.1e1 / t2;
  t66 = t10 * t60 * t61 - t10 * t8 * t61;
  t67 = t4 * t66;
  t69 = t37 * t37;
  t70 = t4 * t69;
  t71 = t11 * t11;
  t72 = 0.1e1 / t71;
  t73 = t72 * t27;
  t75 = t39 * t43;
  t76 = t75 * t49;
  t80 = 0.1e1 / t42 / t26;
  t81 = t49 * t49;
  t82 = t80 * t81;
  t85 = t18 * t18;
  t90 = t22 * t22;
  t96 = -0.2e1 * t20 * t18 * t61 + 0.2e1 * t20 * t85 * t61 - 0.2e1 * t24 * t22 * t61 + 0.2e1 * t24 * t90 * t61;
  t97 = t43 * t96;
  r->d2fdrs2 = -0.2e1 * t13 * t82 + t13 * t97 - 0.2e1 * t52 * t27 + 0.2e1 * t32 * t50 + 0.2e1 * t38 * t76 - 0.2e1 * t55 * t40 - t67 * t40 + t70 * t73;

  if(r->order < 3) return;

  t129 = t42 * t42;
  t151 = 0.1e1 / t2 / r->rs;
  r->d3fdrs3 = -0.6e1 * t38 * t39 * t80 * t81 + 0.3e1 * t31 * t69 * t73 + 0.6e1 * t55 * t76 - 0.6e1 * t32 * t82 + 0.3e1 * t67 * t73 * t37 + 0.3e1 * t67 * t76 - 0.2e1 * t4 * t69 * t37 / t71 / t11 * t27 - 0.3e1 * t70 * t72 * t43 * t49 + 0.3e1 * t38 * t75 * t96 + 0.6e1 * t13 / t129 * t81 * t49 - 0.6e1 * t13 * t80 * t49 * t96 + 0.6e1 * t52 * t50 - 0.6e1 * t1 * t37 * t40 - 0.3e1 * t31 * t66 * t40 + 0.3e1 * t32 * t97 - t4 * (t10 * t60 * t8 * t151 - 0.3e1 * t10 * t60 * t151 + 0.2e1 * t10 * t8 * t151) * t40 + t13 * t43 * (0.2e1 * t20 * t85 * t18 * t151 + 0.2e1 * t24 * t90 * t22 * t151 + 0.4e1 * t20 * t18 * t151 - 0.6e1 * t20 * t85 * t151 + 0.4e1 * t24 * t22 * t151 - 0.6e1 * t24 * t90 * t151);

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t2, t4, t5, t8, t9, t10, t11;
  double t12, t13, t15, t18, t19, t20, t22, t23;
  double t24, t26, t27, t28, t29, t31, t32, t35;
  double t36, t37, t38, t39, t40, t42, t45, t46;
  double t47, t49, t50, t51, t53, t54, t56, t57;
  double t61, t62, t63, t64, t67, t68, t69, t70;
  double t71, t72, t73, t79, t80, t81, t84, t85;
  double t89, t90, t91, t92, t94, t95, t101, t102;
  double t104, t107, t109, t110, t112, t114, t115, t116;
  double t121, t122, t123, t124, t125, t126, t127, t128;
  double t129, t130, t131, t133, t135, t136, t137, t139;
  double t140, t145, t151, t152, t153, t154, t157, t162;
  double t167, t168, t170, t171, t172, t173, t174, t176;
  double t177, t181, t182, t183, t186, t191, t197, t198;
  double t200, t206, t209, t213, t234, t236, t243, t244;
  double t249, t262, t269, t270, t273, t276, t278, t281;
  double t292, t315, t366, t369, t371, t375, t376;

  lda_c_1d_csc_params *params;

  assert(p->params != NULL);
  params = (lda_c_1d_csc_params * )(p->params);

  t1 = params->para[4];
  t2 = r->rs * r->rs;
  t4 = t1 * t2 + r->rs;
  t5 = params->para[7];
  t8 = params->para[9];
  t9 = pow(r->rs, t8);
  t10 = params->para[8] * t9;
  t11 = t5 * r->rs + t10 + 0.1e1;
  t12 = log(t11);
  t13 = t4 * t12;
  t15 = params->para[1];
  t18 = params->para[5];
  t19 = pow(r->rs, t18);
  t20 = params->para[2] * t19;
  t22 = params->para[6];
  t23 = pow(r->rs, t22);
  t24 = params->para[3] * t23;
  t26 = 0.2e1 * t15 * r->rs + 0.2e1 * t20 + 0.2e1 * t24 + 0.2e1 * params->para[0];
  t27 = 0.1e1 / t26;
  t28 = t13 * t27;
  t29 = params->ferro[4];
  t31 = t29 * t2 + r->rs;
  t32 = params->ferro[7];
  t35 = params->ferro[9];
  t36 = pow(r->rs, t35);
  t37 = params->ferro[8] * t36;
  t38 = t32 * r->rs + t37 + 0.1e1;
  t39 = log(t38);
  t40 = t31 * t39;
  t42 = params->ferro[1];
  t45 = params->ferro[5];
  t46 = pow(r->rs, t45);
  t47 = params->ferro[2] * t46;
  t49 = params->ferro[6];
  t50 = pow(r->rs, t49);
  t51 = params->ferro[3] * t50;
  t53 = 0.2e1 * t42 * r->rs + 0.2e1 * t47 + 0.2e1 * t51 + 0.2e1 * params->ferro[0];
  t54 = 0.1e1 / t53;
  t56 = -t40 * t54 + t28;
  t57 = r->z * r->z;
  r->f = t56 * t57 - t28;

  if(r->order < 1) return;

  t61 = 0.2e1 * r->rs * t1 + 0.1e1;
  t62 = t61 * t12;
  t63 = t62 * t27;
  t64 = 0.1e1 / r->rs;
  t67 = t10 * t8 * t64 + t5;
  t68 = t4 * t67;
  t69 = 0.1e1 / t11;
  t70 = t69 * t27;
  t71 = t68 * t70;
  t72 = t26 * t26;
  t73 = 0.1e1 / t72;
  t79 = 0.2e1 * t20 * t18 * t64 + 0.2e1 * t24 * t22 * t64 + 0.2e1 * t15;
  t80 = t73 * t79;
  t81 = t13 * t80;
  t84 = 0.2e1 * r->rs * t29 + 0.1e1;
  t85 = t84 * t39;
  t89 = t37 * t35 * t64 + t32;
  t90 = t31 * t89;
  t91 = 0.1e1 / t38;
  t92 = t91 * t54;
  t94 = t53 * t53;
  t95 = 0.1e1 / t94;
  t101 = 0.2e1 * t47 * t45 * t64 + 0.2e1 * t51 * t49 * t64 + 0.2e1 * t42;
  t102 = t95 * t101;
  t104 = t40 * t102 - t85 * t54 - t90 * t92 + t63 + t71 - t81;
  r->dfdrs = t104 * t57 - t63 - t71 + t81;
  r->dfdz = 0.2e1 * t56 * r->z;

  if(r->order < 2) return;

  t107 = t1 * t12;
  t109 = 0.2e1 * t107 * t27;
  t110 = t61 * t67;
  t112 = 0.2e1 * t110 * t70;
  t114 = 0.2e1 * t62 * t80;
  t115 = t8 * t8;
  t116 = 0.1e1 / t2;
  t121 = t10 * t115 * t116 - t10 * t8 * t116;
  t122 = t4 * t121;
  t123 = t122 * t70;
  t124 = t67 * t67;
  t125 = t4 * t124;
  t126 = t11 * t11;
  t127 = 0.1e1 / t126;
  t128 = t127 * t27;
  t129 = t125 * t128;
  t130 = t69 * t73;
  t131 = t130 * t79;
  t133 = 0.2e1 * t68 * t131;
  t135 = 0.1e1 / t72 / t26;
  t136 = t79 * t79;
  t137 = t135 * t136;
  t139 = 0.2e1 * t13 * t137;
  t140 = t18 * t18;
  t145 = t22 * t22;
  t151 = 0.2e1 * t20 * t140 * t116 + 0.2e1 * t24 * t145 * t116 - 0.2e1 * t20 * t18 * t116 - 0.2e1 * t24 * t22 * t116;
  t152 = t73 * t151;
  t153 = t13 * t152;
  t154 = t29 * t39;
  t157 = t84 * t89;
  t162 = t35 * t35;
  t167 = t37 * t162 * t116 - t37 * t35 * t116;
  t168 = t31 * t167;
  t170 = t89 * t89;
  t171 = t31 * t170;
  t172 = t38 * t38;
  t173 = 0.1e1 / t172;
  t174 = t173 * t54;
  t176 = t91 * t95;
  t177 = t176 * t101;
  t181 = 0.1e1 / t94 / t53;
  t182 = t101 * t101;
  t183 = t181 * t182;
  t186 = t45 * t45;
  t191 = t49 * t49;
  t197 = 0.2e1 * t47 * t186 * t116 + 0.2e1 * t51 * t191 * t116 - 0.2e1 * t47 * t45 * t116 - 0.2e1 * t51 * t49 * t116;
  t198 = t95 * t197;
  t200 = 0.2e1 * t85 * t102 - 0.2e1 * t154 * t54 - 0.2e1 * t157 * t92 - t168 * t92 + t171 * t174 + 0.2e1 * t90 * t177 - 0.2e1 * t40 * t183 + t40 * t198 + t109 + t112 - t114 + t123 - t129 - t133 + t139 - t153;
  r->d2fdrs2 = t200 * t57 - t109 - t112 + t114 - t123 + t129 + t133 - t139 + t153;
  r->d2fdrsz = 0.2e1 * t104 * r->z;
  r->d2fdz2 = 0.2e1 * t56;

  if(r->order < 3) return;

  t206 = 0.6e1 * t68 * t69 * t135 * t136;
  t209 = 0.3e1 * t68 * t130 * t151;
  t213 = 0.6e1 * t13 * t135 * t79 * t151;
  t234 = 0.3e1 * t61 * t124 * t128;
  t236 = 0.6e1 * t62 * t137;
  t243 = 0.2e1 * t4 * t124 * t67 / t126 / t11 * t27;
  t244 = t72 * t72;
  t249 = 0.6e1 * t13 / t244 * t136 * t79;
  t262 = t94 * t94;
  t269 = 0.6e1 * t107 * t80;
  t270 = -t209 + t213 + 0.6e1 * t157 * t177 + 0.3e1 * t168 * t174 * t89 + 0.3e1 * t168 * t177 - 0.3e1 * t171 * t173 * t95 * t101 + 0.3e1 * t90 * t176 * t197 - 0.6e1 * t40 * t181 * t101 * t197 - t234 + t236 + t243 - t249 + 0.3e1 * t84 * t170 * t174 - 0.6e1 * t85 * t183 - 0.2e1 * t31 * t170 * t89 / t172 / t38 * t54 + 0.6e1 * t40 / t262 * t182 * t101 - t269;
  t273 = 0.6e1 * t1 * t67 * t70;
  t276 = 0.3e1 * t61 * t121 * t70;
  t278 = 0.3e1 * t62 * t152;
  t281 = 0.1e1 / t2 / r->rs;
  t292 = t4 * (t10 * t115 * t8 * t281 - 0.3e1 * t10 * t115 * t281 + 0.2e1 * t10 * t8 * t281) * t70;
  t315 = t13 * t73 * (0.2e1 * t20 * t140 * t18 * t281 + 0.2e1 * t24 * t145 * t22 * t281 - 0.6e1 * t20 * t140 * t281 - 0.6e1 * t24 * t145 * t281 + 0.4e1 * t20 * t18 * t281 + 0.4e1 * t24 * t22 * t281);
  t366 = 0.6e1 * t110 * t131;
  t369 = 0.3e1 * t122 * t128 * t67;
  t371 = 0.3e1 * t122 * t131;
  t375 = 0.3e1 * t125 * t127 * t73 * t79;
  t376 = t273 + t276 - t278 + t292 - t315 + 0.6e1 * t154 * t102 - 0.6e1 * t29 * t89 * t92 - 0.3e1 * t84 * t167 * t92 + 0.3e1 * t85 * t198 - t31 * (t37 * t162 * t35 * t281 - 0.3e1 * t37 * t162 * t281 + 0.2e1 * t37 * t35 * t281) * t92 + t40 * t95 * (0.2e1 * t47 * t186 * t45 * t281 + 0.2e1 * t51 * t191 * t49 * t281 - 0.6e1 * t47 * t186 * t281 - 0.6e1 * t51 * t191 * t281 + 0.4e1 * t47 * t45 * t281 + 0.4e1 * t51 * t49 * t281) + t206 - 0.6e1 * t90 * t91 * t181 * t182 - t366 - t369 - t371 + t375;
  r->d3fdrs3 = -t206 + (t270 + t376) * t57 + t234 + t366 - t236 + t369 + t371 - t243 - t375 + t209 + t249 - t213 + t269 - t273 - t276 + t278 - t292 + t315;
  r->d3fdrs2z = 0.2e1 * t200 * r->z;
  r->d3fdrsz2 = 0.2e1 * t104;
  r->d3fdz3 = 0.0e0;

  if(r->order < 4) return;


}

void 
XC(lda_c_1d_csc_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_1d_csc_func)
