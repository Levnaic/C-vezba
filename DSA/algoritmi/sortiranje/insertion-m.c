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

void sortiraj(int a[], int length){
    for (int i = 1; i < length; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}