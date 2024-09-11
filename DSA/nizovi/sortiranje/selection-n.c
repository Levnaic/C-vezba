// SEELECTION SORT
// https://www.youtube.com/watch?v=YepJ7fDmyjI&t=1s

#include <stdio.h>

void selection_sort(int a[],int length);

void main(){
    int a[] = {2, 5, 1, 3, 4, 6, 7, 9, 8, 0};
    int length = 10;

    selection_sort(a, length);

    for (int i = 0; i < length; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}

// Funkcija za sortiranje niza koristeći Selection Sort algoritam
void selection_sort(int a[], int length) {
    // Prolazi kroz svaki element niza
    for (int i = 0; i < length - 1; i++) {
        // Pretpostavlja da je trenutni element najmanji
        int min_pos = i;

        // Traži najmanji element u preostalom delu niza
        for (int j = i + 1; j < length; j++) {
            if (a[j] < a[min_pos]) {
                min_pos = j;  // Ažurira poziciju najmanjeg elementa
            }
        }

        // Ako je pronađen manji element, obavi zamenu
        if (min_pos != i) {
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
    }
}


