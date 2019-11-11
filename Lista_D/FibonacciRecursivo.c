#include <stdio.h>

    long long fibonacciRecursivo (int n);

int main () {
int n;
scanf ("%d", &n);
printf ("%lld\n", fibonacciRecursivo (n));
return 0;
}

    long long fibonacciRecursivo (int number){
        if(number == 1 || number == 2) return number - 1;
        return fibonacciRecursivo (number - 1) + fibonacciRecursivo (number - 2);
    }