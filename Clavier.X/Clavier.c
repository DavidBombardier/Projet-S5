/*
 * File:   Clavier.c
 * Author: bomd2001
 *
 * Created on 15 octobre 2018, 10:24
 */



//LATE OutputClavier
//TRISE DirectionClavier
//PORTE InputClavier

#include <xc.h>
#include "Clavier.h"

void Clavier(){
    
  int i=0;
  int Clav_0=0;
  int Clav_1=0;
  int Clav_2=0;
  int Clav_3=0;
  int Clav_4=0;
  int Clav_5=0;
  int Clav_6=0;
  int Clav_7=0;
  int Clav_8=0;
  int Clav_9=0;
  int Clav_A=0;
  int Clav_B=0;
  int Clav_C=0;
  int Clav_D=0;
  int Clav_E=0;
  int Clav_F=0;
  
  TRISE=0b11110000;
  
  LATEbits.LATE0= 1;
  LATEbits.LATE1= 1;
  LATEbits.LATE2= 1;
  LATEbits.LATE3= 1;
  
  
  
  //Première Ligne
      LATEbits.LATE3= 0; //Y1
  for (i=0;i<4;i++){
    if(PORTEbits.RE7== 0) //X1
        Clav_1=1;
    else if (PORTEbits.RE6== 0) //X2
        Clav_2=1;
    else if (PORTEbits.RE5== 0) //X3
        Clav_3=1;
     else if (PORTEbits.RE4== 0) //X4
        Clav_F=1;
    }
     LATEbits.LATE3= 1;//Y1
     
     
     
     // Deuxième Ligne
     LATEbits.LATE2= 0;   //Y2
  for (i=0;i<4;i++){
    if(PORTEbits.RE7== 0) //X1
        Clav_4=1;
    else if (PORTEbits.RE6== 0) //X2
        Clav_5=1;
    else if (PORTEbits.RE5== 0) //X3
        Clav_6=1;
     else if (PORTEbits.RE4== 0) //X4
        Clav_E=1;
    }
     LATEbits.LATE2= 1; //Y2
          
     
     
     // Troisième Ligne
     LATEbits.LATE1= 0;   //Y3
  for (i=0;i<4;i++){
    if(PORTEbits.RE7== 0) //X1
        Clav_7=1;
    else if (PORTEbits.RE6== 0) //X2
        Clav_8=1;
    else if (PORTEbits.RE5== 0) //X3
        Clav_9=1;
     else if (PORTEbits.RE4== 0) //X4
        Clav_D=1;
    }
     LATEbits.LATE1= 1; //Y3
     
     
     
    // Quatrième Ligne
     LATEbits.LATE0= 0;   //Y4
  for (i=0;i<4;i++){
    if(PORTEbits.RE7== 0) //X1
        Clav_A=1;
    else if (PORTEbits.RE6== 0) //X2
        Clav_0=1;
    else if (PORTEbits.RE5== 0) //X3
        Clav_B=1;
     else if (PORTEbits.RE4== 0) //X4
        Clav_C=1;
    }
     LATEbits.LATE0= 1; //Y4
     
     return;
}