#include <stdio.h>
#include <stdlib.h>

    void createVetor (int, double*);
    void printVetor (int, double*);
    double medianVetor (int, double*);
    void BubbleSort (int, double*);

int main(){

    int cases, num;
    double *vetor_double;

    scanf("%d\n", &cases);


    while(cases){

        scanf("%d", &num);

        vetor_double = malloc (num * sizeof (double));

        createVetor (num, vetor_double);
        BubbleSort (num, vetor_double);

        printf("%.2lf\n", medianVetor (num, vetor_double));

        free(vetor_double);

        cases--;
    }

    return 0;
}

    void createVetor (int size, double *vetor){
        int i;

        for(i = 0; i < size; i++)
            scanf("%lf", (vetor + i) );
    }

    void printVetor (int size, double *vetor){
        int i;

        for(i = 0; i < size; i++)
            printf("%.2lf ", *(vetor + i) );

        printf("\n");
    }

    void BubbleSort (int size, double *vetor){
        int i, j, repeated = 0;
        double aux;

        for(i = 0; i < size; i++){
            for(j = 0; j < size - 1 - i; j++){
                if( *(vetor + j) > *(vetor + j + 1) ){
                    aux = *(vetor + j);
                    *(vetor + j) = *(vetor + j + 1);
                    *(vetor + j + 1) = aux;
                }
            }
        }
    }

    double medianVetor (int size, double *vetor){
        double median;
        if(size % 2 == 1) median = *(vetor + (size - 1)/2);
        else {
            median = *(vetor + (size - 1)/2) + *(vetor + size/2);
            median = median/2;
        }

        return median;
    }