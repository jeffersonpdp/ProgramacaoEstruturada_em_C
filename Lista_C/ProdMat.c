#include <stdio.h>

    void creatMatrix (int size, int matrix[][size]);
    int multMatrix (int, int, int  size, int matrix1[][size], int matrix2[][size]);
    void call_multMatrix (int  size, int matrix1[][size], int matrix2[][size]);

int main(){

    int n;

    scanf("%d", &n);

    int matrixA[n][n], matrixB[n][n];

    creatMatrix(n, matrixA);
    creatMatrix(n, matrixB);

    call_multMatrix(n, matrixA, matrixB);

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

    int multMatrix(int lineA, int columnB, int size, int matrixA[][size], int matrixB[][size]){
        int i, j;
        int sum = 0;
        for( i = 0; i < size; i++)
        sum += matrixA[ lineA ][ i ] * matrixB[ i ][ columnB ];

       return sum;
    }

    void call_multMatrix(int size, int matrix1[][size], int matrix2[][size]){
        int i, j;
        int sum = 0;
        for( i = 0; i < size; i++){
            for( j = 0; j < size - 1; j++){
               sum = multMatrix(i, j, size, matrix1, matrix2);
               printf("%d ", sum);
        }
        sum = multMatrix(i, j, size, matrix1, matrix2);
        printf("%d\n", sum);
        }
    }