//
//  Settings.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#include "Settings.h"

int c1 = 2; //Quardratic not residue over Prime field Fp
int isParamsSet = 0;
struct KSS16_params params;
struct KSS16_constants kss_curve_const;

void set_kss16_params(){
    
    if (!isParamsSet) {
        mpz_init(params.prime);
        mpz_init(params.order_r);
        mpz_init(params.trace_t);
        mpz_init(params.order_EFp);
        
        mpz_set_str(params.prime,PRIME,10);
        mpz_set_str(params.order_r,ORDER_R,10);
        mpz_set_str(params.trace_t,TRACE_T,10);
        mpz_set_str(params.order_EFp,ORDER_EFp,10);
        
        isParamsSet = 1;
    }
}

void set_kss16_curve_const()
{
    mpz_init(kss_curve_const.a);
    mpz_init(kss_curve_const.tmp_a);
    
    mpz_set_ui(kss_curve_const.a,1);
    mpz_set_ui(kss_curve_const.tmp_a,1);
}
