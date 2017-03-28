/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/lda_c_vwn_3.mpl
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
  t3 = r->rs + 0.372744e1 * t1 + 0.129352e2;
  t4 = 0.1e1 / t3;
  t6 = log(r->rs * t4);
  t9 = 0.2e1 * t1 + 0.372744e1;
  t12 = atan(0.61519908197590802322e1 / t9);
  t14 = t1 + 0.10498e0;
  t15 = t14 * t14;
  t17 = log(t15 * t4);
  r->f = 0.310907e-1 * t6 + 0.38783294878113014393e-1 * t12 + 0.96902277115443742139e-3 * t17;

  if(r->order < 1) return;

  t19 = t3 * t3;
  t20 = 0.1e1 / t19;
  t22 = 0.1e1 / t1;
  t24 = 0.1e1 + 0.18637200000000000000e1 * t22;
  t26 = -r->rs * t20 * t24 + t4;
  t27 = 0.1e1 / r->rs;
  t28 = t26 * t27;
  t31 = t9 * t9;
  t32 = 0.1e1 / t31;
  t35 = 0.37846991046400000000e2 * t32 + 0.1e1;
  t36 = 0.1e1 / t35;
  t39 = t14 * t4;
  t41 = t15 * t20;
  t43 = t39 * t22 - t41 * t24;
  t44 = 0.1e1 / t15;
  t45 = t43 * t44;
  r->dfdrs = 0.310907e-1 * t28 * t3 - 0.23859447405016062107e0 * t32 * t22 * t36 + 0.96902277115443742139e-3 * t45 * t3;

  if(r->order < 2) return;

  t51 = 0.1e1 / t19 / t3;
  t53 = t24 * t24;
  t58 = -0.2e1 * t20 * t24 + 0.2e1 * r->rs * t51 * t53 + 0.93186000000000000000e0 * t22 * t20;
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
  t100 = t27 * t4 / 0.2e1 - 0.2e1 * t89 * t90 - t39 * t75 / 0.2e1 + 0.2e1 * t95 * t53 + 0.93186000000000000000e0 * t41 * t75;
  t101 = t100 * t44;
  t105 = 0.1e1 / t15 / t14;
  t106 = t43 * t105;
  t107 = t3 * t22;
  r->d2fdrs2 = 0.310907e-1 * t59 * t3 - 0.310907e-1 * t64 * t3 + 0.310907e-1 * t28 * t24 + 0.47718894810032124214e0 * t70 * t27 * t36 + 0.11929723702508031054e0 * t32 * t75 * t36 - 0.18060165846193892340e2 * t81 * t27 * t84 + 0.96902277115443742139e-3 * t101 * t3 - 0.96902277115443742139e-3 * t106 * t107 + 0.96902277115443742139e-3 * t45 * t24;

  if(r->order < 3) return;

  t131 = 0.1e1 / t1 / t62;
  t140 = t15 * t15;
  t150 = t19 * t19;
  t151 = 0.1e1 / t150;
  t153 = t53 * t24;
  t175 = t79 * t79;
  t191 = t75 * t24;
  r->d3fdrs3 = 0.48451138557721871070e-3 * t106 * t3 * t75 - 0.621814e-1 * t58 * t63 * t3 + 0.621814e-1 * t26 / t62 / r->rs * t3 - 0.14315668443009637264e1 / t79 * t75 * t36 - 0.71578342215048186322e0 * t70 * t63 * t36 - 0.17894585553762046581e0 * t32 * t131 * t36 - 0.19380455423088748428e-2 * t100 * t105 * t107 - 0.19380455423088748428e-2 * t106 * t90 + 0.14535341567316561321e-2 * t43 / t140 * t3 * t27 + 0.310907e-1 * (0.6e1 * t51 * t53 + 0.13977900000000000000e1 * t20 * t75 - 0.6e1 * r->rs * t151 * t153 - 0.55911600000000000000e1 * t22 * t51 * t24) * t27 * t3 + 0.621814e-1 * t59 * t24 - 0.621814e-1 * t64 * t24 + 0.12642116092335724638e3 / t79 / t31 * t75 * t84 + 0.27090248769290838510e2 * t81 * t63 * t84 - 0.27340917403095972916e4 / t175 * t75 / t83 / t35 + 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t63 * t4 - 0.3e1 / 0.2e1 * t27 * t20 * t24 + 0.6e1 * t14 * t51 * t22 * t53 + 0.3e1 / 0.2e1 * t89 * t191 + 0.27955800000000000000e1 * t89 * t63 + 0.3e1 / 0.4e1 * t39 * t131 - 0.6e1 * t15 * t151 * t153 - 0.55911600000000000000e1 * t95 * t191 - 0.13977900000000000000e1 * t41 * t131) * t44 * t3 + 0.19380455423088748428e-2 * t101 * t24 - 0.90299355952797405550e-3 * t45 * t75 - 0.28972179702000000000e-1 * t26 * t131;

  if(r->order < 4) return;


}

static void
func1(const XC(func_type) *p, XC(lda_work_t) *r)
{
  double t1, t3, t4, t6, t7, t8, t9, t12;
  double t13, t14, t15, t17, t18, t20, t21, t23;
  double t25, t28, t30, t31, t33, t35, t37, t38;
  double t40, t42, t45, t47, t48, t50, t53, t54;
  double t56, t58, t61, t63, t64, t66, t68, t69;
  double t70, t71, t72, t74, t75, t77, t78, t81;
  double t83, t84, t86, t89, t90, t91, t92, t94;
  double t95, t97, t98, t99, t101, t102, t103, t104;
  double t105, t106, t107, t108, t111, t112, t114, t115;
  double t117, t119, t121, t122, t123, t125, t126, t127;
  double t130, t131, t133, t134, t136, t138, t139, t140;
  double t142, t143, t144, t147, t149, t150, t153, t154;
  double t157, t158, t161, t163, t165, t166, t167, t170;
  double t171, t172, t175, t176, t177, t178, t179, t180;
  double t183, t185, t186, t189, t190, t193, t194, t197;
  double t199, t201, t202, t203, t206, t207, t210, t212;
  double t213, t216, t217, t220, t221, t224, t226, t228;
  double t229, t230, t233, t234, t235, t238, t239, t242;
  double t244, t245, t247, t248, t251, t252, t255, t257;
  double t259, t260, t261, t265, t266, t269, t272, t273;
  double t274, t277, t278, t279, t282, t284, t290, t292;
  double t297, t298, t300, t301, t302, t303, t305, t307;
  double t309, t312, t314, t317, t318, t320, t322, t323;
  double t325, t328, t329, t334, t339, t340, t342, t344;
  double t345, t346, t348, t350, t354, t356, t361, t362;
  double t365, t371, t378, t380, t382, t383, t388, t389;
  double t394, t399, t400, t404, t405, t406, t411, t412;
  double t413, t416, t417, t420, t424, t425, t426, t427;
  double t428, t429, t432, t438, t440, t445, t446, t449;
  double t455, t462, t464, t466, t467, t472, t473, t478;
  double t483, t484, t488, t489, t490, t498, t500, t505;
  double t506, t509, t515, t522, t524, t526, t527, t532;
  double t533, t538, t543, t544, t548, t549, t550, t555;
  double t556, t557, t563, t565, t570, t571, t573, t577;
  double t584, t586, t588, t589, t594, t595, t600, t605;
  double t606, t610, t611, t612, t618, t619, t622, t628;
  double t631, t632, t639, t643, t645, t648, t649, t650;
  double t653, t656, t657, t660, t664, t676, t682, t685;
  double t686, t688, t698, t700, t702, t704, t713, t714;
  double t716, t738, t754, t776, t778, t779, t784, t790;
  double t791, t799, t807, t834, t836, t838, t843, t846;
  double t847, t853, t856, t859, t863, t866, t869, t870;
  double t871, t874, t892, t893, t895, t916, t932, t975;
  double t983, t992, t1062, t1063, t1065, t1087, t1088, t1104;
  double t1130, t1131, t1133, t1155, t1171, t1189, t1200, t1217;
  double t1231, t1303;


  t1 = sqrt(r->rs);
  t3 = r->rs + 0.372744e1 * t1 + 0.129352e2;
  t4 = 0.1e1 / t3;
  t6 = log(r->rs * t4);
  t7 = 0.310907e-1 * t6;
  t8 = 0.2e1 * t1;
  t9 = t8 + 0.372744e1;
  t12 = atan(0.61519908197590802322e1 / t9);
  t13 = 0.38783294878113014393e-1 * t12;
  t14 = t1 + 0.10498e0;
  t15 = t14 * t14;
  t17 = log(t15 * t4);
  t18 = 0.96902277115443742139e-3 * t17;
  t20 = r->rs + 0.706042e1 * t1 + 0.180578e2;
  t21 = 0.1e1 / t20;
  t23 = log(r->rs * t21);
  t25 = t8 + 0.706042e1;
  t28 = atan(0.47309269095601128300e1 / t25);
  t30 = t1 + 0.32500e0;
  t31 = t30 * t30;
  t33 = log(t31 * t21);
  t35 = 0.1554535e-1 * t23 + 0.52491393169780936218e-1 * t28 + 0.22478670955426118383e-2 * t33 - t7 - t13 - t18;
  t37 = r->rs + 0.201231e2 * t1 + 0.101578e3;
  t38 = 0.1e1 / t37;
  t40 = log(r->rs * t38);
  t42 = t8 + 0.201231e2;
  t45 = atan(0.11716852777089929792e1 / t42);
  t47 = t1 + 0.743294e0;
  t48 = t47 * t47;
  t50 = log(t48 * t38);
  t53 = r->rs + 0.130720e2 * t1 + 0.427198e2;
  t54 = 0.1e1 / t53;
  t56 = log(r->rs * t54);
  t58 = t8 + 0.130720e2;
  t61 = atan(0.44899888641287296627e-1 / t58);
  t63 = t1 + 0.409286e0;
  t64 = t63 * t63;
  t66 = log(t64 * t54);
  t68 = 0.1554535e-1 * t40 + 0.61881802979060631482e0 * t45 + 0.26673100072733151594e-2 * t50 - 0.310907e-1 * t56 - 0.20521972937837502661e2 * t61 - 0.44313737677495382697e-2 * t66;
  t69 = 0.1e1 / t68;
  t70 = t35 * t69;
  t71 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t72 = 0.1e1 / t71;
  t74 = r->rs + 0.106835e1 * t1 + 0.114813e2;
  t75 = 0.1e1 / t74;
  t77 = log(r->rs * t75);
  t78 = t8 + 0.106835e1;
  t81 = atan(0.66920720466459414830e1 / t78);
  t83 = t1 + 0.228344e0;
  t84 = t83 * t83;
  t86 = log(t84 * t75);
  t89 = t72 * (t77 + 0.32323836906055067299e0 * t81 + 0.21608710360898267022e-1 * t86);
  t90 = t70 * t89;
  t91 = 0.1e1 + r->z;
  t92 = cbrt(t91);
  t94 = 0.1e1 - r->z;
  t95 = cbrt(t94);
  t97 = t92 * t91 + t95 * t94 - 0.2e1;
  t98 = M_CBRT2;
  t99 = t98 - 0.1e1;
  t101 = 0.1e1 / t99 / 0.2e1;
  t102 = t97 * t101;
  t103 = r->z * r->z;
  t104 = t103 * t103;
  t105 = -t104 + 0.1e1;
  t106 = 0.9e1 * t99;
  t107 = t105 * t106;
  t108 = t102 * t107;
  t111 = t35 * t97;
  t112 = t101 * t104;
  r->f = t7 + t13 + t18 - t90 * t108 / 0.24e2 + t111 * t112;

  if(r->order < 1) return;

  t114 = t3 * t3;
  t115 = 0.1e1 / t114;
  t117 = 0.1e1 / t1;
  t119 = 0.1e1 + 0.18637200000000000000e1 * t117;
  t121 = -r->rs * t115 * t119 + t4;
  t122 = 0.1e1 / r->rs;
  t123 = t121 * t122;
  t125 = 0.310907e-1 * t123 * t3;
  t126 = t9 * t9;
  t127 = 0.1e1 / t126;
  t130 = 0.37846991046400000000e2 * t127 + 0.1e1;
  t131 = 0.1e1 / t130;
  t133 = 0.23859447405016062107e0 * t127 * t117 * t131;
  t134 = t14 * t4;
  t136 = t15 * t115;
  t138 = t134 * t117 - t136 * t119;
  t139 = 0.1e1 / t15;
  t140 = t138 * t139;
  t142 = 0.96902277115443742139e-3 * t140 * t3;
  t143 = t20 * t20;
  t144 = 0.1e1 / t143;
  t147 = 0.1e1 + 0.35302100000000000000e1 * t117;
  t149 = -r->rs * t144 * t147 + t21;
  t150 = t149 * t122;
  t153 = t25 * t25;
  t154 = 0.1e1 / t153;
  t157 = 0.22381669423600000000e2 * t154 + 0.1e1;
  t158 = 0.1e1 / t157;
  t161 = t30 * t21;
  t163 = t31 * t144;
  t165 = t161 * t117 - t163 * t147;
  t166 = 0.1e1 / t31;
  t167 = t165 * t166;
  t170 = 0.1554535e-1 * t150 * t20 - 0.24833294446721653957e0 * t154 * t117 * t158 + 0.22478670955426118383e-2 * t167 * t20 - t125 + t133 - t142;
  t171 = t170 * t69;
  t172 = t171 * t89;
  t175 = t68 * t68;
  t176 = 0.1e1 / t175;
  t177 = t35 * t176;
  t178 = t177 * t89;
  t179 = t37 * t37;
  t180 = 0.1e1 / t179;
  t183 = 0.1e1 + 0.10061550000000000000e2 * t117;
  t185 = -r->rs * t180 * t183 + t38;
  t186 = t185 * t122;
  t189 = t42 * t42;
  t190 = 0.1e1 / t189;
  t193 = 0.13728463900000000000e1 * t190 + 0.1e1;
  t194 = 0.1e1 / t193;
  t197 = t47 * t38;
  t199 = t48 * t180;
  t201 = t197 * t117 - t199 * t183;
  t202 = 0.1e1 / t48;
  t203 = t201 * t202;
  t206 = t53 * t53;
  t207 = 0.1e1 / t206;
  t210 = 0.1e1 + 0.65360000000000000000e1 * t117;
  t212 = -r->rs * t207 * t210 + t54;
  t213 = t212 * t122;
  t216 = t58 * t58;
  t217 = 0.1e1 / t216;
  t220 = 0.20160000000000000000e-2 * t217 + 0.1e1;
  t221 = 0.1e1 / t220;
  t224 = t63 * t54;
  t226 = t64 * t207;
  t228 = t224 * t117 - t226 * t210;
  t229 = 0.1e1 / t64;
  t230 = t228 * t229;
  t233 = 0.1554535e-1 * t186 * t37 - 0.72505997508653845050e0 * t190 * t117 * t194 + 0.26673100072733151594e-2 * t203 * t37 - 0.310907e-1 * t213 * t53 + 0.92143429960841537844e0 * t217 * t117 * t221 - 0.44313737677495382697e-2 * t230 * t53;
  t234 = t107 * t233;
  t235 = t102 * t234;
  t238 = t74 * t74;
  t239 = 0.1e1 / t238;
  t242 = 0.1e1 + 0.53417500000000000000e0 * t117;
  t244 = -r->rs * t239 * t242 + t75;
  t245 = t244 * t122;
  t247 = t78 * t78;
  t248 = 0.1e1 / t247;
  t251 = 0.44783828277500000000e2 * t248 + 0.1e1;
  t252 = 0.1e1 / t251;
  t255 = t83 * t75;
  t257 = t84 * t239;
  t259 = t255 * t117 - t257 * t242;
  t260 = 0.1e1 / t84;
  t261 = t259 * t260;
  t265 = t72 * (t245 * t74 - 0.21631344539935355116e1 * t248 * t117 * t252 + 0.21608710360898267022e-1 * t261 * t74);
  t266 = t70 * t265;
  t269 = t170 * t97;
  r->dfdrs = t125 - t133 + t142 - t172 * t108 / 0.24e2 + t178 * t235 / 0.24e2 - t266 * t108 / 0.24e2 + t269 * t112;
  t272 = 0.4e1 / 0.3e1 * t92 - 0.4e1 / 0.3e1 * t95;
  t273 = t272 * t101;
  t274 = t273 * t107;
  t277 = t103 * r->z;
  t278 = t277 * t106;
  t279 = t102 * t278;
  t282 = t35 * t272;
  t284 = t101 * t277;
  r->dfdz = -t90 * t274 / 0.24e2 + t90 * t279 / 0.6e1 + t282 * t112 + 0.4e1 * t111 * t284;

  if(r->order < 2) return;

  t290 = 0.1e1 / t114 / t3;
  t292 = t119 * t119;
  t297 = -0.2e1 * t115 * t119 + 0.2e1 * r->rs * t290 * t292 + 0.93186000000000000000e0 * t117 * t115;
  t298 = t297 * t122;
  t300 = 0.310907e-1 * t298 * t3;
  t301 = r->rs * r->rs;
  t302 = 0.1e1 / t301;
  t303 = t121 * t302;
  t305 = 0.310907e-1 * t303 * t3;
  t307 = 0.310907e-1 * t123 * t119;
  t309 = 0.1e1 / t126 / t9;
  t312 = 0.47718894810032124214e0 * t309 * t122 * t131;
  t314 = 0.1e1 / t1 / r->rs;
  t317 = 0.11929723702508031054e0 * t127 * t314 * t131;
  t318 = t126 * t126;
  t320 = 0.1e1 / t318 / t9;
  t322 = t130 * t130;
  t323 = 0.1e1 / t322;
  t325 = 0.18060165846193892340e2 * t320 * t122 * t323;
  t328 = t14 * t115;
  t329 = t117 * t119;
  t334 = t15 * t290;
  t339 = t122 * t4 / 0.2e1 - 0.2e1 * t328 * t329 - t134 * t314 / 0.2e1 + 0.2e1 * t334 * t292 + 0.93186000000000000000e0 * t136 * t314;
  t340 = t339 * t139;
  t342 = 0.96902277115443742139e-3 * t340 * t3;
  t344 = 0.1e1 / t15 / t14;
  t345 = t138 * t344;
  t346 = t3 * t117;
  t348 = 0.96902277115443742139e-3 * t345 * t346;
  t350 = 0.96902277115443742139e-3 * t140 * t119;
  t354 = 0.1e1 / t143 / t20;
  t356 = t147 * t147;
  t361 = -0.2e1 * t144 * t147 + 0.2e1 * r->rs * t354 * t356 + 0.17651050000000000000e1 * t117 * t144;
  t362 = t361 * t122;
  t365 = t149 * t302;
  t371 = 0.1e1 / t153 / t25;
  t378 = t153 * t153;
  t380 = 0.1e1 / t378 / t25;
  t382 = t157 * t157;
  t383 = 0.1e1 / t382;
  t388 = t30 * t144;
  t389 = t117 * t147;
  t394 = t31 * t354;
  t399 = t122 * t21 / 0.2e1 - 0.2e1 * t388 * t389 - t161 * t314 / 0.2e1 + 0.2e1 * t394 * t356 + 0.17651050000000000000e1 * t163 * t314;
  t400 = t399 * t166;
  t404 = 0.1e1 / t31 / t30;
  t405 = t165 * t404;
  t406 = t20 * t117;
  t411 = 0.1554535e-1 * t362 * t20 - 0.1554535e-1 * t365 * t20 + 0.1554535e-1 * t150 * t147 + 0.49666588893443307914e0 * t371 * t122 * t158 + 0.12416647223360826978e0 * t154 * t314 * t158 - 0.11116211740108914433e2 * t380 * t122 * t383 + 0.22478670955426118383e-2 * t400 * t20 - 0.22478670955426118383e-2 * t405 * t406 + 0.22478670955426118383e-2 * t167 * t147 - t300 + t305 - t307 - t312 - t317 + t325 - t342 + t348 - t350;
  t412 = t411 * t69;
  t413 = t412 * t89;
  t416 = t170 * t176;
  t417 = t416 * t89;
  t420 = t171 * t265;
  t424 = 0.1e1 / t175 / t68;
  t425 = t35 * t424;
  t426 = t425 * t89;
  t427 = t233 * t233;
  t428 = t107 * t427;
  t429 = t102 * t428;
  t432 = t177 * t265;
  t438 = 0.1e1 / t179 / t37;
  t440 = t183 * t183;
  t445 = -0.2e1 * t180 * t183 + 0.2e1 * r->rs * t438 * t440 + 0.50307750000000000000e1 * t117 * t180;
  t446 = t445 * t122;
  t449 = t185 * t302;
  t455 = 0.1e1 / t189 / t42;
  t462 = t189 * t189;
  t464 = 0.1e1 / t462 / t42;
  t466 = t193 * t193;
  t467 = 0.1e1 / t466;
  t472 = t47 * t180;
  t473 = t117 * t183;
  t478 = t48 * t438;
  t483 = t122 * t38 / 0.2e1 - 0.2e1 * t472 * t473 - t197 * t314 / 0.2e1 + 0.2e1 * t478 * t440 + 0.50307750000000000000e1 * t199 * t314;
  t484 = t483 * t202;
  t488 = 0.1e1 / t48 / t47;
  t489 = t201 * t488;
  t490 = t37 * t117;
  t498 = 0.1e1 / t206 / t53;
  t500 = t210 * t210;
  t505 = -0.2e1 * t207 * t210 + 0.2e1 * r->rs * t498 * t500 + 0.32680000000000000000e1 * t117 * t207;
  t506 = t505 * t122;
  t509 = t212 * t302;
  t515 = 0.1e1 / t216 / t58;
  t522 = t216 * t216;
  t524 = 0.1e1 / t522 / t58;
  t526 = t220 * t220;
  t527 = 0.1e1 / t526;
  t532 = t63 * t207;
  t533 = t117 * t210;
  t538 = t64 * t498;
  t543 = t122 * t54 / 0.2e1 - 0.2e1 * t532 * t533 - t224 * t314 / 0.2e1 + 0.2e1 * t538 * t500 + 0.32680000000000000000e1 * t226 * t314;
  t544 = t543 * t229;
  t548 = 0.1e1 / t64 / t63;
  t549 = t228 * t548;
  t550 = t53 * t117;
  t555 = 0.1554535e-1 * t446 * t37 - 0.1554535e-1 * t449 * t37 + 0.1554535e-1 * t186 * t183 + 0.14501199501730769010e1 * t455 * t122 * t194 + 0.36252998754326922525e0 * t190 * t314 * t194 - 0.19907919386620884987e1 * t464 * t122 * t467 + 0.26673100072733151594e-2 * t484 * t37 - 0.26673100072733151594e-2 * t489 * t490 + 0.26673100072733151594e-2 * t203 * t183 - 0.310907e-1 * t506 * t53 + 0.310907e-1 * t509 * t53 - 0.310907e-1 * t213 * t210 - 0.18428685992168307569e1 * t515 * t122 * t221 - 0.46071714980420768922e0 * t217 * t314 * t221 + 0.37152230960211308059e-2 * t524 * t122 * t527 - 0.44313737677495382697e-2 * t544 * t53 + 0.44313737677495382697e-2 * t549 * t550 - 0.44313737677495382697e-2 * t230 * t210;
  t556 = t107 * t555;
  t557 = t102 * t556;
  t563 = 0.1e1 / t238 / t74;
  t565 = t242 * t242;
  t570 = -0.2e1 * t239 * t242 + 0.2e1 * r->rs * t563 * t565 + 0.26708750000000000000e0 * t117 * t239;
  t571 = t570 * t122;
  t573 = t244 * t302;
  t577 = 0.1e1 / t247 / t78;
  t584 = t247 * t247;
  t586 = 0.1e1 / t584 / t78;
  t588 = t251 * t251;
  t589 = 0.1e1 / t588;
  t594 = t83 * t239;
  t595 = t117 * t242;
  t600 = t84 * t563;
  t605 = t122 * t75 / 0.2e1 - 0.2e1 * t594 * t595 - t255 * t314 / 0.2e1 + 0.2e1 * t600 * t565 + 0.26708750000000000000e0 * t257 * t314;
  t606 = t605 * t260;
  t610 = 0.1e1 / t84 / t83;
  t611 = t259 * t610;
  t612 = t74 * t117;
  t618 = t72 * (t571 * t74 - t573 * t74 + t245 * t242 + 0.43262689079870710232e1 * t577 * t122 * t252 + 0.10815672269967677558e1 * t248 * t314 * t252 - 0.19374688385758043689e3 * t586 * t122 * t589 + 0.21608710360898267022e-1 * t606 * t74 - 0.21608710360898267022e-1 * t611 * t612 + 0.21608710360898267022e-1 * t261 * t242);
  t619 = t70 * t618;
  t622 = t411 * t97;
  r->d2fdrs2 = t300 - t305 + t307 + t312 + t317 - t325 + t342 - t348 + t350 - t413 * t108 / 0.24e2 + t417 * t235 / 0.12e2 - t420 * t108 / 0.12e2 - t426 * t429 / 0.12e2 + t432 * t235 / 0.12e2 + t178 * t557 / 0.24e2 - t619 * t108 / 0.24e2 + t622 * t112;
  t628 = t273 * t234;
  t631 = t278 * t233;
  t632 = t102 * t631;
  t639 = t170 * t272;
  r->d2fdrsz = -t172 * t274 / 0.24e2 + t172 * t279 / 0.6e1 + t178 * t628 / 0.24e2 - t178 * t632 / 0.6e1 - t266 * t274 / 0.24e2 + t266 * t279 / 0.6e1 + t639 * t112 + 0.4e1 * t269 * t284;
  t643 = t92 * t92;
  t645 = t95 * t95;
  t648 = 0.4e1 / 0.9e1 / t643 + 0.4e1 / 0.9e1 / t645;
  t649 = t648 * t101;
  t650 = t649 * t107;
  t653 = t273 * t278;
  t656 = t103 * t106;
  t657 = t102 * t656;
  t660 = t35 * t648;
  t664 = t101 * t103;
  r->d2fdz2 = -t90 * t650 / 0.24e2 + t90 * t653 / 0.3e1 + t90 * t657 / 0.2e1 + t660 * t112 + 0.8e1 * t282 * t284 + 0.12e2 * t111 * t664;

  if(r->order < 3) return;

  t676 = t314 * t119;
  t682 = 0.1e1 / t1 / t301;
  t685 = t114 * t114;
  t686 = 0.1e1 / t685;
  t688 = t292 * t119;
  t698 = 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t302 * t4 - 0.3e1 / 0.2e1 * t122 * t115 * t119 + 0.6e1 * t14 * t290 * t117 * t292 + 0.3e1 / 0.2e1 * t328 * t676 + 0.27955800000000000000e1 * t328 * t302 + 0.3e1 / 0.4e1 * t134 * t682 - 0.6e1 * t15 * t686 * t688 - 0.55911600000000000000e1 * t334 * t676 - 0.13977900000000000000e1 * t136 * t682) * t139 * t3;
  t700 = 0.19380455423088748428e-2 * t340 * t119;
  t702 = 0.90299355952797405550e-3 * t140 * t314;
  t704 = 0.28972179702000000000e-1 * t121 * t682;
  t713 = t143 * t143;
  t714 = 0.1e1 / t713;
  t716 = t356 * t147;
  t738 = t378 * t378;
  t754 = t314 * t147;
  t776 = 0.19380455423088748428e-2 * t339 * t344 * t346;
  t778 = 0.19380455423088748428e-2 * t345 * t329;
  t779 = t15 * t15;
  t784 = 0.14535341567316561321e-2 * t138 / t779 * t3 * t122;
  t790 = 0.44957341910852236766e-2 * t400 * t147 - 0.39677214496777418688e-2 * t167 * t314 - t698 - t700 + t702 + 0.1554535e-1 * (0.6e1 * t354 * t356 + 0.26476575000000000000e1 * t144 * t314 - 0.6e1 * r->rs * t714 * t716 - 0.10590630000000000000e2 * t117 * t354 * t147) * t122 * t20 + 0.3109070e-1 * t362 * t147 - 0.3109070e-1 * t365 * t147 + 0.77813482180762401030e2 / t378 / t153 * t314 * t383 + 0.16674317610163371649e2 * t380 * t302 * t383 - 0.99519750563943615960e3 / t738 * t314 / t382 / t157 + 0.22478670955426118383e-2 * (-0.3e1 / 0.4e1 * t302 * t21 - 0.3e1 / 0.2e1 * t122 * t144 * t147 + 0.6e1 * t30 * t354 * t117 * t356 + 0.3e1 / 0.2e1 * t388 * t754 + 0.52953150000000000000e1 * t388 * t302 + 0.3e1 / 0.4e1 * t161 * t682 - 0.6e1 * t31 * t714 * t716 - 0.10590630000000000000e2 * t394 * t754 - 0.26476575000000000000e1 * t163 * t682) * t166 * t20 + t704 - 0.27439175011750000000e-1 * t149 * t682 + t776 + t778 - t784 - 0.44957341910852236766e-2 * t399 * t404 * t406 - 0.44957341910852236766e-2 * t405 * t389;
  t791 = t31 * t31;
  t799 = 0.48451138557721871070e-3 * t345 * t3 * t314;
  t807 = 0.1e1 / t301 / r->rs;
  t834 = 0.310907e-1 * (0.6e1 * t290 * t292 + 0.13977900000000000000e1 * t115 * t314 - 0.6e1 * r->rs * t686 * t688 - 0.55911600000000000000e1 * t117 * t290 * t119) * t122 * t3;
  t836 = 0.621814e-1 * t298 * t119;
  t838 = 0.621814e-1 * t303 * t119;
  t843 = 0.12642116092335724638e3 / t318 / t126 * t314 * t323;
  t846 = 0.27090248769290838510e2 * t320 * t302 * t323;
  t847 = t318 * t318;
  t853 = 0.27340917403095972916e4 / t847 * t314 / t322 / t130;
  t856 = 0.621814e-1 * t297 * t302 * t3;
  t859 = 0.621814e-1 * t121 * t807 * t3;
  t863 = 0.14315668443009637264e1 / t318 * t314 * t131;
  t866 = 0.71578342215048186322e0 * t309 * t302 * t131;
  t869 = 0.17894585553762046581e0 * t127 * t682 * t131;
  t870 = 0.33718006433139177574e-2 * t165 / t791 * t20 * t122 - t799 + 0.11239335477713059192e-2 * t405 * t20 * t314 - 0.3109070e-1 * t361 * t302 * t20 + 0.3109070e-1 * t149 * t807 * t20 - 0.14899976668032992374e1 / t378 * t314 * t158 - 0.74499883340164961870e0 * t371 * t302 * t158 - 0.18624970835041240467e0 * t154 * t682 * t158 - t834 - t836 + t838 - t843 - t846 + t853 + t856 - t859 + t863 + t866 + t869;
  t871 = t790 + t870;
  t874 = t871 * t97 * t112 + t698 + t700 - t702 - t704 - t776 - t778 + t784 + t799 + t834 + t836 - t838 + t843 + t846 - t853 - t856 + t859;
  t892 = t238 * t238;
  t893 = 0.1e1 / t892;
  t895 = t565 * t242;
  t916 = t584 * t584;
  t932 = t314 * t242;
  t975 = t84 * t84;
  t983 = 0.10804355180449133511e-1 * t611 * t74 * t314 + (0.6e1 * t563 * t565 + 0.40063125000000000000e0 * t239 * t314 - 0.6e1 * r->rs * t893 * t895 - 0.16025250000000000000e1 * t117 * t563 * t242) * t122 * t74 + 0.2e1 * t571 * t242 - 0.2e1 * t573 * t242 + 0.13562281870030630582e4 / t584 / t247 * t314 * t589 + 0.29062032578637065534e3 * t586 * t302 * t589 - 0.34706908703914476209e5 / t916 * t314 / t588 / t251 + 0.21608710360898267022e-1 * (-0.3e1 / 0.4e1 * t302 * t75 - 0.3e1 / 0.2e1 * t122 * t239 * t242 + 0.6e1 * t83 * t563 * t117 * t565 + 0.3e1 / 0.2e1 * t594 * t932 + 0.80126250000000000000e0 * t594 * t302 + 0.3e1 / 0.4e1 * t255 * t682 - 0.6e1 * t84 * t893 * t895 - 0.16025250000000000000e1 * t600 * t932 - 0.40063125000000000000e0 * t257 * t682) * t260 * t74 + 0.43217420721796534044e-1 * t606 * t242 - 0.57714164285164158932e-2 * t261 * t314 - 0.2e1 * t570 * t302 * t74 + 0.2e1 * t244 * t807 * t74 - 0.12978806723961213070e2 / t584 * t314 * t252 - 0.64894033619806065348e1 * t577 * t302 * t252 - 0.16223508404951516337e1 * t248 * t682 * t252 - 0.43217420721796534044e-1 * t605 * t610 * t612 - 0.43217420721796534044e-1 * t611 * t595 + 0.32413065541347400533e-1 * t259 / t975 * t74 * t122 - 0.26708750000000000000e0 * t244 * t682;
  t992 = t175 * t175;
  t1062 = t206 * t206;
  t1063 = 0.1e1 / t1062;
  t1065 = t500 * t210;
  t1087 = 0.10160440760000000000e0 * t212 * t682 - 0.78205158146250000000e-1 * t185 * t682 - 0.3109070e-1 * t445 * t302 * t37 + 0.3109070e-1 * t185 * t807 * t37 - 0.43503598505192307030e1 / t462 * t314 * t194 - 0.21751799252596153515e1 * t455 * t302 * t194 - 0.54379498131490383788e0 * t190 * t682 * t194 + 0.621814e-1 * t505 * t302 * t53 - 0.621814e-1 * t212 * t807 * t53 + 0.55286057976504922707e1 / t522 * t314 * t221 + 0.27643028988252461353e1 * t515 * t302 * t221 + 0.69107572470631153383e0 * t217 * t682 * t221 + 0.53346200145466303188e-2 * t484 * t183 - 0.13418636501840412071e-1 * t203 * t314 - 0.310907e-1 * (0.6e1 * t498 * t500 + 0.49020000000000000000e1 * t207 * t314 - 0.6e1 * r->rs * t1063 * t1065 - 0.19608000000000000000e2 * t117 * t498 * t210) * t122 * t53 - 0.621814e-1 * t506 * t210 + 0.621814e-1 * t509 * t210 - 0.26006561672147915642e-1 / t522 / t216 * t314 * t527 - 0.55728346440316962088e-2 * t524 * t302 * t527;
  t1088 = t522 * t522;
  t1104 = t314 * t210;
  t1130 = t179 * t179;
  t1131 = 0.1e1 / t1130;
  t1133 = t440 * t183;
  t1155 = t462 * t462;
  t1171 = t314 * t183;
  t1189 = t64 * t64;
  t1200 = t48 * t48;
  t1217 = 0.29959559046314398819e-4 / t1088 * t314 / t526 / t220 - 0.44313737677495382697e-2 * (-0.3e1 / 0.4e1 * t302 * t54 - 0.3e1 / 0.2e1 * t122 * t207 * t210 + 0.6e1 * t63 * t498 * t117 * t500 + 0.3e1 / 0.2e1 * t532 * t1104 + 0.98040000000000000000e1 * t532 * t302 + 0.3e1 / 0.4e1 * t224 * t682 - 0.6e1 * t64 * t1063 * t1065 - 0.19608000000000000000e2 * t538 * t1104 - 0.49020000000000000000e1 * t226 * t682) * t229 * t53 - 0.88627475354990765394e-2 * t544 * t210 + 0.14481729473005491065e-1 * t230 * t314 + 0.1554535e-1 * (0.6e1 * t438 * t440 + 0.75461625000000000000e1 * t180 * t314 - 0.6e1 * r->rs * t1131 * t1133 - 0.30184650000000000000e2 * t117 * t438 * t183) * t122 * t37 + 0.3109070e-1 * t446 * t183 - 0.3109070e-1 * t449 * t183 + 0.13935543570634619491e2 / t462 / t189 * t314 * t467 + 0.29861879079931327481e1 * t464 * t302 * t467 - 0.10932206104933398501e2 / t1155 * t314 / t466 / t193 + 0.26673100072733151594e-2 * (-0.3e1 / 0.4e1 * t302 * t38 - 0.3e1 / 0.2e1 * t122 * t180 * t183 + 0.6e1 * t47 * t438 * t117 * t440 + 0.3e1 / 0.2e1 * t472 * t1171 + 0.15092325000000000000e2 * t472 * t302 + 0.3e1 / 0.4e1 * t197 * t682 - 0.6e1 * t48 * t1131 * t1133 - 0.30184650000000000000e2 * t478 * t1171 - 0.75461625000000000000e1 * t199 * t682) * t202 * t37 - 0.66470606516243074046e-2 * t228 / t1189 * t53 * t122 - 0.53346200145466303188e-2 * t483 * t488 * t490 - 0.53346200145466303188e-2 * t489 * t473 + 0.40009650109099727391e-2 * t201 / t1200 * t37 * t122 + 0.88627475354990765394e-2 * t543 * t548 * t550 + 0.88627475354990765394e-2 * t549 * t533 + 0.13336550036366575797e-2 * t489 * t37 * t314 - 0.22156868838747691348e-2 * t549 * t53 * t314;
  t1231 = -t863 - t866 - t869 - t871 * t69 * t89 * t108 / 0.24e2 - t412 * t265 * t108 / 0.8e1 - t171 * t618 * t108 / 0.8e1 - t70 * t72 * t983 * t108 / 0.24e2 - t170 * t424 * t89 * t429 / 0.4e1 + t35 / t992 * t89 * t102 * t107 * t427 * t233 / 0.4e1 + t411 * t176 * t89 * t235 / 0.8e1 + t416 * t265 * t235 / 0.4e1 + t417 * t557 / 0.8e1 - t425 * t265 * t429 / 0.4e1 + t177 * t618 * t235 / 0.8e1 + t432 * t557 / 0.8e1 + t178 * t102 * t107 * (t1087 + t1217) / 0.24e2 - t425 * t89 * t97 * t101 * t105 * t106 * t233 * t555 / 0.4e1;
  r->d3fdrs3 = t874 + t1231;
  r->d3fdrs2z = -t413 * t274 / 0.24e2 + t413 * t279 / 0.6e1 + t417 * t628 / 0.12e2 - t417 * t632 / 0.3e1 - t420 * t274 / 0.12e2 + t420 * t279 / 0.3e1 - t426 * t273 * t428 / 0.12e2 + t426 * t102 * t278 * t427 / 0.3e1 + t432 * t628 / 0.12e2 - t432 * t632 / 0.3e1 + t178 * t273 * t556 / 0.24e2 - t178 * t102 * t278 * t555 / 0.6e1 - t619 * t274 / 0.24e2 + t619 * t279 / 0.6e1 + t411 * t272 * t112 + 0.4e1 * t622 * t284;
  r->d3fdrsz2 = -t172 * t650 / 0.24e2 + t172 * t653 / 0.3e1 + t172 * t657 / 0.2e1 + t178 * t649 * t234 / 0.24e2 - t178 * t273 * t631 / 0.3e1 - t178 * t102 * t656 * t233 / 0.2e1 - t266 * t650 / 0.24e2 + t266 * t653 / 0.3e1 + t266 * t657 / 0.2e1 + t170 * t648 * t112 + 0.8e1 * t639 * t284 + 0.12e2 * t269 * t664;
  t1303 = -0.8e1 / 0.27e2 / t643 / t91 + 0.8e1 / 0.27e2 / t645 / t94;
  r->d3fdz3 = -t90 * t1303 * t101 * t107 / 0.24e2 + t90 * t649 * t278 / 0.2e1 + 0.3e1 / 0.2e1 * t90 * t273 * t656 + t90 * t102 * r->z * t106 + t35 * t1303 * t112 + 0.12e2 * t660 * t284 + 0.36e2 * t282 * t664 + 0.24e2 * t111 * t101 * r->z;

  if(r->order < 4) return;


}

void 
XC(lda_c_vwn_3_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  XC(lda_c_vwn_3_func)
