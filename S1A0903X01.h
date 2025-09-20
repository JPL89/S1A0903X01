// @File		S1A0903X01.H		 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		BRAZIL
// @Date		14/09/2025
//
//
// Copyright (C) 2025 JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//

#ifndef S1A0903X01_H
#define S1A0903X01_H

#include <xc.h>

#define S1A0903X01_CE_TRIS TRISCbits.TRISC0
#define S1A0903X01_DI_TRIS TRISCbits.TRISC1
#define S1A0903X01_CL_TRIS TRISCbits.TRISC2
#define S1A0903X01_DO_TRIS TRISCbits.TRISC3

#define S1A0903X01_CE PORTCbits.RC0
#define S1A0903X01_DI PORTCbits.RC1
#define S1A0903X01_CL PORTCbits.RC2
#define S1A0903X01_DO PORTCbits.RC3

///////////////////////////////////////////////////////////////////
//	S1A0903X01 IN1 Default
//
//	BITS: IN1, FM MODE
///////////////////////////////////////////////////////////////////
#define S1A0903X01_IN1 0x00300000

///////////////////////////////////////////////////////////////////
//	S1A0903X01 IN2 Default
//
//	BITS: IN2, CRYSTAL 7200MHz, 12500 Hz divider, STEREO MODE
///////////////////////////////////////////////////////////////////
#define S1A0903X01_IN2 0x00520004

void S1A0903X01_init(void);
static void S1A0903X01_write_data(unsigned long data);
void S1A0903X01_set_fm(unsigned long freq);

#endif // S1A0903X01_H