#include <stdio.h>

int factorial(int n){
    if (n == 0) {
        return 1;
    } else {
        return (unsigned long long)n * factorial(n - 1);
    }
}

int main() {
    int n;

    printf("Unesi broj: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Faktorijel nije definisan za negativne brojeve");
    } else {
        printf("Faktorijel broja %d je %d\n", n, factorial(n));
    }

    return 0;
}