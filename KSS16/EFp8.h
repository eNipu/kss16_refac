//
//  EFp8.h
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/27/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#ifndef EFp8_h
#define EFp8_h

#include "Fp8.h"

struct EFp8{
    struct Fp8 x,y;
    int PoI;
};

#pragma mark EFp8 methods
extern void EFp8_init(struct EFp8 *A);
extern void EFp8_set(struct EFp8 *A,struct EFp8 *B);
extern void EFp8_set_PoI(struct EFp8 *A);
extern void EFp8_clear(struct EFp8 *A);
extern void EFp8_printf(struct EFp8 *A);
extern void EFp8_ECD(struct EFp8 *ANS, struct EFp8 *P);//ANS=2*P
extern void EFp8_ECA(struct EFp8 *ANS, struct EFp8 *P1, struct EFp8 *P2);//ANS=P1+P2
extern int  EFp8_cmp(struct EFp8 *A,struct EFp8 *B);
//void EFp8_random_set(struct EFp8 *ANS);
extern void EFp8_SCM_BIN(struct EFp8 *ANS, struct EFp8 *P, mpz_t j);

#endif /* EFp8_h */
