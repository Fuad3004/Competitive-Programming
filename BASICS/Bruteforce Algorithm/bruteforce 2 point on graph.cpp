
#include<stdio.h>
#include<math.h>

const int mx = 123;
int x[mx], y[mx];

int main(){
    int n;
    scanf("%d",&n);

    for (int i=0; i<n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }

    double maxDistance = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x1 = x[i];
            int y1 = y[i];

            int x2 = x[j];
            int y2 = y[j];

            double dist = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));

            if (dist> maxDistance){
                maxDistance=dist;
            }

        }
    }
    printf("%.10lf\n", maxDistance);
}
