
//only small letter
#include<stdio.h>

const int mx = 1e7+123;
char s[mx];
int cnt[30];

int main()
{
    scanf("%s",s);

    int i=0;
    while (s[i] != '\0'){

        int index = s[i]-'a';
        cnt[index]++;
        i++;
    }

    for (int i=0; i<26; i++){
        if(cnt[i]>0){
            char c='a'+i;
            printf("%c : %d\n", c, cnt[i]);
        }
    }

}
