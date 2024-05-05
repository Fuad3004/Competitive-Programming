#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int i=1;
    int cnt=0;

    while(i*i <=n){
        if(n%i==0){
            cnt++;
            if (i != n/i){
                cnt++;
            }

        }
        i++;
    }
    printf("%d",cnt);


}
