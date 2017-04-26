//
//  Fp.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/26/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#include "Fp.h"

// #pragma mark Fp methods

void Fp_init(struct Fp *A){
    mpz_init(A->x0);
}
void Fp_set(struct Fp *ANS,struct Fp *E){
    mpz_set(ANS->x0,E->x0);
}
void Fp_set_ui(struct Fp *A,signed long int B){
    mpz_set_ui(A->x0,B);
}
void Fp_random(struct Fp *A){
    mpz_random(A->x0,10);
    mpz_mod(A->x0,A->x0,prime);
}
void Fp_clear(struct Fp *A){
    mpz_clear(A->x0);
}
void Fp_printf(struct Fp *A){
    gmp_printf("%Zd\n",A->x0);
}
void Fp_add(struct Fp *ANS,struct Fp *A,struct Fp *B){
    struct Fp tmp;
    Fp_init(&tmp);
    
    mpz_add(tmp.x0,A->x0,B->x0);
    mpz_mod(tmp.x0,tmp.x0,prime);
    
    Fp_set(ANS,&tmp);
    
    Fp_clear(&tmp);
}
void Fp_add_ui(struct Fp *ANS,struct Fp *A,unsigned long int B){
    struct Fp tmp;
    Fp_init(&tmp);
    
    mpz_add_ui(tmp.x0,A->x0,B);
    mpz_mod(tmp.x0,tmp.x0,prime);
    
    Fp_set(ANS,&tmp);
    Fp_clear(&tmp);
}
void Fp_add_mpz(struct Fp *ANS,struct Fp *A,mpz_t B){
    struct Fp tmp;
    Fp_init(&tmp);
    
    mpz_add(tmp.x0,A->x0,B);
    mpz_mod(tmp.x0,tmp.x0,prime);
    
    Fp_set(ANS,&tmp);
    Fp_clear(&tmp);
}
void Fp_sub(struct Fp *ANS,struct Fp *A,struct Fp *B){
    struct Fp tmp;
    Fp_init(&tmp);
    
    mpz_sub(tmp.x0,A->x0,B->x0);
    mpz_mod(tmp.x0,tmp.x0,prime);
    
    Fp_set(ANS,&tmp);
    
    Fp_clear(&tmp);
}
void Fp_sub_ui(struct Fp *ANS,struct Fp *A,unsigned long int B){
    struct Fp tmp;
    Fp_init(&tmp);
    
    mpz_sub_ui(tmp.x0,A->x0,B);
    mpz_mod(tmp.x0,tmp.x0,prime);
    
    Fp_set(ANS,&tmp);
    
    Fp_clear(&tmp);
}
void Fp_mul(struct Fp *ANS,struct Fp *A,struct Fp *B){
    struct Fp tmp;
    Fp_init(&tmp);
    
    if (mpz_cmp_ui(B->x0, 2)==0) {
        mpz_mul_2exp(tmp.x0,A->x0,1);
    }
    else{
        mpz_mul(tmp.x0,A->x0,B->x0);
    }
    
    mpz_mod(tmp.x0,tmp.x0,prime);
    
    Fp_set(ANS,&tmp);
    
    Fp_clear(&tmp);
}
void Fp_mul_mpz(struct Fp *ANS,struct Fp *A,mpz_t B){
    struct Fp tmp;
    Fp_init(&tmp);
    
    mpz_mul(tmp.x0,A->x0,B);
    mpz_mod(tmp.x0,tmp.x0,prime);
    
    Fp_set(ANS,&tmp);
    
    Fp_clear(&tmp);
}
void Fp_mul_ui(struct Fp *ANS,struct Fp *A,unsigned long int B){
    struct Fp tmp;
    Fp_init(&tmp);
    
    mpz_mul_ui(tmp.x0,A->x0,B);
    mpz_mod(tmp.x0,tmp.x0,prime);
    
    Fp_set(ANS,&tmp);
    
    Fp_clear(&tmp);
}
void Fp_div(struct Fp *ANS,struct Fp *A,struct Fp *B){
    struct Fp tmp;
    Fp_init(&tmp);
    
    mpz_invert(tmp.x0,B->x0,prime);
    mpz_mul(tmp.x0,A->x0,tmp.x0);
    mpz_mod(tmp.x0,tmp.x0,prime);
    
    Fp_set(ANS,&tmp);
    
    Fp_clear(&tmp);
}
void Fp_pow(struct Fp *ANS,struct Fp *A,mpz_t j){
    int i;
    int r;//bit数
    r= (int)mpz_sizeinbase(j,2);
    //printf("r= %d\n",r);
    
    struct Fp answer_tmp;
    Fp_init(&answer_tmp);
    Fp_set(&answer_tmp,A);
    
    struct Fp in_tmp;
    Fp_init(&in_tmp);
    Fp_set(&in_tmp,A);
    
    for(i=r-2;i>=0;i--){
        if(mpz_tstbit(j,i)==1){
            Fp_mul(&answer_tmp,&answer_tmp,&answer_tmp);//a*2
            Fp_mul(&answer_tmp,&answer_tmp,&in_tmp);//*a
        }else{
            Fp_mul(&answer_tmp,&answer_tmp,&answer_tmp);//a*2
        }
    }
    
    Fp_set(ANS,&answer_tmp);
    
    Fp_clear(&answer_tmp);
    Fp_clear(&in_tmp);
}
void Fp_sqrt(struct Fp *ANS,struct Fp *A){
    struct Fp n_tmp,y_tmp,x_tmp,b_tmp,t_tmp,tmp_Fp;
    Fp_init(&n_tmp);
    Fp_init(&y_tmp);
    Fp_init(&x_tmp);
    Fp_init(&b_tmp);
    Fp_init(&t_tmp);
    Fp_init(&tmp_Fp);
    
    Fp_set(&n_tmp,A);
    
    mpz_t tmp_mpz,q_tmp,e_tmp,r_tmp,set_1,set_2;
    mpz_init(tmp_mpz);
    mpz_init(q_tmp);
    mpz_init(e_tmp);
    mpz_init(r_tmp);
    mpz_init(set_1);
    mpz_init(set_2);
    
    mpz_set_ui(set_1,1);
    mpz_set_ui(set_2,2);
    
    while(mpz_legendre(n_tmp.x0,prime)!=-1){
        Fp_add_ui(&n_tmp,&n_tmp,1);
    }
    
    mpz_set(q_tmp,prime);
    mpz_sub_ui(q_tmp,q_tmp,1);
    mpz_set_ui(e_tmp,0);
    
    while(mpz_odd_p(q_tmp)==0){
        mpz_add_ui(e_tmp,e_tmp,1);
        mpz_div_ui(q_tmp,q_tmp,2);
    }
    
    Fp_pow(&y_tmp,&n_tmp,q_tmp);
    
    mpz_set(r_tmp,e_tmp);
    
    mpz_sub_ui(tmp_mpz,q_tmp,1);
    mpz_div_ui(tmp_mpz,tmp_mpz,2);
    Fp_pow(&x_tmp,A,tmp_mpz);
    Fp_pow(&tmp_Fp,&x_tmp,set_2);
    Fp_mul(&b_tmp,&tmp_Fp,A);
    Fp_mul(&x_tmp,&x_tmp,A);
    
    int m;
    
    while(Fp_cmp_mpz(&b_tmp,set_1)==1){
        m=-1;
        while(Fp_cmp_mpz(&tmp_Fp,set_1)==1){
            m++;
            mpz_pow_ui(tmp_mpz,set_2,m);
            Fp_pow(&tmp_Fp,&b_tmp,tmp_mpz);
        }
        //        gmp_printf("%Zd\n",tmp_Fp.x0);
        mpz_sub_ui(tmp_mpz,r_tmp,m);
        mpz_sub_ui(tmp_mpz,tmp_mpz,1);
        mpz_powm(tmp_mpz,set_2,tmp_mpz,prime);
        Fp_pow(&t_tmp,&y_tmp,tmp_mpz);
        Fp_pow(&y_tmp,&t_tmp,set_2);
        mpz_set_ui(r_tmp,m);
        Fp_mul(&x_tmp,&x_tmp,&t_tmp);
        Fp_mul(&b_tmp,&b_tmp,&y_tmp);
        Fp_set(&tmp_Fp, &b_tmp);
    }
    
    
    
    Fp_set(ANS,&x_tmp);
    
    Fp_clear(&n_tmp);
    Fp_clear(&y_tmp);
    Fp_clear(&x_tmp);
    Fp_clear(&b_tmp);
    Fp_clear(&t_tmp);
    Fp_clear(&tmp_Fp);
    mpz_clear(tmp_mpz);
    mpz_clear(q_tmp);
    mpz_clear(e_tmp);
    mpz_clear(r_tmp);
    mpz_clear(set_1);
}
void Fp_neg(struct Fp *ANS,struct Fp *A){
    struct Fp tmp;
    Fp_init(&tmp);
    
    if (mpz_cmp_ui(A->x0, 0) != 0) {
        mpz_sub(tmp.x0,prime,A->x0);
        Fp_set(ANS,&tmp);
    }
    else{
        Fp_set(ANS,A);
    }
    
    Fp_clear(&tmp);
}
int Fp_cmp(struct Fp *A,struct Fp *B){
    if(mpz_cmp(A->x0,B->x0)==0){
        return 0;
    }
    return 1;
}
int Fp_cmp_mpz(struct Fp *A,mpz_t B){
    if(mpz_cmp(A->x0,B)==0){
        return 0;
    }
    return 1;
}
