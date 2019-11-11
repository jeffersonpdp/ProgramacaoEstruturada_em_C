#include <stdio.h>

    void creatMatrix (int, int**);
    void printMatrix (int, int**);
    int findButterfly (int, int**);
    void creatvetor(int, int*);

int main(){

    int size, i;
    int **matrix;
    int butterflies = 0;

    scanf("%d", &size);

    matrix = (int **) malloc( size * sizeof(int *));

    for(i = 0; i < size; i++)
        matrix[i] = (int *) malloc(size * sizeof(int));

    creatMatrix(size, matrix);

    findButterfly(size, matrix)

    //printMatrix(size, matrix);


    return 0;
}

    int findButterfly (int size, int **matrix){
        int i, j, k, l;
        int *vetor;
        l = 0;
        vetor = malloc (size * size * sizeof(int));

        for(k = 0; k < 2*size; k++){
            scanf("%d %d", &i, &j);

            creatVetor(matriz[i][j], vetor, l);


            while(){
            if(  matriz[i][j] != vetor[l])
                vetor[]
            }


        }

    }

    void creatVetor(int number, int *vetor, int position){

    }