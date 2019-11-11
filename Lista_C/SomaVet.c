#include <stdio.h>

    void createVetor (long int, long int[]);
    long int vetorSum (long int, long int[]);

int main(){
    long int size;

    scanf("%ld", &size);

    long int vetor[size];

    createVetor (size, vetor);

    printf("%ld\n", vetorSum (size, vetor));
}

    void createVetor (long int size, long int vetor[]){
        int i;

        for(i = 0; i < size; i++)
            scanf("%ld", &vetor[i]);
    }

    long int vetorSum (long int size, long int vetor[]){
        long int i, sum = 0;

        for(i = 0; i < size; i++)
            sum += vetor[i];

        return sum;
    }