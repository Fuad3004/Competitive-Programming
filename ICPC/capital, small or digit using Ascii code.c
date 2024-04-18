#include<stdio.h>

int main()
{
    
    char a;
    
    scanf(" %c", &a);
    
    int ascii= a;
    
    if (ascii >= 65 && ascii <= 90){
        printf("Capital ");
    }
    
    else if (ascii >=97 && ascii <=122){
        printf("small ");
    }
    else if (ascii >=48 && ascii<=57){
        printf("Digit");
    }
    
    else {
        printf("Please enter a digit or a letter");
    }
    
    
    return 0;
}