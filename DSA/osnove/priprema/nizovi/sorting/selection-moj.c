#include <stdio.h>

void selection_sort(int a[], int length);

void main(){
    int a[] = {7,1,3,9,0,2,4,5,8,6};
    int length = 10;

    selection_sort(a, length);

    for(int i = 0; i<length; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}

void selection_sort(int a[], int length){

}