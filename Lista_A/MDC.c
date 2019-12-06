#include<stdio.h>

/* retorna o mdc entre n1 e n2 */
/* assumindo n1<n2 */
    int mdc(int, int);

/* nao modifique o main!! */
int main() {
  int n1, n2, r;
  scanf("%d %d", &n1, &n2);

  r = ( n1 < n2 )? mdc(n1, n2) : mdc(n2, n1);

  printf("%d\n", r);
}

    int mdc (int num1, int num2){
        int resto;

        do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

        } while (resto != 0);

        return num1;
    }