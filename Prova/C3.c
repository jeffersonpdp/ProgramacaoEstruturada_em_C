#include <stdio.h>
#include <stdlib.h>

    int** createMatrix(int);
    int** newMatrix(int, int*, int**);
    int* createVetor(int);
    void printMatrix(int**, int);

int main(){

    int n, i, j;
    int *rows;
    int **matrixA, **matrixH;

    scanf("%d", &n);

    matrixA = createMatrix(n);

    rows = createVetor(n);

    matrixH = newMatrix(n, rows, matrixA);

    printMatrix(matrixH, n);

    return 0;
}

    int** createMatrix(int size){
        int i, j;
        int **matrix;
        matrix = (int**) malloc(size * sizeof(int*));
        for(i = 0; i < size; i++)
            matrix[i] = (int*) malloc(size * sizeof(int));

        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++)
                scanf("%d", &matrix[i][j]);
        }
        return matrix;
    }

    int** newMatrix(int size, int *rows, int **matrixOld){
        int i, j;
        int **matrix;
        matrix = (int**) malloc(size * sizeof(int*));
        for(i = 0; i < size; i++)
            matrix[i] = (int*) malloc(size * sizeof(int));

        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++){
                matrix[i][j] = matrixOld[ rows[i] ][j];
                //printf("%d ", matrix[i][j]);
            }
        }

        return matrix;

    }

    int* createVetor(int size){
        int i;
        int *vetor;
        vetor = malloc(size*sizeof(int));

        for(i = 0; i < size; i++){
            scanf("%d", &vetor[i]);
            vetor[i] -= 1;
        }

        return vetor;
    }

    void printMatrix(int **matrix, int size){
        int i, j;
        for(i = 0; i < size; i++){
            for(j = 0; j < size - 1; j++)
                printf("%d ", matrix[i][j]);
            printf("%d\n", matrix[i][j]);
        }
    }
