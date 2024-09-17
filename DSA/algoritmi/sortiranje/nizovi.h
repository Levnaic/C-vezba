#ifndef NIZOVI_H
#define NIZOVI_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//* POMOCNE FUNKCIJE
// menja mesto elementima
void rokada(int *a, int *b) {  
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Ispis niza
void prikazi_niz(int a[], int n, double vreme_izvrsavanja) {
  
    if (n > 20) {
        for (int i = 0; i < 20; i++) printf("a[%d] = %d\n", i, a[i]);
    } else {
        for (int i = 0; i < n; i++) printf("a[%d] = %d\n", i, a[i]);
    }
    printf("Vreme sortiranja niza: %f", vreme_izvrsavanja);
}

//* FUNKCIJE KOJE GENERISU NIZOVE
// daje ve sortiran niz popunjen sa indeksima
void daj_niz_sortiran(int a[], int n) {
    for (int i = 0; i < n; i++) a[i] = i;
};

// mesa dati niz
void promesaj_niz(int a[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        rokada(&a[i], &a[j]);
    }
}

// daje niz kao sortiran ali promesan
void daj_niz(int a[], int n) {
    daj_niz_sortiran(a, n);
    promesaj_niz(a, n);
}

// puni niz random brojevima
void daj_niz_random(int a[], int n, int random_do) {
    for (int i = 0; i < n; i++) a[i] = rand() % random_do;
}
#endif