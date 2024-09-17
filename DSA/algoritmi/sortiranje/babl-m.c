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

    sortiraj(a, ARR_L); 

    prikazi_niz(a, ARR_L);

    return 0;
}

// algoritam za sortiranje
void sortiraj(int a[], int n) {
    bool zamenjen; 
    for (int i = 0; i < n; i++) {
        zamenjen = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                rokada(&a[j], &a[j + 1]);
                zamenjen = true;
            }
        }
        if (!zamenjen) break;
    }
}
