/**
 * Oppgave 9 i heftet.
 * 
 * Hjemmelekse oppgave 9 i heftet, gjort hjemme fra pc.
 * 
 * @file oppgave_9.c
 * @date 31.08.2023
 * @version 1
 * @author Bao Mark Ngueyn
*/

#include <stdio.h>

int main(void){
    int totaltSekunder = 312304,
        timer,
        minutter,
        sekunder;

        timer = totaltSekunder / 3600; //Finner timer
        minutter = (totaltSekunder / 60) % 60; //Finner minutter som står igjen etter time-utregningen
        sekunder = totaltSekunder % 60; //Finner sekunder igjen etter minutt-regningen

    printf("%i sekunder tilsvarer: %i time(r), %i minutt(er) og %i sekund(er)", totaltSekunder, timer, minutter, sekunder);

 return 0;   
}