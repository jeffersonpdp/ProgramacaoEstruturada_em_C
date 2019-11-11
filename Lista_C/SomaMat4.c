#include <stdio.h>

    void creatMatrix (int size, int matrix[][size]);
    int sumMatrix (int size, int matrix[][size]);
    //void printMatrix(int size, int matrix[][size]);

int main(){

    int n;

    scanf("%d", &n);

    int matrix[n][n];

    creatMatrix(n, matrix);

    //printMatrix(n, matrix);

    printf("%d\n", sumMatrix(n, matrix) );

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

    int sumMatrix (int size, int matrix[][size]){
        int i, j;
        int sum = 0;

        for(i = 0; i < size - 1; i++){
            for(j = 0; j < size - 1 - i; j++){
                sum += matrix[i][j];
            }
        }

        return sum;
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