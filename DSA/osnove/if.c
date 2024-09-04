#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num % 2 == 0){
        printf("%d je paran broj", num);
    } else{
        printf("%d je neparan broj", num);
    }
    return 0;
}