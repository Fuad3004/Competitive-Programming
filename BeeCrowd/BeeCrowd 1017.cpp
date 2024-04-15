#include<stdio.h>

int main(){

    int t,av;

    double liter;

    scanf("%d %d", &t, &av);

    liter= ((t*av*1.0)/12);

    printf("%.3lf\n",liter);

}
