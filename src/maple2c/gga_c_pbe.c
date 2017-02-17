/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/gga_c_pbe.mpl
  Type of functional: work_gga_c
*/

void XC(gga_c_pbe_func)
  (const XC(func_type) *p, XC(gga_work_c_t) *r)
{
  double t2, t3, t6, t8, t10, t13, t14, t16;
  double t17, t18, t19, t20, t22, t23, t25, t26;
  double t28, t33, t36, t37, t41, t46, t49, t50;
  double t53, t54, t55, t57, t58, t60, t62, t63;
  double t64, t65, t66, t67, t68, t69, t72, t73;
  double t74, t76, t77, t79, t80, t81, t82, t83;
  double t84, t85, t86, t87, t88, t92, t93, t94;
  double t97, t98, t99, t101, t102, t104, t105, t106;
  double t107, t108, t110, t112, t114, t115, t116, t118;
  double t120, t121, t122, t126, t127, t128, t132, t133;
  double t134, t138, t139, t140, t143, t144, t146, t148;
  double t150, t153, t154, t155, t156, t157, t158, t160;
  double t161, t162, t164, t169, t170, t174, t175, t177;
  double t178, t179, t180, t181, t183, t188, t189, t191;
  double t192, t193, t195, t196, t198, t199, t201, t203;
  double t204, t205, t206, t208, t209, t210, t212, t214;
  double t218, t219, t222, t223, t224, t226, t228, t231;
  double t233, t238, t239, t240, t241, t242, t246, t247;
  double t249, t255, t256, t258, t259, t261, t264, t265;
  double t269, t270, t272, t274, t275, t276, t278, t279;
  double t282, t284, t285, t286, t289, t291, t293, t295;
  double t298, t299, t300, t301, t302, t303, t306, t311;
  double t312, t313, t319, t323, t324, t325, t326, t327;
  double t333, t334, t335, t336, t341, t342, t345, t346;
  double t347, t348, t349, t350, t353, t354, t355, t357;
  double t359, t361, t363, t365, t367, t369, t373, t375;
  double t376, t377, t378, t380, t381, t382, t383, t384;
  double t394, t400, t401, t406, t407, t412, t413, t418;
  double t419, t420, t421, t424, t425, t426, t428, t429;
  double t440, t441, t446, t447, t449, t452, t453, t454;
  double t458, t459, t461, t463, t472, t473, t479, t482;
  double t487, t507, t512, t513, t517, t519, t530, t531;
  double t537, t551, t563, t570, t589, t592, t593, t595;
  double t597, t599, t602, t604, t611, t613, t615, t628;
  double t629, t652, t671, t676, t681, t702, t719, t750;
  double t753, t759, t760, t761, t762, t768, t771, t776;
  double t786, t787, t788, t789, t794, t795, t796, t797;
  double t802, t809, t835, t838, t842, t845, t847, t849;
  double t854, t862, t865, t868, t872, t874, t875, t878;
  double t881, t884, t887, t891, t894, t896, t900, t903;
  double t906, t914, t918, t932, t940, t972, t974, t978;
  double t981, t984, t985, t1010, t1019, t1020, t1029, t1031;
  double t1033, t1038, t1078, t1084, t1085, t1089, t1098, t1104;

  gga_c_pbe_params *params;

  assert(p->params != NULL);
  params = (gga_c_pbe_params * )(p->params);

  t2 = 0.10e1 + 0.21370e0 * r->rs;
  t3 = sqrt(r->rs);
  t6 = pow(r->rs, 0.15e1);
  t8 = pow(r->rs, 0.20e1);
  t10 = 0.472311259980e0 * t3 + 0.223081990640e0 * r->rs + 0.101865569480e0 * t6 + 0.306516993160e-1 * t8;
  t13 = 0.10e1 + 0.10e1 / t10;
  t14 = log(t13);
  t16 = 0.6218140e-1 * t2 * t14;
  t17 = r->zeta * r->zeta;
  t18 = t17 * t17;
  t19 = 0.10e1 + r->zeta;
  t20 = pow(t19, 0.13333333333333333333e1);
  t22 = 0.10e1 - r->zeta;
  t23 = pow(t22, 0.13333333333333333333e1);
  t25 = 0.19236610509315363199e1 * t20 + 0.19236610509315363199e1 * t23 - 0.38473221018630726398e1;
  t26 = t18 * t25;
  t28 = 0.10e1 + 0.20548e0 * r->rs;
  t33 = 0.4389664842300e0 * t3 + 0.1926908313900e0 * r->rs + 0.1046575143400e0 * t6 + 0.1943697291900e-1 * t8;
  t36 = 0.10e1 + 0.10e1 / t33;
  t37 = log(t36);
  t41 = 0.10e1 + 0.11125e0 * r->rs;
  t46 = 0.34979524660e0 * t3 + 0.122365854780e0 * r->rs + 0.297297251880e-1 * t6 + 0.167757841980e-1 * t8;
  t49 = 0.10e1 + 0.10e1 / t46;
  t50 = log(t49);
  t53 = -0.31090700e-1 * t28 * t37 + t16 - 0.19751673498613801407e-1 * t41 * t50;
  t54 = t26 * t53;
  t55 = t25 * t41;
  t57 = 0.19751673498613801407e-1 * t55 * t50;
  t58 = pow(t19, 0.66666666666666666667e0);
  t60 = pow(t22, 0.66666666666666666667e0);
  t62 = 0.50000000000000000000e0 * t58 + 0.50000000000000000000e0 * t60;
  t63 = t62 * t62;
  t64 = t63 * t62;
  t65 = params->gamma * t64;
  t66 = r->xt * r->xt;
  t67 = 0.1e1 / t63;
  t68 = t66 * t67;
  t69 = 0.1e1 / r->rs;
  t72 = params->BB * params->beta;
  t73 = 0.1e1 / params->gamma;
  t74 = t72 * t73;
  t76 = (-t16 + t54 + t57) * t73;
  t77 = 0.1e1 / t64;
  t79 = exp(-t76 * t77);
  t80 = t79 - 0.10e1;
  t81 = 0.1e1 / t80;
  t82 = t66 * t66;
  t83 = t81 * t82;
  t84 = t63 * t63;
  t85 = 0.1e1 / t84;
  t86 = r->rs * r->rs;
  t87 = 0.1e1 / t86;
  t88 = t85 * t87;
  t92 = 0.39372532809214786397e-1 * t68 * t69 + 0.15501963398126947994e-2 * t74 * t83 * t88;
  t93 = params->beta * t92;
  t94 = params->beta * t73;
  t97 = 0.10e1 + t94 * t81 * t92;
  t98 = 0.1e1 / t97;
  t99 = t73 * t98;
  t101 = 0.10e1 + t93 * t99;
  t102 = log(t101);
  r->f = t65 * t102 - t16 + t54 + t57;

  if(r->order < 1) return;

  t104 = 0.132881651800e-1 * t14;
  t105 = t10 * t10;
  t106 = 0.1e1 / t105;
  t107 = t2 * t106;
  t108 = 0.1e1 / t3;
  t110 = pow(r->rs, 0.5e0);
  t112 = pow(r->rs, 0.10e1);
  t114 = 0.23615562999000000000e0 * t108 + 0.223081990640e0 + 0.1527983542200e0 * t110 + 0.6130339863200e-1 * t112;
  t115 = 0.1e1 / t13;
  t116 = t114 * t115;
  t118 = 0.62181400e-1 * t107 * t116;
  t120 = t33 * t33;
  t121 = 0.1e1 / t120;
  t122 = t28 * t121;
  t126 = 0.21948324211500000000e0 * t108 + 0.1926908313900e0 + 0.15698627151000e0 * t110 + 0.38873945838000e-1 * t112;
  t127 = 0.1e1 / t36;
  t128 = t126 * t127;
  t132 = t46 * t46;
  t133 = 0.1e1 / t132;
  t134 = t41 * t133;
  t138 = 0.17489762330000000000e0 * t108 + 0.122365854780e0 + 0.4459458778200e-1 * t110 + 0.3355156839600e-1 * t112;
  t139 = 0.1e1 / t49;
  t140 = t138 * t139;
  t143 = -0.638851703600e-2 * t37 + 0.310907000e-1 * t122 * t128 + t104 - t118 - 0.21973736767207854065e-2 * t50 + 0.19751673498613801407e-1 * t134 * t140;
  t144 = t26 * t143;
  t146 = 0.21973736767207854065e-2 * t25 * t50;
  t148 = t133 * t138 * t139;
  t150 = 0.19751673498613801407e-1 * t55 * t148;
  t153 = params->gamma * params->gamma;
  t154 = 0.1e1 / t153;
  t155 = t80 * t80;
  t156 = 0.1e1 / t155;
  t157 = t154 * t156;
  t158 = t72 * t157;
  t160 = 0.1e1 / t84 / t64;
  t161 = t82 * t160;
  t162 = -t104 + t118 + t144 + t146 - t150;
  t164 = t87 * t162 * t79;
  t169 = 0.1e1 / t86 / r->rs;
  t170 = t85 * t169;
  t174 = -0.39372532809214786397e-1 * t68 * t87 + 0.15501963398126947994e-2 * t158 * t161 * t164 - 0.31003926796253895988e-2 * t74 * t83 * t170;
  t175 = params->beta * t174;
  t177 = t97 * t97;
  t178 = 0.1e1 / t177;
  t179 = t73 * t178;
  t180 = params->beta * t154;
  t181 = t180 * t156;
  t183 = t77 * t79;
  t188 = t181 * t92 * t162 * t183 + t94 * t81 * t174;
  t189 = t179 * t188;
  t191 = t175 * t99 - t93 * t189;
  t192 = 0.1e1 / t101;
  t193 = t191 * t192;
  r->dfdrs = t65 * t193 - t104 + t118 + t144 + t146 - t150;
  t195 = t17 * r->zeta;
  t196 = t195 * t25;
  t198 = 0.4e1 * t196 * t53;
  t199 = pow(t19, 0.3333333333333333333e0);
  t201 = pow(t22, 0.3333333333333333333e0);
  t203 = 0.25648814012420484265e1 * t199 - 0.25648814012420484265e1 * t201;
  t204 = t18 * t203;
  t205 = t204 * t53;
  t206 = t203 * t41;
  t208 = 0.19751673498613801407e-1 * t206 * t50;
  t209 = params->gamma * t63;
  t210 = pow(t19, -0.33333333333333333333e0);
  t212 = pow(t22, -0.33333333333333333333e0);
  t214 = 0.33333333333333333334e0 * t210 - 0.33333333333333333334e0 * t212;
  t218 = t66 * t77;
  t219 = t69 * t214;
  t222 = t73 * t156;
  t223 = t72 * t222;
  t224 = t82 * t85;
  t226 = (t198 + t205 + t208) * t73;
  t228 = t85 * t214;
  t231 = -t226 * t77 + 0.3e1 * t76 * t228;
  t233 = t87 * t231 * t79;
  t238 = t72 * t73 * t81;
  t239 = t84 * t62;
  t240 = 0.1e1 / t239;
  t241 = t82 * t240;
  t242 = t87 * t214;
  t246 = -0.78745065618429572794e-1 * t218 * t219 - 0.15501963398126947994e-2 * t223 * t224 * t233 - 0.62007853592507791976e-2 * t238 * t241 * t242;
  t247 = params->beta * t246;
  t249 = t94 * t156;
  t255 = -t249 * t92 * t231 * t79 + t94 * t81 * t246;
  t256 = t179 * t255;
  t258 = t247 * t99 - t93 * t256;
  t259 = t258 * t192;
  r->dfdz = 0.3e1 * t209 * t102 * t214 + t65 * t259 + t198 + t205 + t208;
  t261 = r->xt * t67;
  t264 = t66 * r->xt;
  t265 = t81 * t264;
  t269 = 0.78745065618429572794e-1 * t261 * t69 + 0.62007853592507791976e-2 * t74 * t265 * t88;
  t270 = params->beta * t269;
  t272 = params->beta * params->beta;
  t274 = t272 * t92 * t154;
  t275 = t178 * t81;
  t276 = t275 * t269;
  t278 = t270 * t99 - t274 * t276;
  t279 = t278 * t192;
  r->dfdxt = t65 * t279;
  r->dfdxs[0] = 0;
  r->dfdxs[1] = 0;

  if(r->order < 2) return;

  t282 = 0.2657633036000e-1 * t106 * t114 * t115;
  t284 = 0.1e1 / t105 / t10;
  t285 = t2 * t284;
  t286 = t114 * t114;
  t289 = 0.124362800e0 * t285 * t286 * t115;
  t291 = 0.1e1 / t3 / r->rs;
  t293 = pow(r->rs, -0.5e0);
  t295 = -0.11807781499500000000e0 * t291 + 0.7639917711000e-1 * t293 + 0.61303398632000e-1;
  t298 = 0.62181400e-1 * t107 * t295 * t115;
  t299 = t105 * t105;
  t300 = 0.1e1 / t299;
  t301 = t2 * t300;
  t302 = t13 * t13;
  t303 = 0.1e1 / t302;
  t306 = 0.621814000e-1 * t301 * t286 * t303;
  t311 = 0.1e1 / t120 / t33;
  t312 = t28 * t311;
  t313 = t126 * t126;
  t319 = -0.10974162105750000000e0 * t291 + 0.78493135755000e-1 * t293 + 0.388739458380000e-1;
  t323 = t120 * t120;
  t324 = 0.1e1 / t323;
  t325 = t28 * t324;
  t326 = t36 * t36;
  t327 = 0.1e1 / t326;
  t333 = 0.1e1 / t132 / t46;
  t334 = t41 * t333;
  t335 = t138 * t138;
  t336 = t335 * t139;
  t341 = -0.87448811650000000000e-1 * t291 + 0.22297293891000e-1 * t293 + 0.33551568396000e-1;
  t342 = t341 * t139;
  t345 = t132 * t132;
  t346 = 0.1e1 / t345;
  t347 = t41 * t346;
  t348 = t49 * t49;
  t349 = 0.1e1 / t348;
  t350 = t335 * t349;
  t353 = 0.12777034072000e-1 * t121 * t126 * t127 - 0.621814000e-1 * t312 * t313 * t127 + 0.310907000e-1 * t122 * t319 * t127 + 0.3109070000e-1 * t325 * t313 * t327 - t282 + t289 - t298 - t306 + 0.43947473534415708130e-2 * t148 - 0.39503346997227602814e-1 * t334 * t336 + 0.19751673498613801407e-1 * t134 * t342 + 0.19751673498613801407e-1 * t347 * t350;
  t354 = t26 * t353;
  t355 = t25 * t133;
  t357 = 0.43947473534415708130e-2 * t355 * t140;
  t359 = t333 * t335 * t139;
  t361 = 0.39503346997227602814e-1 * t55 * t359;
  t363 = t133 * t341 * t139;
  t365 = 0.19751673498613801407e-1 * t55 * t363;
  t367 = t346 * t335 * t349;
  t369 = 0.19751673498613801407e-1 * t55 * t367;
  t373 = 0.1e1 / t153 / params->gamma;
  t375 = 0.1e1 / t155 / t80;
  t376 = t373 * t375;
  t377 = t72 * t376;
  t378 = t84 * t84;
  t380 = 0.1e1 / t378 / t63;
  t381 = t82 * t380;
  t382 = t162 * t162;
  t383 = t87 * t382;
  t384 = t79 * t79;
  t394 = t282 - t289 + t298 + t306 + t354 - t357 + t361 - t365 - t369;
  t400 = t373 * t156;
  t401 = t72 * t400;
  t406 = t86 * t86;
  t407 = 0.1e1 / t406;
  t412 = 0.78745065618429572794e-1 * t68 * t169 + 0.31003926796253895988e-2 * t377 * t381 * t383 * t384 - 0.62007853592507791976e-2 * t158 * t161 * t169 * t162 * t79 + 0.15501963398126947994e-2 * t158 * t161 * t87 * t394 * t79 - 0.15501963398126947994e-2 * t401 * t381 * t383 * t79 + 0.93011780388761687964e-2 * t74 * t83 * t85 * t407;
  t413 = params->beta * t412;
  t418 = 0.1e1 / t177 / t97;
  t419 = t73 * t418;
  t420 = t188 * t188;
  t421 = t419 * t420;
  t424 = params->beta * t373;
  t425 = t424 * t375;
  t426 = t92 * t382;
  t428 = 0.1e1 / t84 / t63;
  t429 = t428 * t384;
  t440 = t424 * t156;
  t441 = t428 * t79;
  t446 = 0.2e1 * t181 * t174 * t162 * t183 + t181 * t92 * t394 * t183 + t94 * t81 * t412 + 0.2e1 * t425 * t426 * t429 - t440 * t426 * t441;
  t447 = t179 * t446;
  t449 = -0.2e1 * t175 * t189 + t413 * t99 + 0.2e1 * t93 * t421 - t93 * t447;
  t452 = t191 * t191;
  t453 = t101 * t101;
  t454 = 0.1e1 / t453;
  r->d2fdrs2 = t65 * t449 * t192 - t65 * t452 * t454 + t282 - t289 + t298 + t306 + t354 - t357 + t361 - t365 - t369;
  t458 = 0.4e1 * t196 * t143;
  t459 = t204 * t143;
  t461 = 0.21973736767207854065e-2 * t203 * t50;
  t463 = 0.19751673498613801407e-1 * t206 * t148;
  t472 = t160 * t87;
  t473 = t162 * t384;
  t479 = t72 * t157 * t82;
  t482 = t162 * t79;
  t487 = t458 + t459 + t461 - t463;
  t507 = 0.78745065618429572794e-1 * t218 * t242 - 0.31003926796253895988e-2 * t72 * t154 * t375 * t82 * t472 * t473 * t231 - 0.10851374378688863596e-1 * t479 / t378 * t87 * t482 * t214 + 0.15501963398126947994e-2 * t158 * t161 * t87 * t487 * t79 + 0.15501963398126947994e-2 * t479 * t472 * t162 * t231 * t79 + 0.31003926796253895988e-2 * t223 * t224 * t169 * t231 * t79 + 0.12401570718501558395e-1 * t238 * t241 * t169 * t214;
  t512 = t93 * t73;
  t513 = t418 * t188;
  t517 = t375 * t92;
  t519 = t162 * t77;
  t530 = t156 * t92;
  t531 = t180 * t530;
  t537 = t231 * t79;
  t551 = t191 * t454;
  r->d2fdrsz = t458 + t459 + t461 - t463 + 0.3e1 * t209 * t193 * t214 + t65 * (params->beta * t507 * t99 - t175 * t256 - t247 * t189 + 0.2e1 * t512 * t513 * t255 - t93 * t179 * (-0.3e1 * t531 * t162 * t85 * t79 * t214 - 0.2e1 * t180 * t517 * t519 * t384 * t231 + t181 * t246 * t162 * t183 - t249 * t174 * t231 * t79 + t181 * t92 * t487 * t183 + t94 * t81 * t507 + t531 * t519 * t537)) * t192 - t65 * t551 * t258;
  t563 = -0.78745065618429572794e-1 * t261 * t87 + 0.62007853592507791976e-2 * t158 * t264 * t160 * t164 - 0.12401570718501558395e-1 * t74 * t265 * t170;
  t570 = t81 * t269;
  r->d2fdrsxt = t65 * (params->beta * t563 * t99 - t272 * t174 * t154 * t276 - t270 * t189 + 0.2e1 * t274 * t513 * t570 - t93 * t179 * (t181 * t269 * t162 * t183 + t94 * t81 * t563)) * t192 - t65 * t551 * t278;
  r->d2fdrsxs[0] = 0;
  r->d2fdrsxs[1] = 0;
  t589 = 0.12e2 * t17 * t25 * t53;
  t592 = 0.8e1 * t195 * t203 * t53;
  t593 = pow(t19, -0.6666666666666666667e0);
  t595 = pow(t22, -0.6666666666666666667e0);
  t597 = 0.85496046708068280875e0 * t593 + 0.85496046708068280875e0 * t595;
  t599 = t18 * t597 * t53;
  t602 = 0.19751673498613801407e-1 * t597 * t41 * t50;
  t604 = t214 * t214;
  t611 = pow(t19, -0.13333333333333333333e1);
  t613 = pow(t22, -0.13333333333333333333e1);
  t615 = -0.11111111111111111111e0 * t611 - 0.11111111111111111111e0 * t613;
  t628 = t231 * t231;
  t629 = t87 * t628;
  t652 = -(t589 + t592 + t599 + t602) * t73 * t77 + 0.6e1 * t226 * t228 - 0.12e2 * t76 * t240 * t604 + 0.3e1 * t76 * t85 * t615;
  t671 = 0.23623519685528871838e0 * t66 * t85 * t69 * t604 - 0.78745065618429572794e-1 * t218 * t69 * t615 + 0.31003926796253895988e-2 * t72 * t73 * t375 * t224 * t629 * t384 + 0.12401570718501558395e-1 * t72 * t222 * t82 * t240 * t87 * t537 * t214 - 0.15501963398126947994e-2 * t223 * t224 * t87 * t652 * t79 - 0.15501963398126947994e-2 * t223 * t224 * t629 * t79 + 0.31003926796253895988e-1 * t238 * t82 * t428 * t87 * t604 - 0.62007853592507791976e-2 * t238 * t241 * t87 * t615;
  t676 = t255 * t255;
  t681 = t92 * t628;
  t702 = t258 * t258;
  r->d2fdz2 = t589 + t592 + t599 + t602 + 0.6e1 * params->gamma * t62 * t102 * t604 + 0.6e1 * t209 * t259 * t214 + 0.3e1 * t209 * t102 * t615 + t65 * (params->beta * t671 * t99 - 0.2e1 * t247 * t256 + 0.2e1 * t93 * t419 * t676 - t93 * t179 * (-0.2e1 * t249 * t246 * t231 * t79 - t249 * t92 * t652 * t79 + 0.2e1 * t94 * t375 * t681 * t384 - t249 * t681 * t79 + t94 * t81 * t671)) * t192 - t65 * t702 * t454;
  t719 = -0.15749013123685914559e0 * r->xt * t77 * t219 - 0.62007853592507791976e-2 * t223 * t264 * t85 * t233 - 0.24803141437003116790e-1 * t238 * t264 * t240 * t242;
  r->d2fdzxt = 0.3e1 * t209 * t279 * t214 + t65 * (params->beta * t719 * t99 - t272 * t246 * t154 * t276 - t270 * t256 + 0.2e1 * t274 * t418 * t255 * t570 - t93 * t179 * (-t249 * t269 * t231 * t79 + t94 * t81 * t719)) * t192 - t65 * t258 * t454 * t278;
  r->d2fdzxs[0] = 0;
  r->d2fdzxs[1] = 0;
  t750 = 0.78745065618429572794e-1 * t67 * t69 + 0.18602356077752337593e-1 * t74 * t81 * t66 * t88;
  t753 = t269 * t269;
  t759 = t272 * params->beta;
  t760 = t759 * t92;
  t761 = t760 * t373;
  t762 = t418 * t156;
  t768 = -0.2e1 * t272 * t753 * t154 * t178 * t81 - t274 * t275 * t750 + params->beta * t750 * t99 + 0.2e1 * t761 * t762 * t753;
  t771 = t278 * t278;
  r->d2fdxt2 = t65 * t768 * t192 - t65 * t771 * t454;
  r->d2fdxtxs[0] = 0;
  r->d2fdxtxs[1] = 0;
  r->d2fdxs2[0] = 0;
  r->d2fdxs2[1] = 0;
  r->d2fdxs2[2] = 0;

  if(r->order < 3) return;

  t776 = 0.1e1 / t453 / t101;
  t786 = t153 * t153;
  t787 = 0.1e1 / t786;
  t788 = t155 * t155;
  t789 = 0.1e1 / t788;
  t794 = t82 / t378 / t239;
  t795 = t382 * t162;
  t796 = t87 * t795;
  t797 = t384 * t79;
  t802 = t169 * t382;
  t809 = t380 * t87;
  t835 = 0.65921210301623562195e-2 * t355 * t342;
  t838 = 0.65921210301623562195e-2 * t25 * t346 * t350;
  t842 = t286 * t114;
  t845 = 0.3730884000e0 * t2 / t299 / t10 * t842 * t303;
  t847 = 0.1e1 / t3 / t86;
  t849 = pow(r->rs, -0.15e1);
  t854 = 0.62181400e-1 * t107 * (0.17711672249250000000e0 * t847 - 0.38199588555000e-1 * t849) * t115;
  t862 = 0.12436280000e0 * t2 / t299 / t105 * t842 / t302 / t13;
  t865 = 0.7972899108000e-1 * t284 * t286 * t115;
  t868 = 0.13117321747500000000e0 * t847 - 0.111486469455000e-1 * t849;
  t872 = 0.19751673498613801407e-1 * t55 * t133 * t868 * t139;
  t874 = 0.1e1 / t345 / t132;
  t875 = t335 * t138;
  t878 = 0.1e1 / t348 / t49;
  t881 = 0.39503346997227602814e-1 * t55 * t874 * t875 * t878;
  t884 = 0.373088400e0 * t301 * t842 * t115;
  t887 = 0.373088400e0 * t285 * t116 * t295;
  t891 = 0.1865442000e0 * t301 * t295 * t303 * t114;
  t894 = 0.13184242060324712439e-1 * t25 * t333 * t336;
  t896 = 0.1e1 / t345 / t46;
  t900 = 0.11851004099168280844e0 * t55 * t896 * t875 * t349;
  t903 = 0.3986449554000e-1 * t106 * t295 * t115;
  t906 = 0.39864495540000e-1 * t300 * t286 * t303;
  t914 = t140 * t341;
  t918 = t341 * t349 * t138;
  t932 = t887 - t891 - 0.1865442000e0 * t312 * t128 * t319 + 0.9327210000e-1 * t325 * t319 * t327 * t126 - 0.11851004099168280844e0 * t334 * t914 + 0.59255020495841404221e-1 * t347 * t918 + t845 - t854 - t862 - t884 - 0.11851004099168280844e0 * t41 * t896 * t875 * t349 + 0.19751673498613801407e-1 * t134 * t868 * t139 + 0.39503346997227602814e-1 * t41 * t874 * t875 * t878;
  t940 = t313 * t126;
  t972 = t865 - t903 - t906 - 0.13184242060324712439e-1 * t359 - 0.38331102216000e-1 * t311 * t313 * t127 - 0.18654420000e0 * t28 / t323 / t33 * t940 * t327 + 0.310907000e-1 * t122 * (0.16461243158625000000e0 * t847 - 0.392465678775000e-1 * t849) * t127 + 0.62181400000e-1 * t28 / t323 / t120 * t940 / t326 / t36 + 0.1865442000e0 * t325 * t940 * t127 + 0.11851004099168280844e0 * t347 * t875 * t139 + 0.19165551108000e-1 * t121 * t319 * t127 + 0.191655511080000e-1 * t324 * t313 * t327 + 0.65921210301623562195e-2 * t363 + 0.65921210301623562195e-2 * t367;
  t974 = t26 * (t932 + t972);
  t978 = 0.11851004099168280844e0 * t55 * t346 * t875 * t139;
  t981 = 0.11851004099168280844e0 * t55 * t333 * t914;
  t984 = 0.59255020495841404221e-1 * t55 * t346 * t918;
  t985 = -t835 - t838 - t845 + t854 + t862 - t865 - t872 - t881 + t884 - t887 + t891 + t894 + t900 + t903 + t906 + t974 - t978 + t981 - t984;
  t1010 = -0.23623519685528871838e0 * t68 * t407 + 0.93011780388761687964e-2 * t72 * t787 * t789 * t794 * t796 * t797 - 0.18602356077752337593e-1 * t377 * t381 * t802 * t384 + 0.93011780388761687964e-2 * t72 * t376 * t82 * t809 * t473 * t394 - 0.93011780388761687964e-2 * t72 * t787 * t375 * t794 * t796 * t384 + 0.27903534116628506389e-1 * t158 * t161 * t407 * t162 * t79 - 0.93011780388761687964e-2 * t158 * t161 * t169 * t394 * t79 + 0.93011780388761687964e-2 * t401 * t381 * t802 * t79 + 0.15501963398126947994e-2 * t158 * t161 * t87 * t985 * t79 - 0.46505890194380843982e-2 * t72 * t400 * t82 * t809 * t394 * t162 * t79 + 0.15501963398126947994e-2 * t72 * t787 * t156 * t794 * t796 * t79 - 0.37204712155504675186e-1 * t74 * t83 * t85 / t406 / r->rs;
  t1019 = t177 * t177;
  t1020 = 0.1e1 / t1019;
  t1029 = params->beta * t787;
  t1031 = t92 * t795;
  t1033 = 0.1e1 / t378 / t62;
  t1038 = t174 * t382;
  t1078 = 0.6e1 * t424 * t517 * t162 * t428 * t384 * t394 + t1029 * t156 * t1031 * t1033 * t79 - 0.6e1 * t1029 * t375 * t1031 * t1033 * t384 + 0.6e1 * t1029 * t789 * t1031 * t1033 * t797 - 0.3e1 * t424 * t530 * t394 * t428 * t482 + 0.3e1 * t181 * t412 * t162 * t183 + 0.3e1 * t181 * t174 * t394 * t183 + t181 * t92 * t985 * t183 + t94 * t81 * t1010 + 0.6e1 * t425 * t1038 * t429 - 0.3e1 * t440 * t1038 * t441;
  t1084 = 0.2e1 * t65 * t452 * t191 * t776 - 0.3e1 * t65 * t449 * t454 * t191 + t65 * (-0.6e1 * t93 * t73 * t1020 * t420 * t188 + params->beta * t1010 * t99 - t93 * t179 * t1078 + 0.6e1 * t512 * t513 * t446 + 0.6e1 * t175 * t421 - 0.3e1 * t175 * t447 - 0.3e1 * t413 * t189) * t192 - t835 - t838 - t845 + t854 + t862 - t865 - t872 - t881;
  t1085 = t884 - t887 + t891 + t894 + t900 + t903 + t906 + t974 - t978 + t981 - t984;
  r->d3fdrs3 = t1084 + t1085;
  r->d3fdz3 = 0;
  t1089 = r->xt * t85;
  t1098 = t753 * t269;
  t1104 = t272 * t272;
  r->d3fdxt3 = t65 * (0.37204712155504675186e-1 * t272 * params->BB * t154 * t81 * t1089 * t87 * t98 - 0.6e1 * t272 * t750 * t154 * t276 + 0.6e1 * t759 * t1098 * t373 * t418 * t156 - 0.6e1 * t1104 * t92 * t787 * t1020 * t375 * t1098 + 0.6e1 * t761 * t762 * t269 * t750 - 0.37204712155504675186e-1 * t760 * t373 * t178 * t156 * params->BB * t1089 * t87) * t192 - 0.3e1 * t65 * t768 * t454 * t278 + 0.2e1 * t65 * t771 * t278 * t776;
  r->d3fdxs3[0] = 0;
  r->d3fdxs3[1] = 0;
  r->d3fdxs3[2] = 0;
  r->d3fdxs3[3] = 0;
  r->d3fdrs2z = 0;
  r->d3fdrs2xt = 0;
  r->d3fdrs2xs[0] = 0;
  r->d3fdrs2xs[1] = 0;
  r->d3fdrsz2 = 0;
  r->d3fdz2xt = 0;
  r->d3fdz2xs[0] = 0;
  r->d3fdz2xs[1] = 0;
  r->d3fdrsxt2 = 0;
  r->d3fdzxt2 = 0;
  r->d3fdxt2xs[0] = 0;
  r->d3fdxt2xs[1] = 0;
  r->d3fdrsxs2[0] = 0;
  r->d3fdrsxs2[1] = 0;
  r->d3fdrsxs2[2] = 0;
  r->d3fdzxs2[0] = 0;
  r->d3fdzxs2[1] = 0;
  r->d3fdzxs2[2] = 0;
  r->d3fdxtxs2[0] = 0;
  r->d3fdxtxs2[1] = 0;
  r->d3fdxtxs2[2] = 0;
  r->d3fdrszxt = 0;
  r->d3fdrszxs[0] = 0;
  r->d3fdrszxs[1] = 0;
  r->d3fdrsxtxs[0] = 0;
  r->d3fdrsxtxs[1] = 0;
  r->d3fdzxtxs[0] = 0;
  r->d3fdzxtxs[1] = 0;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  XC(gga_c_pbe_func)