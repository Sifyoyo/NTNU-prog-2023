#include <stdio.h>

int main(void){

    const int antall = 17;
    int tall1 = 4, tall2 = 7, tall3 = 2, svar;

    //+
    svar = antall + tall1 + tall2 + tall3;
    printf("%s %i\n","(+) Summen av tallene er: ", svar);

    //-
    svar = antall - tall1 -tall2 -tall3;
    printf("%s %i\n","(-) Substraksjonen av tallene er:  " ,svar);

    //* og ()
    svar = antall * (tall1 * tall2 * tall3);
    printf("%s %i\n","(* + ()) Multiplikasjonen av tallene er:  " ,svar);

    // /
    svar = antall / 3.0;
    printf("%s %.2f\n","(/) Divisjonen av tallene er:  " ,svar);

    //+=
    svar = tall1 += antall;
    printf("%s %i\n","(+=) Summen av tallene er: ", svar);

    //-=
    svar = tall2 -= antall;
    printf("%s %i\n","(-=) Substraksjonen av tallene er:  " ,svar);

    //*=
    svar = tall3 *= antall;
    printf("%s %i\n","(*=) Multiplikasjonen av tallene er:  " ,svar);

    // /=
    svar = tall2 /= antall;
    printf("%s %2f\n","(/=) Divisjonen av tallene er:  " ,svar);

    // ++ tall1
    tall1 = 4;
    for (int i = 0; i < 3; i++)
    {
        tall1++;
        printf("%s %i %s %i %s %i\n","(++)For runde ", i + 1, " av loopen :", tall1 - 1, " og Etter :", tall1);
    }

    //-- tall2
    tall2 = 7;
        for (int i = 0; i < 4; i++)
    {
        tall2--;
        printf("%s %i %s %i %s %i\n","(--)For runde ", i + 1, " av loopen :", tall2 + 1, " og Etter :", tall2);
    }

    //Skriv ut tall1 og tall2 etter (increment og decrement) - antall
    printf("%s %i %s %i", "tall1 - antall =", tall1 - antall, " og tall2 - antall er: ", tall2 - antall);
    
}