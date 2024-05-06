#include<stdio.h>

int main(){
    int a[100];

    int n;
    scanf("%d",&n);



    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++){
        printf("a[%d]: %d\n", i, a[i]);
    }

}
