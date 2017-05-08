//
//  KSS16_Sparse7_Opt_Ate.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/27/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#include "KSS16_Sparse7_Opt_Ate.h"
#include "KSS16_Sparse7_Opt_Miller.h"
#include "ELiPS_KSS16_Final_Exp.h"

void Sparse_Optimal_Ate_Pairing(struct Fp16 *ANS,struct EFp *G1,struct EFp16 *G2){
    struct EFp4 G1_EFp4,G2_EFp4;
    EFp4_init(&G1_EFp4);
    EFp4_init(&G2_EFp4);
    
    struct Fp16 ltp,Miller_X,t_ans;
    Fp16_init(&ltp);
    Fp16_init(&Miller_X);
    Fp16_init(&t_ans);
    
    EFp4_set_EFp(&G1_EFp4,G1);
    EFp16_to_EFp4_map(&G2_EFp4,G2);
    
    Sparse_type1_Optimal_Miller(&Miller_X,&G1_EFp4,&G2_EFp4,params.X);
    final_exp_kss16(&t_ans,&Miller_X);
    Fp16_set(ANS, &t_ans);
    
    Fp16_clear(&ltp);
    Fp16_clear(&Miller_X);
    Fp16_clear(&t_ans);
}
