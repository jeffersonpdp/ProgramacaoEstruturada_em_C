#include <stdio.h>

    void creatMatrix(int size, int matrix[][size]);
    void sumDirect(int size,  int matrixA[][size], int matrixB[][size]);

int main(){

    int n;

    scanf("%d", &n);

    int matrixA[n][n], matrixB[n][n];

    creatMatrix(n, matrixA);
    creatMatrix(n, matrixB);

    sumDirect(n, matrixA, matrixB);


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

    void sumDirect(int size,  int matrixA[][size], int matrixB[][size]){
        int i, j;

        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++)
                printf("%d ", matrixA[i][j]);
            for(j = 0; j < size - 1; j++)
                printf("%d ", 0);
            printf("%d\n", 0);
        }
        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++)
                printf("%d ", 0);
            for(j = 0; j < size - 1; j++)
                printf("%d ", matrixB[i][j]);
            printf("%d\n", matrixB[i][j]);
        }
    }