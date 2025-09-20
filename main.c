// @File		MAIN.C		 		
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

#include <xc.h>
#include "main.h"
#include "utils.h"
#include "S1A0903X01.h"

void Radio(void)
{
    S1A0903X01_set_fm( 99500000 );

    // LED
    TRISCbits.TRISC4 = 0;
    PORTCbits.RC4 = 1;
}

int main(void) 
{
    Pic16F630_init();

    __delay_ms(1000);
    
    S1A0903X01_init();   
    
    Radio();
    
    while(1)
    {
       
    }
    
    return 0;
}
