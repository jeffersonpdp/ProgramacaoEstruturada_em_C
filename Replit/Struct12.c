#include <stdio.h>
#include <stdlib.h>

typedef struct aluno_s {
  int RA;
  int CPF;
} aluno;

typedef struct classe_s {
  int n; //quantidade de alunos
  aluno **alunos;
} classe;

void imprime(classe c) {
  for(int i=0; i<c.n; i++) {
    printf("%d %d\n", c.alunos[i]->RA, c.alunos[i]->CPF);
  }
}
void adiciona(aluno *a, classe *c) {
  c->alunos[c->n] = a;
  c->n++;
}

int main(void) {
  aluno a1 = {123, 456};
  aluno a2 = {789, 101};
  classe c = {0};
  c.alunos = malloc(sizeof(aluno**)*100);

  adiciona(&a1, &c);
  adiciona(&a2, &c);
  imprime(c);

  a1.RA = 999;

  imprime(c);
  return 0;
}