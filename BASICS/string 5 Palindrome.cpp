
#include<stdio.h>

int main(){

    char s[123], temp[123];

    scanf("%s",s);


    int len=0;
    while(s[len]!=0){
        temp[len]=s[len];
        len++;
    }

    for(int i=0, j=len-1; i<j; i++, j--){
        char tmpchar=temp[i];
        temp[i]=temp[j];
        temp[j]=tmpchar;
    }
    bool isEqual=true;

    for (int i=0; i<len; i++){
        if(s[i]!=temp[i]){
            isEqual= false;
            break;
        }
    }
    printf("s   : %s\n",s);
    printf("temp: %s\n",temp);


    if(isEqual){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
}
