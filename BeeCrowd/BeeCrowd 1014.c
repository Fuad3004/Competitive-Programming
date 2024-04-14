#include<stdio.h>

int main(){

    int X;
    scanf("%d",&X);

    double Y;
    scanf("%lf", &Y);

    double avg= X/Y;

    printf("%.3lf km/l\n", avg);


    return 0;


}
