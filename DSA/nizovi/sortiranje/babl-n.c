// BABL SORT
// https://www.youtube.com/watch?v=YqzNgaFQEh8


#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int a[], int length);

int main(){
    int a[] = {7,1,3,9,0,2,4,5,8,6};

    int length = 10;

    bubble_sort(a, length);

    for (int i=0; i < length; i++){
        printf ("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

void sortiraj(int a[], int length){
    bool swapped;  // Logička promenljiva koja prati da li su elementi zamenjeni u trenutnom prolazu kroz niz
    for (int i = 0; i < length - 1; i++) {  // Spoljna petlja, koja se izvršava sve dok ne pregledamo ceo niz
        swapped = false;  // Resetuje vrednost na početku svakog prolaza
        for (int j = 0; j < length - 1 - i; j++) {  // Unutrašnja petlja, prolazi kroz niz i poredi susedne elemente
            if (a[j] > a[j + 1]) {  // Ako je trenutni element veći od sledećeg
                rokada(&a[j], &a[j + 1]);  // Zameni ih koristeći funkciju "rokada"
                swapped = true;  // Postavi da je bilo zamena u ovom prolazu
            }
        }
        if (!swapped) {  // Ako nije bilo zamena u trenutnom prolazu, niz je već sortiran
            break;  // Izađi iz petlje
        }
    }
}