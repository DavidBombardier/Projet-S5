/*
 * File:   main.c
 * Author: bomd2001
 *
 * Created on 15 octobre 2018, 10:16
 */
#include <stdio.h>
#include <stdlib.h>
#include <xc.h> /* XC8 General Include File */
#include <stdint.h> /* For uint8_t definition */
#include <stdbool.h> /* For true/false definition */
#include "Clavier.h"
#include "config_bits.h"

#define _XTAL_FREQ 8000000

void main(void) {
    while(1)
    {
        //Clavier();
          LATEbits.LATE0= 0;
          LATEbits.LATE1= 0;
          LATEbits.LATE2= 0;
          LATEbits.LATE3= 0;
          
    }
    return;
}
