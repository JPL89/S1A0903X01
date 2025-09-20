// @File		MAIN		 		
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
#ifndef MAIN_H
#define MAIN_H

// CONFIG
#pragma config FOSC = HS  
#pragma config WDTE = OFF       
#pragma config PWRTE = OFF      
#pragma config MCLRE = ON       
#pragma config BOREN = OFF     
#pragma config CP = OFF         
#pragma config CPD = OFF        

#define _XTAL_FREQ  20000000UL

#include <xc.h>

void Pic16F630_init(void)
{
    // CLEAR PORTS
    PORTA = 0x00;
    PORTC = 0x00;

    // TURN OFF THE COMPARATORS
    CMCON = 0x07;    
}

#endif // MAIN_H