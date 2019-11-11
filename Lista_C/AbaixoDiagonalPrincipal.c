#include <stdio.h>

    void creatMatrix (int size, int matrix[][size]);
    int sumMatrix (int size, int matrix[][size]);
    int sumNumbers (int);

int main(){

    int n;
    char operato;

    scanf("%c", &operato);
    scanf("%d", &n);

    int matrix[n][n];

    creatMatrix(n, matrix);

    if(operato == 'S')
    printf("%.1f\n", (float) sumMatrix(n, matrix) );
    else
    printf("%.1f\n", (float) sumMatrix(n, matrix) / sumNumbers(n - 1) );

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

        for(i = 0; i < size; i++){
            for(j = 1 + i; j < size; j++)
                sum += matrix[j][i];
        }

        return sum;
    }

    int sumNumbers (int size){
        if(size == 1) return 1;
        return size + sumNumbers(size - 1);
    }
