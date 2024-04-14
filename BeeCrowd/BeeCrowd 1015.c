#include<stdio.h>
#include<math.h>

int main(){

    double x1,y1;
    scanf("%lf %lf",&x1,&y1);

    double x2,y2;
    scanf("%lf %lf", &x2, &y2);

    double a= (x2-x1);
    a= a*a;


    double b= (y2-y1);
    b= b*b;


    double dis= sqrt(a+b);

    printf("%.4lf\n", dis);


    return 0;


}
