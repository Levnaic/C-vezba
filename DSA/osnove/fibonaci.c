#include <stdio.h>

int main(){
    int n, broj, i = 0, prvi = 0, drugi = 1;


    printf("Unesi broj: ");
    scanf("%d", &n);

    for (i; i < n; i++){
        printf("%d \n", prvi);
        broj = prvi + drugi;
        prvi = drugi;
        drugi = broj;
    }

    return 0;
}