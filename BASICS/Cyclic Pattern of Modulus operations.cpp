//Problem Statement
///Let xyz denote the 3-digit integer whose digits are x, y, z from left to right.
/// Given a 3-digit integer abc none of whose digits is 0, find abc+bca+cab.

#include<stdio.h>

int main() {
    int num, a,b,c;

    scanf("%d", &num); ///let num=564

    c= num%10; ///c=4
    num = num/10; ///num= 56

    b= num%10; ///b=6
    num= num/10;

    a= num%10; ///a= 5


    int abc=0;

    abc= abc + a; ///abc = 0+5=5
    abc= abc*10; /// abc = 5*10=50

    abc= abc+b; /// abc = 50+6=56
    abc= abc*10; /// abc = 560

    abc= abc+c; /// abc=564


    int bca=0;
    bca= bca + b; ///bca = 0+6=6
    bca= bca*10; /// bca = 6*10=60

    bca= bca+c; /// bca = 60+4=64
    bca= bca*10; /// bca = 640

    bca= bca+a; /// bca=645

    int cab=0;
    cab= cab + c; ///cab = 0+6=6
    cab= cab*10; /// cab = 6*10=60

    cab= cab+a; /// cab = 60+4=64
    cab= cab*10; /// cab = 640

    cab= cab+b; /// cab=645

    int sum = abc+bca+cab;

    printf("%d\n",sum);


    return 0;

}


