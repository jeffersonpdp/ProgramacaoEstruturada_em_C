#include <stdio.h>

    int divide_dois(int);

int main(){

    int n, i, divisores;

    scanf("%d", &n );

    divisores = divide_dois(n);

    printf("%d\n", divisores);

    return 0;
}

    int divide_dois(int numero){
        int i;
        int contador = 0;
        for( i = 1; i <= numero; i++ ){
            if( numero % i == 0 ){
            if( i % 2 == 0) contador++;
            }
        }
        return contador;
    }