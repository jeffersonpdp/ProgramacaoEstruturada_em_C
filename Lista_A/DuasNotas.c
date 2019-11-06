#include <stdio.h>

    int notas (int);

int main(){

    int price, money, possible;

    scanf("%d %d", &price, &money);

    while(price && money){

        money -= price;

        possible = notas(money);

        (possible) ? printf("possible\n") : printf("impossible\n");

        scanf("%d %d", &price, &money);
    }

    return 0;
}

    int notas (int money){
        int hundred, fifth, twenty, ten, five, two;

        //if(money >= 100) {
          hundred = money / 100;
          money -= hundred * 100;
        //}
        if(hundred > 2) return 0;//{
          fifth = money / 50;
          money -= fifth * 50;
        //}
        if(fifth > 2) return 0; //{
          twenty = money / 20;
          money -= twenty * 20;
        //}
        if(twenty > 2) return 0; //{
          ten = money / 10;
          money -= ten * 10;
        //}
        if(ten > 2) return 0;//{
          five = money / 5;
          money -= five * 5;
        //}
        if(five > 2) return 0;//{
          two = money / 2;
          money -= two * 2;
        //}
        if(two > 2 || money == 1) return 0;

        if(hundred + fifth + twenty + ten + five + two == 1){
            hundred *= 2;
            twenty *= 2;
            ten *= 2;
        }

        if(hundred + fifth + twenty + ten + five + two != 2)
            return 0;

        return 1;
    }