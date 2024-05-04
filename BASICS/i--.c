#include<stdio.h>


int main()
{

    int cnt = 0;

    for (int i=100; i>=1; i--){
        printf("%d ",i);
        cnt++;

        if (cnt == 10){
            printf("\n");
            cnt =0; // make the counter 0 again for counting
        }
    }
}
