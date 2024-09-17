// MERGE SORT
// https://www.youtube.com/watch?v=LeWuki7AQLo

#include <stdio.h>
#include <stdbool.h>

// Merge Sort je algoritam za sortiranje koji koristi tehniku "podeli pa vladaj".
// Prvo podeli niz na manje podnizove, zatim ih sortira i na kraju ih spaja u jedan sortirani niz.

void merge_sort(int a[], int length); // Glavna funkcija koja pokreće sortiranje
void merge_sort_recursion(int a[], int l, int r); // Rekurzivna funkcija koja deli niz
void merge_sorted_arrays(int a[], int l, int m, int r); // Funkcija koja spaja dva sortirana podniza



int main(){
    int a[] = {2, 5, 1, 3, 4, 6, 7, 9, 8, 0};
    int length = 10;

    merge_sort(a, length);

    for (int i = 0; i < length; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

// Glavna funkcija koja pokreće rekurzivno sortiranje
void merge_sort(int a[], int length) {
    merge_sort_recursion(a, 0, length - 1); // Sortira ceo niz od početka do kraja
}

// Rekurzivna funkcija koja deli niz na pola
void merge_sort_recursion(int a[], int l, int r) {
    if (l < r) {
        // Na sredini delimo niz na dva dela
        int m = l + (r - l) / 2;

        // Prvo sortiramo levi deo niza
        merge_sort_recursion(a, l, m);
        // Zatim sortiramo desni deo niza
        merge_sort_recursion(a, m + 1, r);

        // Na kraju spajamo sortirane delove
        merge_sorted_arrays(a, l, m, r);
    }
}

// Funkcija koja spaja dva sortirana podniza u jedan sortirani niz
void merge_sorted_arrays(int a[], int l, int m, int r) {
    // Računamo dužinu levog i desnog podniza
    int left_length = m - l + 1;
    int right_length = r - m;

    // Privremeni nizovi za levi i desni podniz
    int temp_left[left_length];
    int temp_right[right_length];

    // Kopiramo vrednosti iz originalnog niza u privremene nizove
    for (int i = 0; i < left_length; i++) {
        temp_left[i] = a[l + i]; // Leva polovina
    } 

    for (int i = 0; i < right_length; i++) {
        temp_right[i] = a[m + 1 + i]; // Desna polovina
    }

    // i, j i k su indeksi koji prate gde smo u levom, desnom i glavnom nizu
    int i = 0, j = 0, k = l;

    // Spajamo dva sortirana podniza u jedan
    while (i < left_length && j < right_length) {
        // Uzimamo manji element između dva podniza i stavljamo ga u originalni niz
        if (temp_left[i] <= temp_right[j]) {
            a[k] = temp_left[i]; // Manji element iz levog niza
            i++;
        } else {
            a[k] = temp_right[j]; // Manji element iz desnog niza
            j++;
        }
        k++;
    }

    // Ako smo ostavili neke elemente u levom nizu, kopiramo ih
    while (i < left_length) {
        a[k] = temp_left[i];
        i++;
        k++;
    }

    // Ako smo ostavili neke elemente u desnom nizu, kopiramo ih
    while (j < right_length) {
        a[k] = temp_right[j];
        j++;
        k++;
    }
}