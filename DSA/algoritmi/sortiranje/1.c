#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "nizovi.h"

#define ARR_L 20

void sortiraj(int a[], int n);

int main(){
    srand(time(NULL));
    int a[ARR_L]; 

    // naicn punjenja niza
    daj_niz(a, ARR_L);
    // daj_niz_sortiran(a, ARR_L);
    // daj_niz_random(a, ARR_L, 10); 


    clock_t t;
    t = clock();

    sortiraj(a, ARR_L); 

    t = clock() - t;
    double vreme_izvrsavanja = ((double)t)/CLOCKS_PER_SEC;

    prikazi_niz(a, ARR_L, vreme_izvrsavanja);

    return 0;
}

// algoritam za sortiranje
void sortiraj(int a[], int n) {
  
}
