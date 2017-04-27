//
//  Test_Pairings.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/27/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#include "Test_Pairings.h"

#include "Tate_Pairing.h"
#include "Ate_Pairing.h"
#include "KSS16_Opt_Ate.h"

void check_Pairing(void){
    struct EFp P_EFp, R_EFp;
    EFp_init(&P_EFp);
    EFp_init(&R_EFp);
    
    
    struct EFp16 P_Fp16,Q_Fp16,R_Fp16,S_Fp16;
    EFp16_init(&P_Fp16);
    EFp16_init(&Q_Fp16);
    EFp16_init(&R_Fp16);
    EFp16_init(&S_Fp16);
    
    struct Fp16 ans_Fp16,tmp1_Fp16,tmp2_Fp16,tmp3_Fp16;
    Fp16_init(&ans_Fp16);
    Fp16_init(&tmp1_Fp16);
    Fp16_init(&tmp2_Fp16);
    Fp16_init(&tmp3_Fp16);
    
    struct EFp4 P_EFp4, Q_EFp4, R_EFp4, S_EFp4;
    EFp4_init(&P_EFp4);
    EFp4_init(&Q_EFp4);
    EFp4_init(&R_EFp4);
    EFp4_init(&S_EFp4);
    
    mpz_t a,b,ab;
    mpz_init(a);
    mpz_init(b);
    mpz_init(ab);
    
    mpz_set_ui(a,31);
    mpz_set_ui(b,11);
    mpz_mul(ab,a,b);
    
    EFp_random_set(&P_EFp);
    EFp16_set_EFp(&P_Fp16,&P_EFp);
    
    //---------------------------------------------------
//        EFp16_random_set(&Q_Fp16);
//        printf("\nTate Pairing\n");
//    
//        printf("G1=");
//        EFp16_printf(&P_Fp16);
//        printf("G2=");
//        EFp16_printf(&Q_Fp16);
//    
//        Tate_Pairing(&tmp1_Fp16,&P_Fp16,&Q_Fp16);
//    
//        Fp16_pow(&tmp1_Fp16,&tmp1_Fp16,ab);
//        printf("\nf^ab=");
//        Fp16_printf(&tmp1_Fp16);
//    
//        EFp16_SCM_BIN(&R_Fp16,&P_Fp16,a);
//        EFp16_SCM_BIN(&S_Fp16,&Q_Fp16,b);
//    
//        Tate_Pairing(&tmp2_Fp16,&R_Fp16,&S_Fp16);
//    
//        printf("\nf'  =");
//        Fp16_printf(&tmp2_Fp16);
//    //----------------------------------------------------
//        printf("\nAte Pairing\n");
//        EFp16_random_set_G2(&Q_Fp16);
//    //    printf("G1=");
//    //    EFp16_printf(&P_Fp16);
//    //    printf("\nG2=");
//    //    EFp16_printf(&Q_Fp16);
//    
//        Ate_Pairing(&tmp1_Fp16,&P_Fp16,&Q_Fp16);
//    
//        Fp16_pow(&tmp1_Fp16,&tmp1_Fp16,ab);
//        printf("\nf^ab=");
//        Fp16_printf(&tmp1_Fp16);
//    
//        EFp16_SCM_BIN(&R_Fp16,&P_Fp16,a);
//        EFp16_SCM_BIN(&S_Fp16,&Q_Fp16,b);
//    
//        Ate_Pairing(&tmp2_Fp16,&R_Fp16,&S_Fp16);
//    
//        printf("\nf'  =");
//        Fp16_printf(&tmp2_Fp16);
    //----------------------------------------------------
    //    printf("\nAte Pairing Sparse\n");
    //
    //    EFp4_set_EFp(&P_EFp4,&P_EFp);
    //    EFp16_to_EFp4_map(&Q_EFp4,&Q_Fp16);
    //
    //     printf("G1=");
    //     EFp4_printf(&P_EFp4);
    //     printf("G2=");
    //     EFp4_printf(&Q_EFp4);
    //
    //    Sparse_Ate_Pairing(&tmp1_Fp16,&P_EFp4,&Q_EFp4);
    //    //
    //    Fp16_pow(&tmp1_Fp16,&tmp1_Fp16,ab);
    //    printf("\nf^ab=");
    //    Fp16_printf(&tmp1_Fp16);
    //
    //    EFp4_SCM_BIN(&R_EFp4,&P_EFp4,a);
    //    EFp4_SCM_BIN_Sparse(&S_EFp4,&Q_EFp4,b);
    //
    //    Sparse_Ate_Pairing(&tmp2_Fp16,&R_EFp4,&S_EFp4);
    //
    //    printf("f'  =");
    //    Fp16_printf(&tmp2_Fp16);
    
    // ----------------------------------------------------
//    printf("\nPseudo Sparse Ate Pairing isomorphic Twist\n");
//    EFp16_random_set_G2(&Q_Fp16);
//    printf("G1=");
//    EFp_printf(&P_EFp);
//    printf("G2=");
//    EFp16_printf(&Q_Fp16);
//    
//    Pseudo_Sparse_Ate_Pairing(&tmp1_Fp16,&P_EFp,&Q_Fp16);
//    Fp16_pow(&tmp1_Fp16,&tmp1_Fp16,ab);
//    printf("\nf^ab=");
//    Fp16_printf(&tmp1_Fp16);
//    
//    EFp_SCM_BIN(&R_EFp,&P_EFp,a);
//    EFp16_SCM_BIN(&S_Fp16,&Q_Fp16,b);
//    
//    Pseudo_Sparse_Ate_Pairing(&tmp2_Fp16,&R_EFp,&S_Fp16);
//    
//    printf("\nf'  =");
//    Fp16_printf(&tmp2_Fp16);
    // ----------------------------------------------------
            printf("\n\nOptimal Ate Pairing\n");
            EFp16_random_set_G2(&Q_Fp16);
            printf("G1=");
            EFp_printf(&P_EFp);
            printf("G2=");
            EFp16_printf(&Q_Fp16);
    
            Optimal_Ate_Pairing(&tmp1_Fp16,&P_Fp16,&Q_Fp16);
            Fp16_pow(&tmp1_Fp16,&tmp1_Fp16,ab);
            printf("\nf^ab=");
            Fp16_printf(&tmp1_Fp16);
    
            EFp16_SCM_BIN(&R_Fp16,&P_Fp16,a);
            EFp16_SCM_BIN(&S_Fp16,&Q_Fp16,b);
    
            Optimal_Ate_Pairing(&tmp2_Fp16,&R_Fp16,&S_Fp16);
    
            printf("\nf'  =");
            Fp16_printf(&tmp2_Fp16);
    //----------------------------------------------------
//    printf("\n\n Optimal Ate Pairing Sparse\n");
//    printf("G1=");
//    EFp_printf(&P_EFp);
//    printf("G2=");
//    EFp16_printf(&Q_Fp16);
//    
//    Sparse_Optimal_Ate_Pairing(&tmp1_Fp16,&P_EFp,&Q_Fp16);
//    
//    Fp16_pow(&tmp1_Fp16,&tmp1_Fp16,ab);
//    printf("\nf^ab=");
//    Fp16_printf(&tmp1_Fp16);
//    
//    EFp_SCM_BIN(&R_EFp,&P_EFp,a);
//    EFp16_SCM_BIN(&S_Fp16,&Q_Fp16,b);
//    
//    Sparse_Optimal_Ate_Pairing(&tmp2_Fp16,&R_EFp,&S_Fp16);
//    
//    printf("\nf'  =");
//    Fp16_printf(&tmp2_Fp16);
    //----------------------------------------------------
    //    printf("\n\nPseudo Sparse Optimal Ate Pairing \n");
    //     EFp16_random_set_G2(&Q_Fp16);
    //    printf("G1=");
    //    EFp_printf(&P_EFp);
    //    printf("G2=");
    //    EFp16_printf(&Q_Fp16);
    //
    //    Pseudo_Sparse_Optimal_Ate_Pairing(&tmp1_Fp16,&P_EFp,&Q_Fp16);
    //
    //    Fp16_pow(&tmp1_Fp16,&tmp1_Fp16,ab);
    //    printf("\nf^ab=");
    //    Fp16_printf(&tmp1_Fp16);
    //
    //    EFp_SCM_BIN(&R_EFp,&P_EFp,a);
    //    EFp16_SCM_BIN(&S_Fp16,&Q_Fp16,b);
    //
    //    Pseudo_Sparse_Optimal_Ate_Pairing(&tmp2_Fp16,&R_EFp,&S_Fp16);
    //
    //    printf("\nf'  =");
    //    Fp16_printf(&tmp2_Fp16);
    
    
    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(ab);
    
    EFp_clear(&P_EFp);
    EFp_clear(&R_EFp);
    
    EFp16_clear(&P_Fp16);
    EFp16_clear(&Q_Fp16);
    EFp16_clear(&R_Fp16);
    EFp16_clear(&S_Fp16);
    
    Fp16_clear(&ans_Fp16);
    Fp16_clear(&tmp1_Fp16);
    Fp16_clear(&tmp2_Fp16);
    Fp16_clear(&tmp3_Fp16);
    
    EFp4_clear(&P_EFp4);
    EFp4_clear(&Q_EFp4);
    EFp4_clear(&R_EFp4);
    EFp4_clear(&S_EFp4);
}
