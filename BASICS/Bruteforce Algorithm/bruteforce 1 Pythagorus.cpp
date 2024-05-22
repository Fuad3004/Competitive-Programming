#include<stdio.h>

const int mx = 2e8+12;

bool isPerfectsquare[mx];


int main(){
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        isPerfectsquare[i*i]=1;
    }

    int cnt = 0;
    for(int a =1; a<=n; a++){
        for(int b=a; b<=n; b++){
            int v= (a*a)+(b*b);

            if(isPerfectsquare[v]){
                cnt++;
            }
        }
    }

    printf("%d",cnt);
}
