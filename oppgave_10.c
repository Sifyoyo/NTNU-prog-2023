/**
 * Oppgave 10 i heftet.
 * 
 * Oppgave 10 i heftet gjort hjemme på pc.
 * 
 * @file oppgave_10.c
 * @date 31.08.2023
 * @version 1
 * @author Bao Mark Nguyen
*/

#include <stdio.h>

//Lager en assosiativ array? For å kunne mix'e både tall og symboler
struct MixedData
{
    char tegn[2];

    float flyt[2];
};


int main(void){
//    char tegn1 = "F",
//    tegn2 = "H";

//    float float1 = 17.52,
//    float2 = 451.87;

    int outerArrayPos = 1;
    int innerArrayPos = 1;

    struct MixedData arrayMixed[2];

    int arrayLengde = sizeof(arrayMixed)/sizeof(arrayMixed[0]);

    arrayMixed[0].tegn[0] = 'F';
    arrayMixed[0].tegn[1] = 'H';
    arrayMixed[1].flyt[0] = 17.52;
    arrayMixed[1].flyt[1] = 451.87;

    printf("Dette er verdiene baklengs: ");
    for (int i = 0; i < (arrayLengde * 2); i++)
    {
     
        if (outerArrayPos == 1 && innerArrayPos == 1)
        {
            printf(" %f,", arrayMixed[outerArrayPos].flyt[innerArrayPos]);
            innerArrayPos--;
        }
        if (outerArrayPos == 1 && innerArrayPos == 0)
        {
            printf(" %f,", arrayMixed[outerArrayPos].flyt[innerArrayPos]);
            innerArrayPos++;
            outerArrayPos--;
        }
        if (outerArrayPos == 0 && innerArrayPos == 1)
        {
            printf(" %c,", arrayMixed[outerArrayPos].tegn[innerArrayPos]);
            innerArrayPos--;
        }
        if (outerArrayPos == 0 && innerArrayPos == 0)
        {
            printf(" %c.", arrayMixed[outerArrayPos].tegn[innerArrayPos]);
            break;
        }      
    }

    printf("\n");

    printf("Dette er den eksponentielle formen til flyt2: %e\n", arrayMixed[1].flyt[1]);
    printf("Dette er flyt1 og flyt2 uten desimal: %g og %g\n",arrayMixed[1].flyt[0] ,arrayMixed[1].flyt[1]);
return 0;
}