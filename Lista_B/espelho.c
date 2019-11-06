#include <stdio.h>
#include <stdbool.h>

    void printMesage (bool);
    bool comparator (int, int);

int main(){

    int A, B;

    scanf("%d %d", &A, &B);

    printMesage(comparator(A, B));

    return 0;
}

    void printMesage (bool mirror){
        if(mirror) printf("espelho\n");
        else printf("nao espelho\n");
    }

    bool comparator (int num1, int num2){
        int i;
        for(i = 1; i < 1001; i = i*10){
            if(num1 / (1000 / i) % 10 != num2 / (1 * i) % 10) return false;
        }
        return true;
    }