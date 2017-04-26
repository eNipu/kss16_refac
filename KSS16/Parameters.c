//
//  Parameters.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#include "Parameters.h"

void initialize_parameters()
{
    mpz_init(X);
    mpz_init(prime);
    mpz_init(order_r);
    mpz_init(trace_t);
    mpz_init(order_EFp);
    mpz_init(b);
    mpz_init(a_x);
    mpz_init(tmp_a);
    mpz_set_str(X,"30064509185",10);
    mpz_set_str(prime,"615623382030675150502066218751443438064107566348210118507940234835256709422634902533028653925239565581",10);
    mpz_set_str(order_r,"10897499371578763791778093615151768824360936005521891580808300080405508061745073",10);
    mpz_set_str(trace_t,"1403565040305261127593483468292232497718027806453082",10);
    mpz_set_str(order_EFp,"615623382030675150502066218751443438064107566348208714942899929574129115939166610300530935897433112500",10);
    mpz_set_str(b,"0",10);
    mpz_set_str(a_x,"1",10);
    mpz_set_str(tmp_a,"1",10);
}
