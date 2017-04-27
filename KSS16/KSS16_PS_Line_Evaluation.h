//
//  KSS16_PS_Line_Evaluation.h
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/27/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#ifndef KSS16_PS_Line_Evaluation_h
#define KSS16_PS_Line_Evaluation_h

#include "EFp16.h"

extern void Pseudo_type1_ADD_LINE(struct Fp16 *l_ANS,struct EFp4 *T_ANS,struct EFp4 *T,struct EFp4 *P,struct EFp4 *Q,struct Fp4 *L);
extern void Pseudo_type1_DBL_LINE(struct Fp16 *l_ANS,struct EFp4 *T_ANS,struct EFp4 *T,struct EFp4 *Q,struct Fp4 *L);
extern void Pseudo_type1_mul(struct Fp16 *ANS,struct Fp16 *A,struct Fp16 *B);

#endif /* KSS16_PS_Line_Evaluation_h */
