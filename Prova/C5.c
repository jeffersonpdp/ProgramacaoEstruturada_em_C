#include <stdio.h>
#include <stdlib.h>

 void valida (int*, int*);
 //void constroi (int*, int, int);
 int* constroi (int, int);

int main(){

    int n, m, i;
    int *menor, *maior;
    int *vetor;

    scanf("%d %d", &m, &n);

    menor = &n;
    maior = &m;

   // printf("maior = %d\n", m);
   // printf("menor = %d\n", n);

    valida (maior, menor);

    //vetor = malloc ( (*maior - *menor + 1) * sizeof(int));

    vetor = constroi(m, n);

   // printf("maior = %d\n", m);
   // printf("menor = %d\n", n);


    for(i = 0; i < (*maior - *menor + 1); i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

 void valida(int *maior, int *menor){
    int aux;
    if(*maior < *menor){
        aux = *maior;
        *maior = *menor;
        *menor = aux;
    }
 }

 int* constroi (int maior, int menor){
     int i;
     int *vetor;

     vetor = (int*) malloc ( (maior - menor + 1) * sizeof(int));

     for(i = 0; i < (maior - menor); i++){
        vetor[i] = menor + i;
     }
     vetor[i] = maior;

     return vetor;
 }
