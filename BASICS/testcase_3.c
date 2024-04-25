#include<stdio.h>

int  main()
{

    int T;
    scanf("%d", &T);

    while(T--){

        int a;
        scanf("%d", &a);

        if (a%2==0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }

    }

}


