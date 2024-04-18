#include<stdio.h>

int main()
{
    
    char a;
    
    scanf(" %c", &a);
    
    
    if (a>= 'A' && a <= 'Z'){
        printf("Capital ");
    }
    
    else if (a >= 'a' && a<='z'){
        printf("small ");
    }
    
    
    else {
        printf("Digit");
    }
    
    
    return 0;
}