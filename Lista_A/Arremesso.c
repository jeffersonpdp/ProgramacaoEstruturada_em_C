#include <stdio.h>

    int possible(int, int, int);

int main(){

    int target, speed, hit = 0;

    scanf("%d %d", &target, &speed);

    while( target && speed ){

    while(speed && !hit){
        hit = possible(target, speed, 0);
        speed--;
    }

    (hit) ? printf("possivel\n") : printf("impossivel\n");

    scanf("%d %d", &target, &speed);
    hit = 0;
    }

    return 0;
}

    int possible(int target, int speed, int hole){
        int i;
        if(speed == 0) return 0;
        for(i = 0; i < speed; i++){
            hole += speed;
        if(hole == target) return 1;
        }
        return possible(target, speed - 1, hole);
    }
