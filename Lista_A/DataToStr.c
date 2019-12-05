#include <stdio.h>
#include <string.h>

    void mesString(int, int, int);

int main(){

    int dia, mes, ano;

    while(scanf("%d", &dia) == 1){
        scanf("%d %d", &mes, &ano);

        mesString(dia, mes, ano);
    }

    return 0;
}

    void mesString(int dia, int mes, int ano){
        char meses[12][12] = {
        "Janeiro",
        "Fevereiro",
        "Marco",
        "Abril",
        "Maio",
        "Junho",
        "Julho",
        "Agosto",
        "Setembro",
        "Outubro",
        "Novembro",
        "Dezembro"
        };
        printf("%02d de %s de %d\n", dia, *(meses + mes - 1), ano);
    }