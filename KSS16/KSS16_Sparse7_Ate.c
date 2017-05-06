//
//  KSS16_Sparse7_Ate.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/27/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#include "KSS16_Sparse7_Ate.h"
#include "KSS16_Sparse7_Miller.h"
#include "ELiPS_KSS16_Final_Exp.h"

void Sparse_Ate_Pairing(struct Fp16 *ANS,struct EFp4 *G1,struct EFp4 *G2){
    struct Fp16 t_ans;
    Fp16_init(&t_ans);
    
    mpz_t tm1;
    mpz_init(tm1);
    mpz_sub_ui(tm1,params.trace_t,1);
    
    Sparse_type1_Miller(&t_ans,G1,G2,tm1);
    Final_Exp(&t_ans,&t_ans);
    Fp16_set(ANS,&t_ans);
    
    Fp16_clear(&t_ans);
    mpz_clear(tm1);
}
