// INSERTION SORT
// https://www.youtube.com/watch?v=Tz7vBodZqo8

#include <stdio.h>
#include <stdbool.h>

void rokada(int *a, int *b){  
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortiraj(int a[], int length);


int main(){
    int a[] = {2, 5, 1, 3, 4, 6, 7, 9, 8, 0};
    int length = 10;

    sortiraj(a, length);

    for (int i = 0; i < length; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}


// Funkcija za sortiranje niza koristeći Insertion Sort algoritam
void sortiraj(int a[], int length){
    // Prolazi kroz svaki element niza, počevši od drugog elementa
    for (int i = 1; i < length; i++){
        int key = a[i];  // Izabran trenutni element za umetanje
        int j = i - 1;  // Postavlja j na prethodni element

        // Pomera elemente niza koji su veći od ključnog elementa (key)
        while (j >= 0 && a[j] > key){
            a[j + 1] = a[j];  // Pomera element na desno
            j--;  // Smanjuje j
        }

        // Umeće ključni element na odgovarajuće mesto
        a[j + 1] = key;
    }
}