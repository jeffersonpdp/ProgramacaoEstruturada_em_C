#include <stdio.h>

    void writeVetor(int*, int);
    int bigger(int *vetor);

int main(){

    int N, i = 0, comum = -1;
    int aves[5] = {0};

    scanf("%d", &N);

    writeVetor(aves, N);
    comum = bigger(aves);

    //printf("comum = %d\n", comum);
    //printf("aves[0] = %d\n", aves[i]);

    while(comum != aves[i]){
        i++;
        //printf("i = %d\n", i);
    }

    printf("%d\n", i + 1);

    return 0;
}

    void writeVetor(int *vetor, int qtd){
        int ID;
        while(qtd){
            scanf("%d", &ID);
            vetor[ID - 1] += 1;
            qtd--;
        }
    }

    int bigger(int *vetor){
        int more = vetor[0];
        int i;
        for(i = 0; i < 4; i++){
        if(vetor[i] < vetor[i+1])
            more = vetor[i+1];
        }
        //printf("more = %d\n", more);
        return more;
    }