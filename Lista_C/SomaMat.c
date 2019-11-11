#include <stdio.h>

    void creatMatrix(int size, int matrix[][size]);
    //void printMatrix(int size, int matrix[][size]);
    void sum2Matrix(int size,  int matrixA[][size], int matrixB[][size]);

int main(){

    int n;

    scanf("%d", &n);

    int matrixA[n][n], matrixB[n][n];

    creatMatrix(n, matrixA);
    creatMatrix(n, matrixB);

    sum2Matrix(n, matrixA, matrixB);

//    printMatrix(n, matrixA);
  //  printMatrix(n, matrixB);

    return 0;
}

    void creatMatrix(int size, int matrix[size][size]){
        int i, j;

        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++){
                scanf("%d", &matrix[i][j]);
            }
        }
    }

    /*void printMatrix(int size, int matrix[size][size]){
        int i, j;

        for(i = 0; i < size; i++){
            for(j = 0; j < size - 1; j++){
                printf("%d ", matrix[i][j]);
            }
            printf("%d\n", matrix[i][j]);
        }
    }*/

    void sum2Matrix(int size,  int matrixA[][size], int matrixB[][size]){
        int i, j;

        for(i = 0; i < size; i++){
            for(j = 0; j < size - 1; j++){
                printf("%d ", matrixA[i][j] + matrixB[i][j]);
            }
            printf("%d\n", matrixA[i][j] + matrixB[i][j]);
        }
    }