#include<stdio.h>
#include<stdbool.h>
int main()
{

    int n;

    scanf("%d", &n);

    bool isperfectsquare = false;

    for (int i=1; i*i<=n; i++){

        if (i*i==n){
        printf("Perfect Square Number of %d\n",i);
        isperfectsquare= true;
        break;
        }

    }
    if (!isperfectsquare) printf("Not a Perfect Square Number");

}
