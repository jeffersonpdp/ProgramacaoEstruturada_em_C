#include <stdio.h>
#include <stdlib.h>

    void numbers(int*, int);
    void createVetor(int, int*);
    int how_many(int, int*);

int main(){

    int num;
    int *vetor;

    scanf("%d", &num);

    vetor = malloc( 101 *sizeof(int));

    createVetor(num, vetor);
    numbers(vetor, num);

    printf("%d\n", how_many(num, vetor));

    return 0;
}

    void numbers( int *vetor, int size){
        int i, j;
        int num;
        for(i = 0; i < size; i++){
            scanf("%d", &num);
            vetor[num] = num;
        }
    }

    void createVetor(int size, int *vetor){
        int i;
        for(i = 0; i < size; i++)
            vetor[i]=-1;
    }

    int how_many(int size, int *vetor){
        int how = 0, i;
        for(i = 0; i < size; i++){
            if(vetor[i] != -1) how++;
        }
        return how;
    }
