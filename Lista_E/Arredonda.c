#include <stdio.h>

    void arredonda (int*, int, int);

int main() {
 int inicio , fim, i;
 int v[20];
 scanf("%d %d", &inicio, &fim);
 for (i=0; i<20; i++) {
 scanf("%d", &v[i]);
 }
 arredonda(v, inicio, fim);
 for(i=0; i<19; i++) {
 printf("%d ", v[i]);
 }
 printf("%d\n", v[19]);
}

    void arredonda (int* v, int begin, int end){
        int i;
        for(i = begin; i < end; i++){
            if(*(v+i)%10 != 0)
                *(v+i) = ( (*(v+i) / 10) + 1 ) * 10;
        }
    }
