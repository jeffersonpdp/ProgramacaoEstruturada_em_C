#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
        int nl, nc, i,j;

        scanf ("%d %d\n", &nl,&nc); //Input number of lines and collums of the matrix

        char* matrix = (char*) malloc(sizeof(char)*nl*nc);

        for (i=0;i<nl;i++) {
                char c;
                for (j=0;j<nc;j++) {
                        scanf("%c",&matrix[i*nc+j]);   //Input matrix
                }
                scanf("%c", &c);
        }

        printf("This is your matrix:\n");
        for (i = 0; i < nl; i++) {
                for (j = 0; j < nc; j++)
                        printf("%c", matrix [i*nc+j]);
                printf("\n");
        }

        free(matrix);
        return 0; }