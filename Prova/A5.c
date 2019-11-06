#include <stdio.h>
#include <stdlib.h>

    void valida(int*);
    int* constroi(int, int, int);

int main(){

    int m, n, q, i;
    int *number, *array;

    scanf("%d %d %d", &n, &q, &m);

    number = &n;

    valida(number);

    array = constroi(n, q, m);

    for(i = 0; i < m; i++)
        printf("%d\n", i[array]);

    return 0;
}

    void valida(int *numero){
        int soma = 0;
        while(*numero){
            soma += (*numero) % 10;
            (*numero) /= 10;
        }
        *numero = soma;
    }

    int* constroi(int n, int q, int m){
        int i;
        int *vetor;

        vetor = malloc(m * sizeof(int));

        for(i = 0; i < m; i++)
            i[vetor] = n + q*i;

        return vetor;
    }
