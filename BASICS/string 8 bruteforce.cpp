
#include<stdio.h>

const int mx= 123;
char grid[mx][mx];

int main(){

    int n,m;
    scanf("%d %d", &n, &m);

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            scanf(" %c", & grid[i][j]);
        }
    }


    int i, j;
    scanf("%d %d", &i, &j);
    i--,j--;


                int x,y;
                bool isAns= true;


                x= i-1;
                y=j-1;

                if (!(x>=0 && x<n && y>=0 && grid[i][j]== 'x' )){
                    isAns = false;
                }

                x= i-1;
                y=j;

                if (!(x>=0 && x<n && y>=0 && grid[i][j]== 'x' )){
                    isAns = false;
                }

                x= i-1;
                y=j+1;

                if (!(x>=0 && x<n && y>=0 && grid[i][j]== 'x' )){
                    isAns = false;
                }

                x= i;
                y=j-1;

                if (!(x>=0 && x<n && y>=0 && grid[i][j]== 'x' )){
                    isAns = false;
                }

                x= i;
                y=j+1;

                if (!(x>=0 && x<n && y>=0 && grid[i][j]== 'x' )){
                    isAns = false;
                }

                x= i+1;
                y= j-1;

                if (!(x>=0 && x<n && y>=0 && grid[i][j]== 'x' )){
                    isAns = false;
                }


                x= i+1;
                y=j;

                if (!(x>=0 && x<n && y>=0 && grid[i][j]== 'x' )){
                    isAns = false;
                }

                x= i+1;
                y=j+1;

                if (!(x>=0 && x<n && y>=0 && grid[i][j]== 'x' )){
                    isAns = false;
                }

    if (isAns) printf("Yes\n");
    else printf("no\n");

    return 0;
}
