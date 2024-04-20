
/// arragne the number in serial
#include<stdio.h>

int main()
{
    
    long long t, a, k;
    
    scanf(" %lld %lld %lld", &t, &a, &k);
    
    
    if (k<=t){
        t=t-k;
        printf("Takahashi has %lld\nAoki has %lld", t, a);
    }

    else if (k< (t+a)){
        t=0;
        a=(t+a)-k;
        printf("Takahashi has %lld\nAoki has %lld",t,a );
    }
    
    else {
        t=0;
        a=0;
        printf("Takahashi has %lld\nAoki has %lld", t, a);
    }
    
    return 0;
}