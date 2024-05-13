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

    int x;
    scanf("%d", &x);

    bool isExists= false;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(a[i][j]==x){
                isExists= true;
                break;
            }
        }
        if (isExists) break; // bahirer loop er jonno
    }

    if(isExists) printf("will not take number\n");
    else printf("will take number\n");

}
