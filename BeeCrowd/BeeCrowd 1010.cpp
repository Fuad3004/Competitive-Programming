#include<stdio.h>

int main(){
    int p1, u1;
    float pr1;
    scanf("%d%d%f",&p1,&u1,&pr1);

    int p2, u2;
    float pr2;
    scanf("%d%d%f",&p2,&u2,&pr2);

    float pay=((u1*pr1)+(u2*pr2));

    printf("VALOR A PAGAR: R$ %.2f\n", pay);

    return 0;

}
