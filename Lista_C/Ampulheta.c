#include <stdio.h>
#include <limits.h>
#include <math.h>

    void creatMatrix (int size, int matrix[][size]);
    int findAmpulheta (int size, int matrix[][size], int*);
    void largestInt (int, int*);

int main(){

    int size = 6;
    int matrix[size][size];
    int low_number = -10000;
    int *pointer;

    pointer = &low_number;

    creatMatrix(size, matrix);

    printf("%d\n", findAmpulheta(size, matrix, pointer));

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

    int findAmpulheta (int size, int matrix[][size], int *pointer){
        int i, j;
        int sum = 0;

        for (i = 1; i < size - 1; i++){
            for(j = 1; j < size - 1; j++){
                sum = matrix[i - 1][j - 1] + matrix[i - 1][j] + matrix[i - 1][j + 1]
                                            + matrix[i][j] +
                      matrix[i + 1][j - 1] + matrix[i + 1][j] + matrix[i + 1][j + 1];
                largestInt(sum, pointer);
            }
            sum = 0;
        }
        return *pointer;
    }

    void largestInt (int N, int *pointer){
         *pointer = (*pointer + N + fabs(*pointer - N))/2;
    }