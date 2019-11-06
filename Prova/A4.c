#include <stdio.h>
#include <stdlib.h>

    int multvetor(int, int*, int);
    void createvetor(int, int*);
    void printvetor(int, int*);

int main(){

    int num;
    int *vetor;

    scanf("%d", &num);

    vetor = malloc(num * sizeof(int));

    createvetor(num, vetor);
    //printvetor(num, vetor);

    printf("%d\n", multvetor(num, vetor, 0));

    return 0;
}

    int multvetor(int size, int vetor[], int indice){
        if(size == indice) return 1;
        return vetor[indice] * multvetor(size, vetor, indice + 1);
    }

    void createvetor(int size, int vetor[]){
        int i;
        for(i = 0; i < size; i++)
            scanf("%d", &vetor[i]);
    }

    void printvetor(int size, int vetor[]){
        int i;
        for(i = 0; i < size; i++)
            printf("%d ", vetor[i]);
    }
