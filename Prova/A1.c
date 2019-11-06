#include <stdio.h>
#include <stdlib.h>

    double sumrecursive( int, double*, int);
    void createvetor(int, double*);
    void printvetor(int, double*);

int main(){

    int num;
    double *vet;

    scanf("%d", &num);
    num++;
    vet = malloc(num  * sizeof(double));

    createvetor(num, vet);
    //printvetor(num, vet);

    printf("%.2lf\n", sumrecursive(num, vet, 0));

    return 0;
}

    double sumrecursive( int size, double vetor[], int indice){
        if(size - 1 == indice) return vetor[size - 1];
        return vetor[indice] + 1/sumrecursive(size, vetor, indice + 1);

       // sumrecursive(size, vetor, indice + 1) + 1/vetor[size - 1 - indice ];
    }

    void createvetor(int size, double vetor[]){
        int i;
        for(i = 0; i < size; i++)
            scanf("%lf", &vetor[i]);
    }

    void printvetor(int size, double vetor[]){
        int i;
        for(i = 0; i < size; i++)
            printf("%.2lf ", vetor[i]);
    }
