
#include<stdio.h>

const int mx= 1e5+123;
char s[mx];

int main(){

    int l,r ;
    scanf("%d %d %s", &l, &r, s);

    int len=0;
    while(s[len]!=0){
        len++;
    }

    for (int i=l-1, j=r-1; i<j; i++,j-- ){
        char tmp = s[i];
        s[i]=s[j];
        s[j]= tmp;
    }
    printf("%s",s);

    return 0;
}
