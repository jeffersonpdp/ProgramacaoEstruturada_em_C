#include <stdio.h>
#include <stdlib.h>

    int function(int, int*);
    int* createVetor(int);
    int max(int, int);

int main(){

    int n, i;
    int valor_i;
    int *vetor;

    scanf("%d", &n);

    vetor = createVetor(n);


    for(i = 0; i <= n; i++){
    valor_i = function(i, vetor);

    printf("F(%d) = %d\n", i, valor_i);
    }

    return 0;
}

    int* createVetor(int size){
        int i;
        int *vetor;

        vetor = malloc( (size + 1)* sizeof(int));

        vetor[0] = 0;

        for(i = 1; i <= size; i++)
            scanf("%d", &vetor[i]);

        return vetor;
    }

    int function(int i, int *vetor){
        int n1, n2;
        if(i == 0  || i == 1) return i;
        n1 = function(i - 1, vetor);
        n2 = function(i - 2, vetor);
        return vetor[i] + max(n1 , n2);
    }

    int max(int num1, int num2){
        if(num1 > num2) return num1;
        return num2;
    }
