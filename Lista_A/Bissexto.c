#include <stdio.h>

    _Bool ano_bissexto(int);

int main(){

    int A;

    scanf("%d", &A);

    if(ano_bissexto(A)) printf("ANO BISSEXTO\n");
    else printf("ANO NAO BISSEXTO\n");

    return 0;
}

    _Bool ano_bissexto(int ano){

        if( ano % 400 == 0) return 1;
        if( ano % 4 == 0 && ano % 100 != 0) return 1;

        return 0;
    }