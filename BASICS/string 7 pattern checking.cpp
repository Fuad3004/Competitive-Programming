//sub segment

//por por 3 ta number nile sub...1 5 6 3 2 theke 5 6 3 ekta sub array

//serially but contiguous na tahole ekta sub sequence

//serially and contiguous hole sub sequence o sub segment/ sub array

//asdhfg theke dhf sub segment and sub sequence
//but a d f hole sub sequence (just serial)
// sub serial hole (serial + continuous)



//distinct ....1 2 3 4 5..eta unique no repeat


#include<stdio.h>

const int mx= 1e5+123;
char s[mx];

int main(){

    int t;
    scanf("%d", &t);

    while (t--){
        scanf("%s",s);

        int len=0;
        while (s[len] != 0){
            len++;
        }
        bool isGood=false;
        for (int i=2; i < len; i++) {
        char s1= s[i-2];
        char s2= s[i-1];
        char s3= s[i];

        if (s1 == '0' && s2=='1' && s3=='0'){
            isGood=true;
            break;
        }

        else if (s1=='1' && s2 == '0' && s3 =='1'){
            isGood= true;
            break;
        }


        }
        (isGood) ? printf("Good\n") : printf("bad\n");
    }


}


















