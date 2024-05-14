#include<stdio.h>

const int mx = 1e6+123;
char s[mx];

int main()
{

    int t;
    scanf("%d", &t) ;

    while(t--){
        scanf("%s",s);

        int sum = 0;
        int len=0;

        while( s[len]!= '\0'){
            sum += (s[len]-'0');
            len++;
        }
            printf("%d\n", sum);
        }
}
