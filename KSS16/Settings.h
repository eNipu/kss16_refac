//
//  Settings.h
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#ifndef Settings_h
#define Settings_h

#include "config.h"

#define TRUE_1 1
#define FALSE_0 0

#define PRIME "615623382030675150502066218751443438064107566348210118507940234835256709422634902533028653925239565581"
#define ORDER_R "10897499371578763791778093615151768824360936005521891580808300080405508061745073"

#define TRACE_T "1403565040305261127593483468292232497718027806453082"

#define ORDER_EFp "615623382030675150502066218751443438064107566348208714942899929574129115939166610300530935897433112500"

#define x_bit 35

struct KSS16_params{
    mpz_t prime;
    mpz_t order_r;
    mpz_t trace_t;
    mpz_t order_EFp;
    mpz_t X;
};

struct KSS16_constants{
    mpz_t a; // constant of elliptic curve y^2 = x^3+ a * x
    mpz_t tmp_a;
};

extern struct KSS16_params params;
extern struct KSS16_constants kss_curve_const;

extern int c1;
extern int isParamsSet;
extern int TRUE;
extern int FALSE;
extern char X_bit_binary[x_bit+1];
extern void set_kss16_params();
extern void set_kss16_curve_const();
extern void generate_X();
#endif /* Settings_h */
