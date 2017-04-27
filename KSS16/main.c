//
//  main.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//



#include "KSS16_init.h"
#include "KSS16_Find_Params.h"
#include "Test_Pairings.h"
int main(int argc, const char * argv[]) {

    KSS16_init();
    KSS_16_parameters();
    
    check_Pairing();
    
//    struct Fp A, B;
//    Fp_init(&A);
//    Fp_init(&B);
//    
//    Fp_random(&A);
//    Fp_random(&B);
//    
//    Fp_add(&A, &A, &B);
//    Fp_printf(&A);
//    
//    struct Fp2 AA;
//    Fp2_init(&AA);
//    Fp2_random(&AA);
//    Fp2_printf(&AA);
//    
//    struct Fp4 F4;
//    Fp4_init(&F4);
//    Fp4_random(&F4);
//    Fp4_printf(&F4);

//    struct EFp2 F4,ANS;
//    EFp2_init(&F4);
//    EFp2_init(&ANS);
//    EFp2_random_set(&F4);
//     EFp2_printf(&F4);
//    EFp2_rational_point_check(&F4);
//    EFp2_SCM_BIN(&ANS, &F4, params.order_r);
//    EFp2_printf(&ANS);
//    EFp2_rational_point_check(&ANS);
    
    
    dealloc_constants();
    
    return 0;
}
