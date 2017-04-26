//
//  Parameters.h
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#ifndef Parameters_h
#define Parameters_h

#include "config.h"

extern mpz_t X;
extern mpz_t prime;
extern mpz_t order_r;
extern mpz_t trace_t;
extern mpz_t order_EFp;
extern mpz_t b;
extern mpz_t a_x;
extern mpz_t tmp_a;
extern void initialize_parameters(void);
#endif /* Parameters_h */
