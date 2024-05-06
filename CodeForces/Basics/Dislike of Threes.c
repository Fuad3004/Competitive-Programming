#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--) {
        int k;
        scanf("%d", &k);

        int cnt=0;
        int i=1;

        while (1){
            if (i % 10 != 3 && i % 3 != 0){
                cnt++;
                if(cnt == k){
                    printf("%d\n",i);
                    break;
                }

            }

            i++;

        }
    }

}
