
/// arragne the number in serial
#include<stdio.h>

int main() {
    
    int a,b,c,d;
    
    scanf(" %d %d %d %d", &a, &b, &c, &d);
    int x= c+d;
    int y= a+b;
    
    
    if (b>c && d>a && x>y && c>0 && d>0 && a%2 ==0){
        printf("Valores aceitos\n");
    }

    else {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
