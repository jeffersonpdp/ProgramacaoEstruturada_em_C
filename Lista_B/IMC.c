#include <stdio.h>

    double calculaIMC (double, double);
    void imprimeMensagem(double);

int main(){
    double a, p;
    scanf ("%lf", &a);
    scanf ("%lf", &p);
    double imc = calculaIMC (a, p);
    imprimeMensagem (imc);
    return 0;
}

    double calculaIMC (double height, double weight) {
        return weight / (height * height);
    }


    void imprimeMensagem(double index){
        if ( index >= 40 ) printf("Obesidade Grau III (morbida)\n");
		else if ( index >= 35 ) printf("Obesidade Grau II (severa)\n");
		else if ( index >= 30 ) printf("Obesidade Grau I\n");
		else if ( index >= 25 ) printf("Sobrepeso\n");
		else if ( index >= 18.5 ) printf("Saudavel\n");
		else if ( index >= 17 ) printf("Magreza leve\n");
		else if ( index >= 16 ) printf("Magreza moderada\n");
		else printf("Magreza grave\n");
    }