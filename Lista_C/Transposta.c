#include <stdio.h>

    void createMatrix (int row, int column, int matrix[row][column]);
    void printMatrix(int row, int column, int matrix[row][column]);

int main(){

    int row; //= sizeof(result) / sizeof(result[0]);
    int column; //= sizeof(result[0])/row;

    int i, j;

    scanf("%d %d", &row, &column);

    int matrix[row][column];

    createMatrix (row, column, matrix);
    printMatrix (row, column, matrix);

    return 0;
}

    void createMatrix (int row, int column, int matrix[row][column]){
        int i, j;

        for(i = 0; i < row; i++){
            for(j = 0; j < column; j++){
                scanf("%d", &matrix[i][j]);
            }
        }
    }

    void printMatrix(int row, int column, int matrix[row][column]){
        int i, j;

        for(i = 0; i < column; i++){
            for(j = 0; j < row - 1; j++){
                printf("%d ", matrix[j][i]);
            }
            printf("%d\n", matrix[j][i]);
        }
    }