#include <stdio.h>
#include <stdbool.h>

void rokada(int *a, int *b){  
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortiraj(int a[], int length);


void main(){
    int a[] = {2, 5, 1, 3, 4, 6, 7, 9, 8, 0};
    int length = 10;
    int i, j; 

    sortiraj(a, length);

    for (int i = 0; i < length; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}

void sortiraj(int a[], int length){
    bool zamenjen = false;
    for (int i = 0; i < length - 1; i++){
        zamenjen = false;
        for (int j = 0; j < length - i - 1; j++){
            if (a[j] > a[j+1]) {
                rokada(&a[j], &a[j + 1]);
                zamenjen = true;
            } 
        }
        if (!zamenjen) break;
    }
}