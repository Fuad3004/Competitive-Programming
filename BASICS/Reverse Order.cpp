#include<stdio.h>

const int mx=1000123;
int a[mx], b[mx];



int main()
{
    int n;
    scanf ("%d", &n);

    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i=1,j=n; i<=n ; i++,j--){
        b[j]=a[i];
    }

    for(int i=1; i<=n; i++) printf("%d ",b[i]);
}
