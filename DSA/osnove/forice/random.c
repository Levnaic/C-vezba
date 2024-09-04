#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int array[SIZE];
    srand(time(NULL)); // Seed the random number generator

    // Fill the array with random numbers
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 100;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }

    

    return 0;
}