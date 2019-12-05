#include <stdio.h>
#include <stdbool.h>

    int divisors (int);
    void is_perfect_number (int, int);

int main(){

    int N;

    scanf("%d", &N);

    is_perfect_number(divisors(N), N);

    return 0;
}

    int divisors (int number){
        int sum = 0;
        int i;

        for( i = 1; i < number; i++){
            if ( number % i == 0) sum += i;
        }

        return sum;
    }

    void is_perfect_number (int sum, int number){
        if (sum == number) printf("SIM\n");
        else printf("NAO\n");
    }