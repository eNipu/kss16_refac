//
//  Fp.h
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#ifndef Fp_h
#define Fp_h

#include "Settings.h"

struct Fp{
    mpz_t x0;
};


extern void Fp_init(struct Fp *A);
extern void Fp_set(struct Fp *ANS,struct Fp *A);
extern void Fp_set_ui(struct Fp *A,signed long int B);
extern void Fp_random(struct Fp *A);
extern void Fp_clear(struct Fp *A);
extern void Fp_printf(struct Fp *A);
extern void Fp_add(struct Fp *ans,struct Fp *a,struct Fp *b);//ans=a+b mod p
extern void Fp_add_ui(struct Fp *ans,struct Fp *a,unsigned long int b);//ans=a+b mod p
extern void Fp_add_mpz(struct Fp *ans,struct Fp *a,mpz_t b);//ans=a+b mod p
extern void Fp_sub(struct Fp *ans,struct Fp *a,struct Fp *b);//ans=a-b mod p
extern void Fp_sub_ui(struct Fp *ans,struct Fp *a,unsigned long int b);//ans=a+b mod p
extern void Fp_mul(struct Fp *ans,struct Fp *a,struct Fp *b);//ans=a*b mod p
extern void Fp_mul_ui(struct Fp *ans,struct Fp *a,unsigned long int b);//ans=a*b mod p
extern void Fp_div(struct Fp *ans,struct Fp *a,struct Fp *b);//ans=a/b mod p
extern void Fp_pow(struct Fp *ans,struct Fp *a,mpz_t b);
extern void Fp_sqrt(struct Fp *ans,struct Fp *a);//x^2=a mod p
extern int  Fp_cmp_mpz(struct Fp *A,mpz_t B);
extern void Fp_mul_mpz(struct Fp *ANS,struct Fp *A,mpz_t B);
extern void Fp_neg(struct Fp *ANS,struct Fp *A);
extern int Fp_cmp(struct Fp *A,struct Fp *B);
#endif /* Fp_h */
