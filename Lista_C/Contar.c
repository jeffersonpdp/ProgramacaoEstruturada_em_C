#include <stdio.h>

    void createVetor (int, int[]);
    void BubbleSort (int, int[]);
    int Contar (int, int, int[]);
    void printMatrix(int size, int matrix[][size]);

int main(){

    int number, value;

    scanf("%d", &number);

    int vetor[number];

    createVetor (number, vetor);

    BubbleSort (number, vetor);

    scanf("%d", &value);

    printf("%d\n", Contar(number, value, vetor));

    return 0;
}

    void createVetor (int size, int vetor[]){
        int i;

        for(i = 0; i < size; i++)
            scanf("%d", &vetor[i]);
    }

    void BubbleSort (int size, int vetor[]){
        int i, j, aux, repeated = 0;

        for(i = 0; i < size; i++){
            for(j = 0; j < size - 1 - i; j++){
                if(vetor[j] > vetor[j + 1]){
                    aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                }
            }
        }
    }

    int Contar (int number, int value, int vetor[]){
        int i;

        for (i = 0; i < number; i++){
            if( value <= vetor[i] ) return number - i;
        }

        return 0;
    }

void printMatrix(int size, int matrix[size][size]){
        int i, j;

        for(i = 0; i < size; i++){
            for(j = 0; j < size - 1; j++){
                printf("%d ", matrix[i][j]);
            }
            printf("%d\n", matrix[i][j]);
        }
    }