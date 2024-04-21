#include<stdio.h>

int main(){

    int a;

    scanf("%d", &a);

    int year = a/365;
    a%=365;

    int month = a/30;
    a%=30;

    int days= a;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", year, month, days);

    return 0;


}
