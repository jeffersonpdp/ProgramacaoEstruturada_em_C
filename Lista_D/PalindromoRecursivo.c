#include <stdio.h>
#include <stdbool.h>
#include <string.h>

    bool isPalindromo (char str[201], int i, int j);

int main () {
char str[201];
while (scanf ("%s", str) == 1) {
if (isPalindromo (str, 0, strlen(str) - 1)) {
printf ("sim\n");
}
else {
printf ("nao\n");
}
}
return 0;
}

    bool isPalindromo (char str[201], int i, int j){
        if ( str[i] != str[j] ) return false;
        if ( i != j && i + 1 != j ) return isPalindromo (str, i + 1, j - 1);
        return true;
    }