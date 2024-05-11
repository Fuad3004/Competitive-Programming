#include<stdio.h>

const int mx=1000123;
int a[mx];



int main()
{
    int n;
    scanf ("%d", &n);

    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i=1,j=n; i<j ; i++,j--){
        int tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
    }

    for(int i=1; i<=n; i++) printf("%d ",a[i]);
}
