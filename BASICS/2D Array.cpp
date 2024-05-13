#include<stdio.h>


const int mx=123;

int a[mx][mx];

int main(){

    int n,m;
    scanf("%d %d", &n, &m);

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }


    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("(%d,%d) %d  ",i,j,a[i][j]);
        }
        printf("\n");
    }

}
