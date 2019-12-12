#include <stdio.h>
#include <stdlib.h>

typedef struct registro_s {
  int identificacao;
  int idade;
  double peso;
} registro;

  void imprime(registro*);

int main(void) {
  registro *r;
  registro erre = {352, 21, 72.1};

  r = &erre;

  imprime(r);

  return 0;
}

  void imprime(registro *r){
    printf("%d ", (*r).identificacao);
    printf("%d ", (*r).idade);
    printf("%.1lf\n", (*r).peso);
  }