
#include <stdio.h>


#include "App2Lib.h"
#include <math.h>

    int TabDonnees[8] ={1,2,3,4,5,6,7,8};
#pragma DATA_ALIGN(TabDonnees,32);

void main()

{
    //while(1){
    int Liste[3]={0,0,0};;
    int TabIntS[2] ={0, 0};
    int TabFIntS[2] ={0, 0};
    unsigned int TabIntNoS[2] ={0, 0};
    short TabShortS[2] ={0, 0};
    unsigned short TabShortNoS[2] ={0, 0};
    float TabFloatS[2] ={0, 0};
    double TabDoubleS[2] ={0, 0};

    printf("\n");
    ObtenirType(Liste);
    ObtenirFormat(Liste);
    ObtenirOperation(Liste);
    AnalyserListe(Liste,TabDonnees,TabIntS,TabFIntS,TabIntNoS,TabShortS,TabShortNoS,TabFloatS,TabDoubleS);
   // }
    return;
}
