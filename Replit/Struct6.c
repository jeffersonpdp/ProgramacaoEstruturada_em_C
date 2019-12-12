#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct comodo_s {
  char nome[50];
  double largura;
  double comprimento;
} comodo;

typedef struct construcao_s {
  int n;
  comodo *comodos;
} construcao;

void preenche(comodo *com, int pos, char nome[50], double largura, double comprimento) {
  pos--;
  strcpy(com[pos].nome, nome);
  com[pos].largura = largura;
  com[pos].comprimento = comprimento;
}

void imprime(construcao c) {
  printf("Num de comodos %d\n", c.n);
  for(int i=0; i<c.n; i++) {
    printf("%s %.2f %.2f\n", (*(c.comodos +i)).nome, c.comodos[i].largura, c.comodos[i].comprimento);
  }
}

int main() {
  construcao c;
  c.n = 3;
  c.comodos = malloc(3*sizeof(comodo));
  preenche(c.comodos, 1, "cozinha", 1, 2);
  preenche(c.comodos, 2, "quarto", 3, 3);
  preenche(c.comodos, 3, "banheiro", 2, 1);
  imprime(c);
  return 0;
}