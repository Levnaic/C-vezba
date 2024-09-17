// https://www.youtube.com/watch?v=WBim3afbYQw

#include <stdio.h>

int main() {
    // x = 0000 1001
    unsigned int x = 9;
    
    // y = 0001 1000
    unsigned int y = 24;

    unsigned int r;

    // << dodaje 0 na kraj
    // x = 0000 1001 
    // r = 0010 0100 = 36
    r = x << 2;
    printf("x << 2: %d\n", r);

    // >> dodaje 0 na pocetak
    // x = 0000 1001
    // r = 0000 0010 = 2 uzima x
    r = x >> 2;
    printf("x >> 2: %d\n", r);

    // ~ zamenjuje 1 i 0
    // x = 0000 1001
    // r = 1111 0110 = -10
    r = ~x;
    printf("~x: %d\n", r);

    // & AND operator
    // x = 0000 1001
    // y = 0001 1000
    // r = 0000 1000
    r = x & y;
    printf("x & y: %d\n", r);

    // | OR operator
    // x = 0000 1001
    // y = 0001 1000
    // r = 0001 1001
    r = x | y;
    printf("x | y: %d\n", r);

    // ^ XOR isto kao ili ali 1 ^ 1 = 0
    // x = 0000 1001
    // y = 0001 1000
    // r = 0001 0001
    r = x ^ y;
    printf("x ^ y: %d\n", r);

    return 0;
}