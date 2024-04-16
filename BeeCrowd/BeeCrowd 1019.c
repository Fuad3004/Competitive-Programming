#include<stdio.h>


int main(){

    int N;

    scanf("%d", &N);

    int h= N/3600;

    int x = N%3600;

    int m = x/60;

    int s = x%60;


    printf("%d:%d:%d\n", h, m, s);




}
