//find the sum of the three digits

#include<stdio.h>

int main() {
    int num, a,b,c,d,sum;

    scanf("%d", &num); ///let num=564

    c= num%10; ///c=4
    num = num/10; ///num= 56

    b= num%10; ///b=6
    num= num/10;

    a= num%10; ///a= 5

    sum = a+b+c;


    printf("sum = %d\n", sum);

    return 0;

}

