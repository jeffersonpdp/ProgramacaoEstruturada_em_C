#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

    void creatMatrix (int, int**);
    void printMatrix(int, int**);
    int findAmpulheta (int, int**, int*);
    void largestInt (int, int*);

int main(){

    int size, i;
    int **matrix;
    int low_number = -10000;
    int *pointer;

    scanf("%d", &size);

    matrix = (int **) malloc( size * sizeof(int *));

    for(i = 0; i < size; i++)
        matrix[i] = (int *) malloc(size * sizeof(int));

    pointer = &low_number;

    creatMatrix(size, matrix);
    //printMatrix(size, matrix);
    printf("%d\n", findAmpulheta(size, matrix, pointer));

    //free(*matrix);

    return 0;
}

    void creatMatrix(int size, int **matrix){
        int i, j;

        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++)
                scanf("%d", &matrix[i][j]);
        }
    }

    void printMatrix(int size, int **matrix){
        int i, j;

        for(i = 0; i < size; i++){
            for(j = 0; j < size - 1; j++){
                printf("%d ", matrix[i][j] );
            }
            printf("%d\n", matrix[i][j] );
        }
    }


    int findAmpulheta (int size, int **matrix, int *pointer){
        int i, j;
        int sum = 0;

        for (i = 1; i < size - 1; i++){
            for(j = 1; j < size - 1; j++){
                sum = matrix[i - 1][j - 1] + matrix[i - 1][j] + matrix[i - 1][j + 1]
                                            + matrix[i][j] +
                      matrix[i + 1][j - 1] + matrix[i + 1][j] + matrix[i + 1][j + 1];
                //printf("%d ", matrix[i][j] );
                largestInt(sum, pointer);
            }
            sum = 0;
        }
        return *pointer;
    }

    void largestInt (int N, int *pointer){
         *pointer = (*pointer + N + fabs(*pointer - N))/2;
    }