// @File		S1A0903X01.C		 		
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

#include "S1A0903X01.h"

static void S1A0903X01_write_data(unsigned long data)
{    
	for( unsigned long mask = 0x00400000; mask; mask >>= 1)
	{
        if( data & mask )
            S1A0903X01_DI = 1; 
        else 
			S1A0903X01_DI = 0; 
        
		S1A0903X01_CL = 0; 
		__asm__ __volatile__("nop");  
        S1A0903X01_CL = 1;
        __asm__ __volatile__("nop");
	}
}

void S1A0903X01_set_fm(unsigned long data)
{
    data = (data + 10700000);
    data = (data / 12500);
    data = (data / 2);
    
    data = (data << 3);
    data = (data | S1A0903X01_IN1);
    
    S1A0903X01_CE = 1; 
    S1A0903X01_write_data( data );
    S1A0903X01_CE = 0;
}

void S1A0903X01_init(void)
{
    S1A0903X01_CE_TRIS = 0;
    S1A0903X01_DI_TRIS = 0;
    S1A0903X01_CL_TRIS = 0;
    S1A0903X01_DO_TRIS = 1;
    
    S1A0903X01_CE = 0;
    S1A0903X01_CL = 1;
    
    S1A0903X01_CE = 1; 
    S1A0903X01_write_data( S1A0903X01_IN2 );
    S1A0903X01_CE = 0;
}
