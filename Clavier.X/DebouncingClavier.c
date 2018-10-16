/*
 * File:   DebouncingClavier.c
 * Author: bomd2001
 *
 * Created on 15 octobre 2018, 11:59
 */


#include <xc.h>
#include "Clavier.h"


void DebouncingClavier()
{
    //Debouncing X1
    // debounce pull down mode
    char statusRe7;
    do{
        statusRe7=PORTEbits.RE7
        __delay_ms(10);
    }
    while(statusRe7); //(!status)=Pull up mode
    __delay_ms(100);
    statusRe7=PORTEbits.RE7;
    if (statusRe7)
    {
        
    }
    
    //Debouncing X2
    
        char statusRe6;
    do{
        statusRe6=PORTEbits.RE6
        __delay_ms(10);
    }
    while(statusRe6); //(!status)=Pull up mode
    __delay_ms(100);
    statusRe6=PORTEbits.RE6;
    if (statusRe6)
    {
        
    }
    
    
    //Debouncing X3
    
        char statusRe5;
    do{
        statusRe5=PORTEbits.RE5
        __delay_ms(10);
    }
    while(statusRe5); //(!status)=Pull up mode
    __delay_ms(100);
    statusRe5=PORTEbits.RE5;
    if (statusRe5)
    {
        
    }
    
    
    //Debouncing X4
    
        char statusRe4;
    do{
        statusRe4=PORTEbits.RE4
        __delay_ms(10);
    }
    while(statusRe4); //(!status)=Pull up mode
    __delay_ms(100);
    statusRe4=PORTEbits.RE4;
    if (statusRe4)
    {
        
    }
    
    
    return;
}

