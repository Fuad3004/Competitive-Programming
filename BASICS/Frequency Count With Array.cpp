
#include<stdio.h>

const int mx=1000123;
int freq[mx];

int a[100123];

int main()
{
    int n;
    scanf ("%d", &n);

    for (int i=1; i<=n; i++) scanf("%d", &a[i]);

    for (int i=1; i<=n; i++){
        freq[a[i]]++;

    }

    int q;
    scanf ("%d", &q);

    while (q--){
        int val;
        scanf("%d",&val);

        printf("%d's Frequency is %d\n",val, freq[val]);
    }
}
