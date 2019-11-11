#include<stdio.h>

    void absoluto (int*);

int main() {

 int x;
 int n, i;
 scanf("%d", &n);

 for(int i=0; i<n; i++) {
 scanf("%d", &x);
 absoluto(&x);
 printf("%d\n", x);
 }

 return 0;
}

    void absoluto (int *x){
        *x = (*x < 0) ? *x * -1: *x;
    }
