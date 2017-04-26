//
//  Fp4.h
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#ifndef Fp4_h
#define Fp4_h

#include "Fp2.h"

struct Fp4{
    struct Fp2 x0,x1;
};

#pragma mark Fp4 methods
void Fp4_init(struct Fp4 *A);
void Fp4_set(struct Fp4 *ANS,struct Fp4 *A);
void Fp4_set_ui(struct Fp4 *A,signed long int B);
void Fp4_random(struct Fp4 *A);
void Fp4_clear(struct Fp4 *A);
void Fp4_printf(struct Fp4 *A);
void Fp4_add(struct Fp4 *ANS,struct Fp4 *A,struct Fp4 *B);
void Fp4_add_ui(struct Fp4 *ANS,struct Fp4 *A,unsigned long int B);
void Fp4_sub(struct Fp4 *ANS,struct Fp4 *A,struct Fp4 *B);
void Fp4_mul(struct Fp4 *ANS,struct Fp4 *A,struct Fp4 *B);
void Fp4_mul_v(struct Fp4 *ANS,struct Fp4 *A);
void Fp4_mul_ui(struct Fp4 *ANS,struct Fp4 *A,unsigned long int B);
void Fp4_mul_mpz(struct Fp4 *ANS,struct Fp4 *A,mpz_t B);
void Fp4_mul_Fp(struct Fp4 *ANS,struct Fp4 *A,struct Fp *B);
void Fp4_neg(struct Fp4 *ANS,struct Fp4 *A);
void Fp4_invert(struct Fp4 *ANS,struct Fp4 *A);
void Fp4_div(struct Fp4 *ANS,struct Fp4 *A,struct Fp4 *B);
void Fp4_pow(struct Fp4 *ANS,struct Fp4 *A,mpz_t B);
void Fp4_sqrt(struct Fp4 *ANS,struct Fp4 *A);//x^2=a mod p
int  Fp4_legendre(struct Fp4 *A);
int  Fp4_cmp(struct Fp4 *A,struct Fp4 *B);
int  Fp4_cmp_mpz(struct Fp4 *A,mpz_t B);
void Fp4_neg(struct Fp4 *ANS,struct Fp4 *A);
void Fp4_frobenius_map(struct Fp4 *ANS, struct Fp4 *A);

#endif /* Fp4_h */
