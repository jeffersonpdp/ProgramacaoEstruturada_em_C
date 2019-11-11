#include <stdio.h>
#include <math.h>
#include <stdlib.h>

    void creatMatrix (int, int, char**);
    void printMatrix(int, int, char**);
    int largestInt (int, int);
    int PACfood (int, char**);

int main(){

    int size, i;
    char **matrix;
    int bigger;

    scanf("%d", &size);

    matrix = (char**) malloc (size * sizeof(char *));

    for(i = 0; i < size; i++){
        matrix[i] = (char *) malloc(size * sizeof(char));
    }

    creatMatrix(size, size, matrix);
    //printMatrix(size, size, matrix);

    bigger = PACfood(size, matrix);

    printf("%d\n", bigger);

    return 0;
}

    void creatMatrix(int rows, int columns,  char **matrix){
        int i, j;

        for(i = 0; i < rows; i++){
            //for(j = 0; j < columns; j++){
                scanf("%s", matrix[i]);
               // printf("%s\n", matrix[i]);
            //}
        }
    }

    void printMatrix(int rows, int columns, char **matrix){
        int i, j;

        for(i = 0; i < rows; i++){
            for(j = 0; j < columns - 1; j++){
                printf("%c", matrix[i][j] );
            }
            //printf("i = %d\n", i);
            printf("%c\n", matrix[i][j] );
        }
    }


    int PACfood (int size, char **board){
        int i, j;
        int comida = 0;
        int max = 0;

        for(i = 0; i < size; i++){
            //printf("i = %d\n", i);

            if(i % 2 == 0){
            for(j = 0; j < size; j++){

                //printf("jpar = %d\n", j);
                //printf("%c\n", board[i][j] );
                if(board[i][j] == 'o')  comida++;


                if(board[i][j] == 'A' || i == size - 1 && j == size - 1){
                    max =  largestInt (max, comida);
                    comida = 0;
                }
                //printf("comida = %d\n", comida);
                //printf("max = %d\n", max);
            }
            }
            else{
            for(j = size - 1; j >= 0; j--){
                //printf("jimpar = %d\n", j);
                //printf("%c\n", board[i][j] );
                if(board[i][j] == 'o')  comida++;

                if(board[i][j] == 'A' || i == size - 1 && j == size - 1){
                    max =  largestInt (max, comida);
                    comida = 0;
                }
                //printf("comida = %d\n", comida);
                //printf("max = %d\n", max);
            }
            }

    }
     return max;
    }

    int largestInt (int N1, int N2){
         return (N1 + N2 + fabs(N1 - N2))/2;
    }

