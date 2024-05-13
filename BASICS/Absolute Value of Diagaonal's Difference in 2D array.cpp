#include<stdio.h>

const int mx=123;
int a[mx][mx];

int main(){

    int n; //square Matrics that is why only one input
    scanf("%d", &n);


    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    int primaryDiagonal=0;
    int secondayDiagonal=0;

    for(int i=0; i<n; i++){
        primaryDiagonal+=a[i][i];
    }


    for (int i=0,j=n-1; i<n; i++,j--){
        secondayDiagonal+=a[i][j];
    }

    int diff= primaryDiagonal-secondayDiagonal;

    if (diff<0) diff*=-1;

    printf("%d\n",diff);

}
