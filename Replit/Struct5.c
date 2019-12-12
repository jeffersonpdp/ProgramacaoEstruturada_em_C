#include <stdio.h>

typedef struct prova_s{
 double notas[100];
 int n;
 double media;
 double minimo;
 double maximo;
 double variancia;
} prova;

  void imprime(prova);
  double media(prova);
  double minimo(prova);
  double maximo(prova);
  double variancia(prova, double);


int main() {

  prova p;
  int i;

  scanf("%d", &p.n);

  for(i = 0; i < p.n; i++)
    scanf("%lf", &p.notas[i]);

  p.media = media(p);
  p.minimo = minimo(p);
  p.maximo = maximo(p);
  p.variancia = variancia(p, p.media);

  imprime(p);

  return 0;
}

  void imprime(prova p){
    printf("%.2lf ", p.media);
    printf("%.2lf ", p.minimo);
    printf("%.2lf ", p.maximo);
    printf("%.2lf", p.variancia);
  }

  double media(prova p){
    int i;
    double soma = 0;
    for(i = 0; i < p.n; i++)
      soma += p.notas[i];

    return soma/p.n;
  }

  double minimo(prova p){
    int i;
    double minimo = p.notas[0];
    for(i = 1; i < p.n; i++){
      if(p.notas[i] < minimo)
        minimo = p.notas[i];
    }
    return minimo;
  }

  double maximo(prova p){
    int i;
    double maximo = p.notas[0];
    for(i = 1; i < p.n; i++){
      if(p.notas[i] > maximo)
        maximo = p.notas[i];
    }
    return maximo;
  }

  double variancia(prova p, double media){
    double soma = 0;
    int i;
    for(i = 0; i < p.n; i++)
        soma += (p.notas[i] - media)*(p.notas[i] - media);
    return soma/ (p.n - 1);
  }