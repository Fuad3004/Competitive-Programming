#include<stdio.h>

int main(){

    double A,B,C, pi=3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);

    double t, c,tr,sq,r;


    printf("TRIANGULO: %.3lf\n", t = (0.5*A*C));

    printf("CIRCULO: %.3lf\n", c = (pi*C*C));

    printf("TRAPEZIO: %.3lf\n", tr = (0.5*(A+B)*C));

    printf("QUADRADO: %.3lf\n", sq = B*B);

    printf("RETANGULO: %.3lf\n", r = A*B);

    return 0;


}
