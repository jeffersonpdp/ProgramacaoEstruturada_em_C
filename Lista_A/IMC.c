#include <stdio.h>

//	char* Indice (double);

int main(){

	double weight = 0.0, height = 0.0, IMC, index;
	//char* classification;

	scanf("%lf %lf", &height, &weight);

	IMC = weight / (height * height);

	//classification = Indice(IMC);
	index = IMC;
	//printf("%lf\n", index);
		if( index >= 40 ) printf("Obesidade Grau III (morbida)\n");
		else if( index >= 35 ) printf("Obesidade Grau II (severa)\n");
		else if( index >= 30 ) printf("Obesidade Grau I\n");
		else if( index >= 25 ) printf("Sobrepeso\n");
		else if( index >= 18.5 ) printf("Saudavel\n");
		else if ( index >= 17 ) printf("Magreza leve\n");
		else if ( index >= 16 ) printf("Magreza moderada\n");
		else printf("Magreza grave\n");

	return 0;
}
	/*
	char* type ( double index ){
		char type[100]; //= "Magreza grave";

		if ( index >= 16 ) type = "Magreza moderada";
		else if ( index >= 17 ) type = "Magreza leve";
		else if( index >= 18,5 ) type = "Saudavel";
		else if( index >= 25 ) type = "Sobrepeso";
		else if( index >= 30 ) type = "Obesidade Grau I";
		else if( index >= 35 ) type = "Obesidade Grau II (severa)";
		else if( index >= 40 ) type = "Obesidade GRau III (morbida)";

		return &type;
	}
	*/