#include <stdio.h>

    _Bool isBissexto (int);

int main () {
 int ano;
 scanf ("%d", &ano);
 if (isBissexto (ano))
 printf ("ANO BISSEXTO\n");
 else
 printf ("ANO NAO BISSEXTO\n");
 return 0;
}

    _Bool isBissexto (int A){
        if( A % 400 == 0) return 1;
        if( A % 4 == 0 && A % 100 != 0) return 1;
        return 0;
    }
