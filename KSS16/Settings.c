//
//  Settings.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#include "Settings.h"

int c1 = 2; //Quardratic not residue over Prime field Fp
int isPrimeSet = 0;

void get_prime(mpz_t *p){
    mpz_set_str(*p,PRIME,10);
}

void get_order_r(mpz_t *r){
    mpz_set_str(*r,ORDER_R,10);
}
