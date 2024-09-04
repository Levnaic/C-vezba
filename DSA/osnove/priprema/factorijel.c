#include <stdio.h>

int main(){
    int n;
    unsigned long long factorial = 1;

    printf("Unesi broj: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Faktorijel nije definisan za negativne brojeve.\n");
    } else {
        for(int i = 1; i <= n; i++){
            factorial *= i;
        }
        printf("Faktorijel od %d je %d\n", n, factorial);
    }

    return 0;
}