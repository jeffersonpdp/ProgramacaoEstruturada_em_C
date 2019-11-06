#include<stdio.h>

int main(){

    int este_ano, nascimento;
    char nome[100];

    scanf("%d %s %d", &este_ano, nome, &nascimento);
    printf("%s, voce completa %d anos de idade neste ano.\n", nome, este_ano - nascimento);

    return 0;
}