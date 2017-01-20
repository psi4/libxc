/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation; either version 3 of the License, or
 (at your option) any later version.
  
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.
  
 You should have received a copy of the GNU Lesser General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

void
XC(lda_x_func)(const XC(func_type) *p, XC(lda_work_t) *r)
{
  FLOAT ax, omz, cbrtomz, opz, cbrtopz, fz, dfzdz, dfzdrs, d2fzdz2, d2fzdrsz, d2fzdrs2;
  FLOAT d3fzdz3, d3fzdrsz2, d3fzdrs2z, d3fzdrs3;
  FLOAT beta, beta2, beta4, beta6, f1, f1_3, f1_5, f2, f3;
  FLOAT phi, dphi, d2phi, d3phi, dphidbeta, d2phidbeta2, d3phidbeta3, dbetadrs, d2betadrs2, d3betadrs3;
  FLOAT zk_nr, dedrs_nr, dedz_nr, d2edrs2_nr, d2edrsz_nr, d2edz2_nr;
  lda_x_params *params;

  FLOAT a_cnst, fa_u, dfa_u, d2fa_u, d3fa_u, fa_d, dfa_d, d2fa_d, d3fa_d;

  assert(p->params != NULL);
  params = (lda_x_params *) (p->params);  

  ax    = -params->alpha*0.458165293283142893475554485052; /* -alpha * 3/4*POW(3/(2*M_PI), 2/3) */

  if(p->nspin == XC_POLARIZED){
    opz = 1.0 + r->zeta;
    omz = 1.0 - r->zeta;
    cbrtopz = CBRT(opz);
    cbrtomz = CBRT(omz);
  }

  if(p->cam_omega == 0.0){
    a_cnst = 0.0;
    fa_u = fa_d = 1.0;

  }else{
    a_cnst = CBRT(4.0/(9.0*M_PI))*p->cam_omega/2.0;

    if(p->nspin == XC_UNPOLARIZED){
      XC(lda_x_attenuation_function)(XC_RSF_ERF, r->order, a_cnst*r->rs[1], &fa_u, &dfa_u, &d2fa_u, &d3fa_u);
    }else{
      if(cbrtopz > 0.0)
	XC(lda_x_attenuation_function)(XC_RSF_ERF, r->order, a_cnst*r->rs[1]/cbrtopz, &fa_u, &dfa_u, &d2fa_u, &d3fa_u);
      else
	fa_u = dfa_u = d2fa_u = d3fa_u = 0.0;

      if(cbrtomz > 0.0)
	XC(lda_x_attenuation_function)(XC_RSF_ERF, r->order, a_cnst*r->rs[1]/cbrtomz, &fa_d, &dfa_d, &d2fa_d, &d3fa_d);
      else
	fa_d = dfa_d = d2fa_d = d3fa_d = 0.0;
    }
  }

  if(p->nspin == XC_UNPOLARIZED)
    fz = fa_u;
  else
    fz = 0.5*(opz*cbrtopz*fa_u + omz*cbrtomz*fa_d);

  r->zk = ax*fz/r->rs[1];

  if(p->info->number == XC_LDA_X_REL){
    beta   = CBRT(9.0*M_PI/4.0)/(r->rs[1]*M_C);
    beta2  = beta*beta;
    f1     = SQRT(1.0 + beta2);
    f2     = ASINH(beta);
    f3     = f1/beta - f2/beta2;
    phi    = 1.0 - 3.0/2.0*f3*f3;

    zk_nr  = r->zk;
    r->zk *= phi;
  }

  if(r->order < 1) return;
  
  r->dedrs = -ax/r->rs[2];

  if(p->cam_omega == 0.0)
    dfa_u = dfa_d = 0.0;

  if(p->nspin == XC_POLARIZED){
    dfzdz  = 1.0/6.0*(4.0*cbrtopz*fa_u - 4.0*cbrtomz*fa_d - a_cnst*r->rs[1]*(dfa_u - dfa_d));
    dfzdrs = 0.5*a_cnst*(opz*dfa_u + omz*dfa_d);
  }else{
    dfzdrs = a_cnst*dfa_u;
  }

  r->dedrs =  ax*(-fz/r->rs[2] + dfzdrs/r->rs[1]);
  if(p->nspin == XC_POLARIZED)
    r->dedz   = ax*dfzdz/r->rs[1];

  if(p->info->number == XC_LDA_X_REL){
    beta4 = beta2*beta2;
    dphidbeta = 6.0/(beta4*beta)*(beta2 - beta*(2 + beta2)*f2/f1 + f2*f2);
    dbetadrs = -beta/r->rs[1];

    dedrs_nr = r->dedrs;
    dphi     = dphidbeta*dbetadrs;

    r->dedrs = r->dedrs*phi + zk_nr*dphi;
    if(p->nspin == XC_POLARIZED){
      dedz_nr = r->dedz;
      r->dedz = r->dedz*phi;
    }
  }


  if(r->order < 2) return;
    
  if(p->cam_omega == 0.0)
    d2fa_u = d2fa_d = 0.0;

  if(p->nspin == XC_POLARIZED){
    d2fzdrs2 = 0.5*a_cnst*a_cnst*(cbrtopz*cbrtopz*d2fa_u + cbrtomz*cbrtomz*d2fa_d);
    if(ABS(r->zeta) == 1.0){
      d2fzdz2 = d2fzdrsz = FLT_MAX;
    }else{
      d2fzdrsz = a_cnst/6.0*(3.0*(dfa_u - dfa_d) - a_cnst*r->rs[1]*(d2fa_u/cbrtopz - d2fa_d/cbrtomz));
      d2fzdz2  = 1.0/18.0*
	(+ 4.0*(fa_u/(cbrtopz*cbrtopz) + fa_d/(cbrtomz*cbrtomz))
	 - 4.0*a_cnst*r->rs[1]*(dfa_u/opz + dfa_d/omz)
	 + a_cnst*a_cnst*r->rs[2]*(d2fa_u/(opz*cbrtopz) + d2fa_d/(omz*cbrtomz)));
    }
  }else{
    d2fzdrs2 = a_cnst*a_cnst*d2fa_u;
  }

  r->d2edrs2 = ax*(2.0*fz/(r->rs[1]*r->rs[2]) - 2.0*dfzdrs/r->rs[2] + d2fzdrs2/r->rs[1]);

  if(p->nspin == XC_POLARIZED){
    r->d2edrsz = ax*(-dfzdz/r->rs[2] + d2fzdrsz/r->rs[1]);
    r->d2edz2  = ax*d2fzdz2/r->rs[1];
  }

  if(p->info->number == XC_LDA_X_REL){
    f1_3 = f1*f1*f1;
    d2phidbeta2 = -(beta2*f1*(5.0 + 4.0*beta2) - 
		    beta*(10.0 + 14.0*beta2 + 3.0*beta4)*f2 +
		    5.0*f1_3*f2*f2) * 6.0/(beta4*beta2*f1_3);
    d2betadrs2 = -2.0*dbetadrs/r->rs[1];

    d2edrs2_nr = r->d2edrs2;
    d2phi      = d2phidbeta2*dbetadrs*dbetadrs + dphidbeta*d2betadrs2;

    r->d2edrs2 = r->d2edrs2*phi + 2.0*dedrs_nr*dphi + zk_nr*d2phi;
    if(p->nspin == XC_POLARIZED){
      d2edz2_nr  = r->d2edz2;
      d2edrsz_nr = r->d2edrsz;

      r->d2edrsz = r->d2edrsz*phi + dedz_nr*dphi;
      r->d2edz2  = r->d2edz2*phi;
      
    }
  }

  if(r->order < 3) return;

  if(p->cam_omega == 0.0)
    d3fa_u = d3fa_d = 0.0;

  if(p->nspin == XC_POLARIZED){
    d3fzdrs3 = 0.5*a_cnst*a_cnst*a_cnst*(cbrtopz*d3fa_u + cbrtomz*d3fa_d);
    if(ABS(r->zeta) == 1.0){
      d3fzdz3 = d3fzdrs2z = d3fzdrsz2 = FLT_MAX;
    }else{
      d3fzdrs2z = a_cnst*a_cnst/6.0*
	(2.0*(d2fa_u/cbrtopz - d2fa_d/cbrtomz) - a_cnst*r->rs[1]*(d3fa_u/(cbrtopz*cbrtopz) - d3fa_d/(cbrtomz*cbrtomz)));
      d3fzdrsz2 = 1.0/18.0*
	(-2.0*a_cnst*a_cnst*r->rs[1]*(d2fa_u/(opz*cbrtopz) + d2fa_d/(omz*cbrtomz))
	 +a_cnst*a_cnst*a_cnst*r->rs[2]*(d3fa_u/(opz*cbrtopz*cbrtopz) + d2fa_d/(omz*cbrtomz*cbrtomz)));
      d3fzdz3   = 1.0/54.0*
	(-8.0*(fa_u/(opz*cbrtopz*cbrtopz) - fa_d/(omz*cbrtomz*cbrtomz))
	 +8.0*a_cnst*r->rs[1]*(dfa_u/(opz*opz) - dfa_d/(omz*omz))
	 -a_cnst*a_cnst*a_cnst*r->rs[1]*r->rs[2]*(d3fa_u/(opz*opz*cbrtopz*cbrtopz) - d3fa_d/(omz*omz*cbrtomz*cbrtomz)));
    }
  }else
    d3fzdrs3 = a_cnst*a_cnst*a_cnst*d2fa_u;

  r->d3edrs3 = ax*(-6.0*fz/(r->rs[2]*r->rs[2]) + 6.0*dfzdrs/(r->rs[1]*r->rs[2])
		   -3.0*d2fzdrs2/r->rs[2] + d3fzdrs3/r->rs[1]);

  if(p->nspin == XC_POLARIZED){
    r->d3edrs2z = ax*(2.0*dfzdz/(r->rs[1]*r->rs[2]) - 2.0*d2fzdrsz/r->rs[2] + d3fzdrs2z/r->rs[1]);
    r->d3edrsz2 = ax*(-d2fzdz2/r->rs[2]+ d3fzdrsz2/r->rs[1]);
    r->d3edz3   = ax*d3fzdz3/r->rs[1];
  }


  if(p->info->number == XC_LDA_X_REL){
    beta6 = beta4*beta2;
    f1_5  = f1_3*f1*f1;

    d3phidbeta3 = (beta2*f1*(30.0 + 52.0*beta2 + 19.0*beta4) -
		   beta*f2*(60.0 + 142.0*beta2 + 97.0*beta4 + 12.0*beta6) +
		   30.0*f1_5*f2*f2) * 6.0/(beta6*beta*f1_5);
    d3betadrs3 = -3.0*d2betadrs2/r->rs[1];

    d3phi = d3phidbeta3*dbetadrs*dbetadrs*dbetadrs + 3.0*d2phidbeta2*dbetadrs*d2betadrs2 +
      dphidbeta*d3betadrs3;

    r->d3edrs3 = r->d3edrs3*phi + 3.0*d2edrs2_nr*dphi + 3.0*dedrs_nr*d2phi + zk_nr*d3phi;
    if(p->nspin == XC_POLARIZED){
      r->d3edrs2z = r->d3edrs2z*phi + 2.0*d2edrsz_nr*dphi + dedz_nr*d2phi;
      r->d3edrsz2 = r->d3edrsz2*phi + d2edz2_nr*dphi;
      r->d3edz3   = r->d3edz3*phi;
    }
  }
}

#define func XC(lda_x_func)