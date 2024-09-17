// https://www.youtube.com/watch?v=LGrE0siZ-ZA

#include <stdio.h>

int main(){
    // broj sa kojim se radi
    int x = 3;

    //1. provera parnih brojeva
    // proverava se najmanji bit, ako je 1 neparan je broj
    // to uspeva sa AND operatorom i 1

    if (x & 1) {
        printf("%d je neparan\n", x);
    } else {
        printf("%d je paran\n", x);
    }

    // 2. provera da li je broj (power of two), može se predstaviti kao stepen broja 2
    // ako može se predstaviti kao stepen broja 2 onda ce samo jedna cifra da bude 1, kada od nje oduzmemo 1 onda ce sve pre nje da budu 1 i ako uradimo and nad tim dobijamo 0
    if (x & (x - 1)) {
        printf("%d nije stepen broja 2\n", x);
    } else {
        printf("%d je stepen broja 2\n", x);
    }

    // 3. igranje sa n-tim bitom

    // provera da li je na N-tom mestu ukljucen bit
     int n = 4;
     void provera_da_li_je_ukljucen(int x, int n) {
        if (x & (1 << n)) {
            printf("bit na %d. mestu je ukljucen\n", n);
        } else {
            printf("bit na %d. mestu nije ukljucen\n", n);
        }
    }

    printf("prva provera nad brojem 64\n ");
    provera_da_li_je_ukljucen(x, n);
  
    // toggle N-ti bit, ako je 0 onda ce biti 1 i kontra
    int y = x ^ (1 << n);
    printf("odradjen toggle\n ");
    provera_da_li_je_ukljucen(y, n);

    // gasi N-ti bit, uvek gasi
    printf("ugasen bit\n ");
    y = x & ~ (1 << n);
    provera_da_li_je_ukljucen(y, n);

    // pali N-ti bit, uvek pali
    printf("upaljen bit\n ");
    y = x | (1 << n);
    provera_da_li_je_ukljucen(y, n);

    return 0;
}

// mnozenje ili deljenje broja sa 2 na k
