#include <stdio.h>

    void imprime (int vetor[1000], int i, int n);

int main () {
int n, i, vetor[1000];
scanf ("%d", &n);
for (i = 0; i < n; i++) {
scanf ("%d", &vetor[i]);
}
imprime (vetor, 0, n);
return 0;
}

    void imprime(int vetor[1000], int i, int n){
            printf("%d", vetor[ n - 1 - i ]);
            if( n - 1 == i ) printf("\n");
            else{
                printf(" ");
                imprime(vetor, i + 1, n);
            }
    }