#include<stdio.h>

/* retorna 1 se n primo e 0 se n composto */
    int primo(int n);
    int conta_primos (int max);

/* Nao modifique o main!! */
int main() {
  int n;
  scanf("%d", &n);
  //if (primo(n)) printf("PRIMO\n");
  //else printf("COMPOSTO\n");

    printf("%d\n", conta_primos(n));

  return 0;
}

    int primo (int n){
        int i, c = 0;
        for(i = 1; i <= n; i++){
            if(n % i == 0 ) c++;
            if(c > 2 || n == 1) return 0;
        }
        return 1;
    }

    int conta_primos (int max){
        int prime = 2, amount = 0;

    while(prime <= max){

            if( primo (prime) ) amount++;

            prime++;
        }


        return amount;
    }