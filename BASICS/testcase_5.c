#include<stdio.h>

int main(){
    int tc=1;
    while (1){
        int a,b;
        scanf("%d %d", &a, &b);

        if(a>b){
            printf("%d %d",b,a);
        }
        else{
            printf("%d %d",a,b);
        }

        if(a==0 && b==0){
            break;
        }

    }


}
