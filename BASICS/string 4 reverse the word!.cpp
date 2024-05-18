#include<stdio.h>

int main()
{

    char s[123];

    scanf("%s",s);

    int len=0;
    while(s[len]!=0){  //to count the given string length
        len++;
    }

    for (int i=0,j=len-1; i<j; i++,j--){

        char tmp=s[i];
        s[i]=s[j];
        s[j]=tmp;
    }
    printf("%s\n",s);
    return 0;
}
