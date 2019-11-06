#include <stdio.h>

    int contaDivisoresPares (int);

int main(){
    int n;
    scanf ("%d", &n);
    printf ("%d\n", contaDivisoresPares (n));
    return 0;
}

    int contaDivisoresPares(int numero){
        int i;
        int contador = 0;
        for( i = 1; i <= numero; i++ ){
            if( numero % i == 0 ){
            if( i % 2 == 0) contador++;
            }
        }
        return contador;
    }