#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int arr[],int n);

void main(){
    int arr[] = {2, 5, 1, 3, 4, 6, 7, 9, 8, 0};
    int n = 10;
   

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void bubble_sort(int arr[],int n){
    bool swap = false;
    for (int i = 0; i < n -1; i++){
        swap = false;
        for (int j = 0; j < n - 1 -i; j++){
            if (arr[j] > arr[j + 1]){
                swap = true;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }

        if(!swap) break;
    }
}