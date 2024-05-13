#include<stdio.h>

const int mx=123;

int a[mx][mx];
int b[mx];
int c[mx];

int main(){

    int n,m;
    scanf("%d %d", &n, &m);


    for(int i=0; i<n; i++){
        for(int j=0;  j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<m; i++) scanf("%d",&b[i]);

    for (int i=0; i<n ; i++){
        int sum=0;
        for (int j=0; j<m; j++){
            sum +=(a[i][j]*b[j]);
        }
        c[i]=sum;
    }

    for (int i=0; i<n; i++){
        printf("%d\n", c[i]);

    }


}
