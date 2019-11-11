#include <stdio.h>
#include <stdbool.h>

    void createVetor (int, int[]);
    bool sumSearch (int, int[], int);

int main(){

    int number, value;

    scanf("%d", &number);

    int vetor[number];

    createVetor (number, vetor);

    scanf("%d", &value);

    if( sumSearch(number, vetor, value) ) printf("SIM\n");
    else printf("NAO\n");

    return 0;
}

    void createVetor (int size, int vetor[]){
        int i;

        for(i = 0; i < size; i++)
            scanf("%d", &vetor[i]);
    }

    bool sumSearch (int size, int vetor[], int number){
        int i, j;
            for(i = 0; i < size; i++){
                for(j = 0; j < size; j++ ){
                if(number == vetor[i] + vetor[j] && i != j) return true;
                }
            }
        return false;
    }
