#include<stdio.h>

int  main()
{

    int T;
    scanf("%d", &T);

    for (int tc=1; tc <= T; tc++){

        int a,b;
        scanf("%d %d", &a, &b);

        int sum = a+b;

        printf("Case %d : %d\n", tc, sum);
    }

}
