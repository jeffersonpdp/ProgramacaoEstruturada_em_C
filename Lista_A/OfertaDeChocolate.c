#include <stdio.h>

    int how_much (int, int, int);

int main(){

    int T, N, C, M; //casos testados, dinheiro, preço, embalagens

    scanf("%d", &T);

    while (T){

        scanf("%d %d %d", &N, &C, &M);
        printf("%d\n", how_much (N, C, M));

        T--;
    }

    return 0;
}

    int how_much (int money, int price, int package){
        int amount_chocolate;
        int amount_package = 0;

        while (money >= price){
            money -= price;
            amount_package++;
        }

        amount_chocolate = amount_package;

        while ( amount_package >= package ){
            amount_package -= package;
            amount_package++;
            amount_chocolate++;
        }

        return amount_chocolate;
    }