#include<stdio.h>

    void troca(int*, int*);

int main() {
  int x, y;
  int n;
  scanf("%d", &n);

  while(n) { //pergunta: por que isto funciona?
    n--;
    scanf("%d %d", &x, &y);
    troca(&x, &y);
    printf("%d %d\n", x, y);
  }
  return 0;
}

    void troca(int *a, int *b){
        int aux = *a;
        *a = *b;
        *b = aux;
    }