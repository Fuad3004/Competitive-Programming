#include <stdio.h>

int main() {
    int x,y;
    float P;

    
    scanf("%d %d", &x, &y);

    
    

    
    if (x ==1) {
        P= 4.00*y;
        
    } 
    
    else if (x==2){
    	P=4.50*y;
    }  
    
    else if (x==3){
    	P=5.00*y;
    }
    
    else if (x==4){
    	P= 2.00*y;
    }
    
    else if (x==5){
    	P= 1.50*y;
    }
        printf("Total: R$ %.2f\n", P);
    

    return 0;
}