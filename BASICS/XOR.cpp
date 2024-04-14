#include<stdio.h>

int main(){

    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int xor = a^b^c^d^e;

    printf("XOR= %d", xor);



}
