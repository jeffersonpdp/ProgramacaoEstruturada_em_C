#include <stdio.h>
#include <stdlib.h>

    void createVetor(int, int*);
    void printVetor(int, int*);
    int pularCanos(int, int*, int);

int main(){

    int pulo, qtd_canos, venceu;
    int *canos;

    scanf("%d %d\n", &pulo, &qtd_canos);

    canos = malloc(qtd_canos * sizeof(int));

    createVetor(qtd_canos, canos);

    //printVetor(qtd_canos, canos);

    venceu = pularCanos(qtd_canos, canos, pulo);

    (venceu) ? printf("YOU WIN\n") : printf("GAME OVER\n");

    return 0;
}

    void createVetor(int size, int *vetor){
        int i;
        for(i = 0; i < size; i++)
            scanf("%d", &vetor[i]);
    }

    int pularCanos(int size, int *vetor, int pulo){
        int i;
        for(i = 0; i < size - 1; i++){
            if(vetor[i] + pulo < vetor[i + 1] || vetor[i] - pulo > vetor[i + 1])
                return 0;
        }
        return 1;
    }

    void printVetor(int size, int *vetor){
        int i;
        for(i = 0; i < size; i++)
            printf("%d\n", vetor[i]);
    }