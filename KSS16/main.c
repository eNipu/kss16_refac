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

int main(int argc, const char * argv[]) {

    gmp_printf("print %Zd\n",params.prime);
    
    struct Fp A, B;
    Fp_init(&A);
    Fp_init(&B);
    
    Fp_random(&A);
    Fp_random(&B);
    
    Fp_add(&A, &A, &B);
    Fp_printf(&A);
    
    struct Fp2 AA;
    Fp2_init(&AA);
    Fp2_random(&AA);
    Fp2_printf(&AA);

    return 0;
}
