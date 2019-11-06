#include <stdio.h>

    int yearsPast(double, double, double, double);

int main(){

    int cases;
    double gA, gB, pA, pB;
    int years;

    scanf("%d", &cases);

    while(cases){

        scanf("%lf %lf %lf %lf", &pA, &pB, &gA, &gB);

        years = yearsPast(pA, pB, gA, gB);

        (years) ? printf("%d anos.\n", years) : printf("Mais de 1 seculo.\n");

        cases--;
    }

    return 0;
}

    int yearsPast(double pA, double pB, double gA, double gB){
        int century = 0;
        while(pA < pB ){
        pA *= (gA + 100);
        pB *= (gB + 100);
        century++;
        if(century > 100) return 0;
        }
        return century;
    }