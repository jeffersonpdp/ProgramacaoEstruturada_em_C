#include <stdio.h>
#include <math.h>

int main(){

    float A, B, C;
    double X1, X2, delta;

    scanf("%f %f %f", &A, &B, &C);

    delta = B*B - 4*A*C;
    delta = sqrt(delta);
    X1 = (-B + delta)/(2*A);
    X2 = (-B - delta)/(2*A);

    printf("%.4f %.4f\n", X1, X2);

    return 0;
}