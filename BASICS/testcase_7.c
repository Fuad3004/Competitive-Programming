#include<stdio.h>

int main(){

    int n;
    int min = 1000000+123;
    int max = -(1000000+123);
    long long sum=0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        int a;
        scanf("%d", &a);

        if (a<min){
            min=a;
        }
        if (a>max){
            max=a;
        }
        sum+=a;
    }
    printf("%d %d %lld\n",min, max,sum);



}
