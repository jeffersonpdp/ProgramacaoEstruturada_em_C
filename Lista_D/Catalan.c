#include <stdio.h>

    long int catalanNumber(int);

int main(){

    int number;

    scanf("%d", &number);

    while( number >= 0 ){

        printf("%ld\n", catalanNumber(number));

        scanf("%d", &number);
    }

    return 0;
}

    long int catalanNumber(int C){
        if (C <= 1) return 1;

        long int res = 0;

        for (int i=0; i<C; i++)
            res += catalanNumber(i)*catalanNumber(C-i-1);

        return res;
    }