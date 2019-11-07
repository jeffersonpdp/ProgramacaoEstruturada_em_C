#include <stdio.h>
#include <stdbool.h>

    void createVetor (int, int[]);
    bool secureSearch (int, int[], int);

int main(){

    int values, i, number;
    scanf("%d", &values);

    int key[values];

    createVetor(values, key);
    for(i = 0; i < values; i++){

        while(scanf("%d", &number) == 1){
            if( secureSearch(values, key, number) ) printf("SIM\n");
            else printf("CHAVE NAO ENCONTRADA\n");
        }
    }

    return 0;
}

    void createVetor (int size, int vetor[]){
        int i;

        for(i = 0; i < size; i++)
            scanf("%d", &vetor[i]);
    }

    bool secureSearch (int size, int vetor[], int number){
        int i;
            for(i = 0; i < size; i++){
                if(number == vetor[i]) return true;
            }
        return false;
    }
