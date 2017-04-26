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

#define PRIME "615623382030675150502066218751443438064107566348210118507940234835256709422634902533028653925239565581"
#define ORDER_R "10897499371578763791778093615151768824360936005521891580808300080405508061745073"

extern int c1;
extern int isPrimeSet;

extern void get_order_r(mpz_t *r);

extern void get_prime(mpz_t *p);
#endif /* Settings_h */
