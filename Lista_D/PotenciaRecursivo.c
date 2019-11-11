#include <stdio.h>

    long int potenciaRecursivo (int, int);

int main () {
int a, n;
scanf ("%d", &a);
scanf ("%d", &n);
printf ("%ld\n", potenciaRecursivo (a, n));
return 0;
}

    long int potenciaRecursivo(int number, int times){
        if( times == 1 ) return number;
        if( times == 0) return 1;
        return number * potenciaRecursivo(number, times - 1);
    }