#include<stdio.h>

int main()
{
    
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a>b && b>c){
        printf("A is Greater");
    }
    
    else if (b>a && a>c){
        printf("B is Greater");
    }
    else {
        printf("C is greater");
    }
    
    return 0;
}