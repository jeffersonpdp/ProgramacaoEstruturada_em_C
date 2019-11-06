#include<stdio.h>

int main(){

    int N, hora = 0, minuto = 0;

    scanf("%d", &N);

        minuto = N/60;
        hora = minuto/60;
        N = N - 60*minuto;
        minuto = minuto - 60*hora;

    printf("%d:%d:%d\n", hora, minuto, N);

    return 0;
}