#include <stdio.h>
#include <math.h>

    static int smaller;

    //int lower_number(int);
    void lower_number (int);

int main(){

    int Numbers;

    scanf("%d", &Numbers);

    if(Numbers < 0) printf("nenhum numero informado\n");

    smaller = Numbers;

    while(Numbers >= 0){

    lower_number (Numbers);

    scanf("%d", &Numbers);
    }

    if(smaller >= 0) printf("%d\n", smaller);

    return 0;
}

    void lower_number (int N){
        smaller = (smaller + N - fabs(smaller - N))/2;
    }