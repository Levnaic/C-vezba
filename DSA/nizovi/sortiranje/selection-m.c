#include <stdio.h>

void rokada(int *a, int *b){  
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int a[], int length);


void main(){
    int a[] = {2, 5, 1, 3, 4, 6, 7, 9, 8, 0};
    int length = 10;
    int i, j; 

    selection_sort(a, length);

    for (int i = 0; i < length; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}


void selection_sort(int a[], int length){
    int min_pos;
    for (int i = 0; i < length - 1; i++) {
        min_pos = i;
        for (int j = i + 1; j < length; j++){
            if (a[j] < a[min_pos]) min_pos = j;
        }
        if (min_pos != i) rokada(&a[i], &a[min_pos]);
    }
}