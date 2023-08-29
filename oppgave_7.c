#include <stdio.h>

int main(void){
    int tall1 = 3, tall2 = 7, tall3 = 10, sum, kvadratSum;

    float flyt1 = 2.3, flyt2 = 7.4, gjsnittSum, gjsnittKvadrat;

    sum = tall1 + tall2 + tall3;

    gjsnittSum = sum / 3.0; //(float)sum / 3;

    kvadratSum = tall1 * tall2 * tall3;

    gjsnittKvadrat = kvadratSum / 3.0;

    

    printf("%s %i + %i + %i = %i\n", "Summen: ", tall1, tall2, tall3,sum);
    printf("%s %.2f\n", "Gjennomsnittet for summen av tall1, tall2 og tall3: ", gjsnittSum);
    printf("%s %i\n", "Kvadrat summen: ", kvadratSum);
    printf("%s %.2f\n", "Gjennomsnittet for kvadrat summen av tall1, tall2 og tall3: ", gjsnittKvadrat);
    printf("%s %.2f\n", "Gjennomsnittet for flyt1 og flyt2: ", ((flyt1 + flyt2)/2));
}