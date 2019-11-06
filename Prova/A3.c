#include <stdio.h>
#include <stdlib.h>

    void creatmatriz(int size, int **matrix);
    void printmatriz(int size, int **matrix);

int main(){

    int size, i;
    int **matrix;

    scanf("%d", &size);

    matrix = (int**) malloc( (2 * size) * sizeof(int*));

    for(i = 0; i < 2*size; i++)
     matrix[i] = (int*) malloc( (2 * size) * sizeof(int));

    creatmatriz(size, matrix);
    printmatriz(size, matrix);



    return 0;
}


    void creatmatriz(int size, int **matrix){
        int i, j;

        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++){
                scanf("%d", &matrix[i][j]);
                matrix[i + size][j + size] = matrix[i][j];
                matrix[i][j] = - matrix[i][j];
            }
        }

        for(i = 0; i < size; i++){
            for(j = size; j < 2*size; j++){
               matrix[i][j] = 1;
            }
        }

        for(i = size; i < 2*size; i++){
            for(j = 0; j < size; j++){
               if(i == j + size)  matrix[i][j] = 1;
               else matrix[i][j] = 0;
            }
        }

    }

        void printmatriz(int size, int **matrix){
        int i, j;

        for(i = 0; i < 2*size; i++){
            for(j = 0; j < 2*size - 1; j++){
                printf("%d ", matrix[i][j]);
            }
            printf("%d\n", matrix[i][j]);
        }

        }
