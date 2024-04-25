#include<stdio.h>

int main(){
    int tc=1;
    while (1){
        int n;
        scanf("%d", &n);

        if(n==0){
            break;
        }
        printf("Case %d: %d\n", tc++, n);

    }


}
