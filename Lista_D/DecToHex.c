#include <stdio.h>

    void decimalTohexa (long long, int);

int main(){
    long long number;
    int begin;

    while(scanf("%lld", &number) == 1)
        decimalTohexa (number, 1);
}

    void decimalTohexa (long long number, int enable){
        char hexa;

        if( number % 16 < 10 ) hexa = number % 16 + 48; // 0 == 48
        else hexa = number % 16 + 55; // A == 65

        if (enable) {
            if (number < 16) {
                printf("%c\n", hexa);
            } else {
                decimalTohexa(number / 16, 0);
                printf("%c\n", hexa);
            }
        }
        else {
            if (number < 16) printf("%c", hexa);
            else {
                decimalTohexa(number / 16, 0);
                printf("%c", hexa);
            }
        }


        /*
        if( number / 16 != 0 && enable) { // se ainda sobrou numeros para dividir
            decimalTohexa (number/16, 0);
            printf("%c\n", hexa);
        }

        if( number / 16 != 0 && enable) { // se ainda sobrou numeros para dividir
            decimalTohexa (number/16, 0);
            printf("%c", hexa);
        }

        if(number < 16 && enable) printf("%c\n", hexa);

        if(number < 16 ) printf("%c", hexa);*/

    }