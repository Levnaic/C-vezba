#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DUZINA 100

int main(){
    int niz[DUZINA], max = 0;
    srand(time(NULL));

    printf("Niz: \n");
    for (int i = 0; i < DUZINA; i++){
        niz[i] = rand() % 100 + 1;
        if(niz[i] > max) max = niz[i];
        printf("%d \n", niz[i]);
    }

    printf("Najveci clan niza: %d", max);

    return 0;
}