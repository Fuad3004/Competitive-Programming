
//find the sum of the three digits

#include<stdio.h>

int main() {
    int num, a,b,c,d,sum;

    scanf("%d", &num);

    c= num%10;
    d= ((num-c)/10);
    b= d%10;
    a= ((d-b)/10)%10;

    sum = a+b+c;


    printf("sum = %d\n", sum);

    return 0;

}
