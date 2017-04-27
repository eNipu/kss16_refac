//
//  Line_evaluation.h
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/27/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#ifndef Line_evaluation_h
#define Line_evaluation_h

#include "EFp16.h"

extern void ltt_q(struct Fp16 *ANS,struct EFp16 *T,struct EFp16 *Q);
extern void v2t_q(struct Fp16 *ANS,struct EFp16 *T,struct EFp16 *Q);
extern void ltp_q(struct Fp16 *ANS,struct EFp16 *T,struct EFp16 *P,struct EFp16 *Q);
extern void vtp_q(struct Fp16 *ANS,struct EFp16 *T,struct EFp16 *Q);
extern void ADD_LINE(struct Fp16 *l_ANS,struct EFp16 *T_ANS,struct EFp16 *T,struct EFp16 *P,struct EFp16 *Q,struct Fp16 *Qx_neg);
extern void DBL_LINE(struct Fp16 *l_ANS,struct EFp16 *T_ANS,struct EFp16 *T,struct EFp16 *Q,struct Fp16 *Qx_neg);

#endif /* Line_evaluation_h */
