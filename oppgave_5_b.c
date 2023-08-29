#include <stdio.h>
#include <stdbool.h>

void sort(int sortingArray[], int sortingLength, int sortedArray[]){
    int tempOne = 0, tempNine = 0, tempSix = 0, tempZero = 0;

    for (int o = 0; o < sortingLength; o++)
    {
        if(sortingArray[o] == 1){
            tempOne = sortingArray[o];
        }

        if(sortingArray[o] == 9){
            tempNine = sortingArray[o];
        }

        if(sortingArray[o] == 6){
            tempSix = sortingArray[o];
        }

        if(sortingArray[o] == 0){
            tempZero = sortingArray[o];
        }

    }

    sortedArray[0] = tempOne;
    sortedArray[1] = tempNine;
    sortedArray[2] = tempSix;
    sortedArray[3] = tempZero;
}

int main(){

    int i, k;

    int array[] = {1,9,6,0,0,4,0,6};

    bool exists = false;

    int newArray[4];
    int newLength = 0;

    int lengthArray = sizeof(array) / sizeof(array[0]);

    for(i = 0; i < lengthArray; i++){
        if(newLength == 4){
            break;
        }

        if(array[i] == 1 || array[i] == 9 || array[i] == 6 || array[i] == 0){
            exists = false;
            for (k = 0; k < newLength; k++)
            {
                if (newArray[k] == array[i] )
                {
                    exists = true;
                    break;
                }
            }
            
            if (!exists)
            {
            newArray[newLength] = array[i];
            newLength++;    
            }
            
        }
    }


int sortedArray[4];
sort(newArray, newLength, sortedArray);

printf("Her er tallet plukket ut fra en array: ");
for(int v = 0; v < newLength; v++)
{
    printf("%d", sortedArray[v]);
}

printf("\n");


return 0;
}
