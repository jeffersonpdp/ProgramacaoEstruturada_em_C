#include<stdio.h>
#include<stdlib.h>

 int* combina(int*, int*, int, int);

int main() {
  int n, m, i;
  int *v, *w, *r;
  scanf("%d %d", &n, &m);
  v = malloc(sizeof(int) * n);
  w = malloc(sizeof(int) * m);
  for(i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
  for(i = 0; i < m ; i++) {
    scanf("%d", &w[i]);
  }
  r = combina(v, w, n, m);
  for(i = 0; i < n+m-1; i++) {
    printf("%d ", r[i]);
  }
  printf("%d\n", r[n+m-1]);
  free(v);
  free(w);
}

 int* combina(int *vetor1, int *vetor2, int size1, int size2){
    int *vetor1e2, i;

    vetor1e2 = malloc((size1 + size2) * sizeof(int));

    for(i = 0; i < size1; i++)
        *(vetor1e2 + i) = *(vetor1 + i);

    for(i = size1; i < size2 + size1; i++)
        *(vetor1e2 + i) = *(vetor2 + size1 + size2 - i - 1);

    return vetor1e2;
 }