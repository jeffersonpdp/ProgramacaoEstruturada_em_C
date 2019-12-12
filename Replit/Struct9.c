#include <stdio.h>

typedef struct country_s {
  char sigla[3];
  double populacao;
} country;

void imprime (country c) {
  printf("%s %.1f\n", c.sigla, c.populacao);
}

void troca (country *a, country *b){
  char auxS[3];
  double auxD;
  int i;
  for(i = 0; i < 3; i++){
    auxS[i] = a->sigla[i];
    a->sigla[i] = b->sigla[i];
    b->sigla[i] = auxS[i];
  }

  auxD = a->populacao;
  a->populacao = b->populacao;
  b->populacao = auxD;
}

int main(void) {
  country brasil = {"BRA", 209.3};
  country argentina = {"ARG", 44.2};

  imprime(brasil);
  imprime(argentina);

  troca(&brasil, &argentina);

  imprime(brasil);
  imprime(argentina);
  return 0;
}