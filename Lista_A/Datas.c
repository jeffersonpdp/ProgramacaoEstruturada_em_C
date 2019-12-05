#include <stdio.h>
#include <stdbool.h>

    bool ano_bissexto(int);
    bool validarData(int, int, int, bool);

int main(){

    int cases, dia, mes, ano;
    bool bissexto, valida;

    scanf("%d", &cases);

    while(cases){

    scanf("%d %d %d", &dia, &mes, &ano);

    bissexto = ano_bissexto(ano);

    valida = validarData(dia, mes, ano, bissexto);

    //printf("%d %d %d\n", dia, mes, ano);
    (valida) ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");

    cases--;
    }

    return 0;
}

    bool ano_bissexto(int ano){

        if( ano % 400 == 0) return true;
        if( ano % 4 == 0 && ano % 100 != 0) return true;

        return false;
    }

    bool validarData(int dia, int mes, int ano, bool bissexto){
        if(dia > 31 || dia < 1) return false;
        if(mes > 12 || mes < 1) return false;
        if(ano < 0) return false;

        if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia > 30) return false;
        }

        if(mes == 2 && !bissexto){
            if(dia > 28) return false;
        }

        if(mes == 2 && bissexto){
            if(dia > 29) return false;
        }

        return true;
    }