//
//  KSS16_init.c
//  KSS16
//
//  Created by Khandaker Md. Al-Amin on 4/27/17.
//  Copyright © 2017 Khandaker Md. Al-Amin. All rights reserved.
//

#include "KSS16_init.h"

void KSS16_init()
{
    set_kss16_params();
    set_kss16_curve_const();
    generate_X();
    pre_calculate();
}
