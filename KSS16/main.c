//
//  main.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#include "config.h"
#include "Settings.h"
#include "Fp.h"
#include "Fp2.h"
#include "Fp4.h"
#include "Fp8.h"
#include "Fp16.h"

int main(int argc, const char * argv[]) {

    gmp_printf("print %Zd\n",params.prime);
    
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

    struct Fp16 F4;
    Fp16_init(&F4);
    Fp16_random(&F4);
    Fp16_printf(&F4);
    
    pre_calculate();
    
    dealloc_constants();
    
    return 0;
}
