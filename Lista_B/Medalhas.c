#include <stdio.h>
#include <stdlib.h>


    void imprimeMedalhas(int, int, int);

int main () {
    int t1, t2, t3;
    scanf ("%d", &t1);
    scanf ("%d", &t2);
    scanf ("%d", &t3);
    imprimeMedalhas (t1, t2, t3);
    return 0;
}

    void imprimeMedalhas(int temp1, int temp2, int temp3){
        int maior = (temp1 + temp2 + abs(temp1 - temp2))/2;
        maior = (maior + temp3 + abs(temp3 - maior))/2;

        int menor = (temp1 + temp2 - abs(temp1 - temp2))/2;
        menor = (menor + temp3 - abs(temp3 - menor))/2;

        int t1 = 2, t2 = 2, t3 = 2;

        if(maior == temp1 && menor == temp2){
            t1 = 2;
            t2 = 3;
            t3 = 1;
        }
        if(maior == temp2 && menor == temp1){
            t1 = 1;
            t2 = 3;
            t3 = 2;
        }
        if(maior == temp3 && menor == temp2){
            t1 = 2;
            t2 = 1;
            t3 = 3;
        }
        if(maior == temp1 && menor == temp3) {
            t1 = 3;
            t2 = 2;
            t3 = 1;
        }
        if(maior == temp2 && menor == temp3) {
            t1 = 3;
            t2 = 1;
            t3 = 2;
        }
        if(maior == temp3 && menor == temp1) {
            t1 = 1;
            t2 = 2;
            t3 = 3;
        }

        printf("%d\n%d\n%d\n", t1, t2, t3);
    }