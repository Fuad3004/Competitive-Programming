#include<stdio.h>

int  main()
{

    int T;
    scanf("%d", &T);

    for (int tc=1; tc <= T; tc++){

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


