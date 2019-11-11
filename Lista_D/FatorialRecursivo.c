#include <stdio.h>

    long long int fatorialRecursivo(int);

int main(){
    int n;
    scanf ("%d", &n);
    printf ("%lld\n", fatorialRecursivo (n));
    return 0;
}

    long long int fatorialRecursivo(int number){
        if( number == 1 || number == 0) return 1;
        return number * fatorialRecursivo(number - 1);
    }

