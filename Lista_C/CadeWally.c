#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

    void creatMatrix (int, int, int**);
    //void printMatrix(int, int**);
    int findWally (int, int, int**);
    //void largestInt (int, int*);

int main(){

    int rows, columns, i;
    int **matrix;
    int Wally_position;
    //int *pointer;

    scanf("%d", &rows);
    scanf("%d", &columns);

    matrix = (int **) malloc( rows * sizeof(int *));

    for(i = 0; i < rows; i++)
        matrix[i] = (int *) malloc(columns * sizeof(int));

    //pointer = &low_number;

    creatMatrix(rows, columns, matrix);

    //printMatrix(size, matrix);

    Wally_position = findWally(rows, columns, matrix);

    if( Wally_position == -1 )
        printf("WALLY NAO ESTA NA MATRIZ\n");
    else
        printf("%d %d\n", Wally_position/10, Wally_position%10 );

    for(i = 0; i < rows; i++)
        free(matrix[i]);

    free(matrix);

    return 0;
}

    void creatMatrix(int rows, int columns,  int **matrix){
        int i, j;

        for(i = 0; i < rows; i++){
            for(j = 0; j < columns; j++)
                scanf("%c", &matrix[i][j]);
        }
    }

    void printMatrix(int rows, int columns, int **matrix){
        int i, j;

        for(i = 0; i < rows; i++){
            for(j = 0; j < columns - 1; j++){
                printf("%d ", matrix[i][j] );
            }
            printf("%d\n", matrix[i][j] );
        }
    }


    int findWally (int rows, int columns, int **matrix){
        int i, j;
        int sum = 0, rowup, rowdown, columnright, columnleft;

        for (i = 0; i < rows; i++){
            for(j = 0; j < columns; j++){

                rowup = i - 1;
                rowdown = i + 1;
                columnright = j + 1;
                columnleft = j - 1;

                if(i == 0) rowup = rows - 1;
                if(i == rows - 1) rowdown = 0;
                if(j == columns - 1) columnright = 0;
                if(j == 0) columnleft = columns - 1;

                if(matrix[i][j] == 1111){
                if(                      matrix[rowup][j] == 4 &&
                   matrix[i][columnleft] == 0 &&  matrix[i][columnright] == 0 &&
                                         matrix[rowdown][j] == 8
                    )
                    return i*10 + j;
                }
            }

        }
        return -1;
    }

    void largestInt (int N, int *pointer){
         *pointer = (*pointer + N + fabs(*pointer - N))/2;
    }