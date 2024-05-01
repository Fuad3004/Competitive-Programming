#include <stdio.h>

int main() {
    while(1){
        int n, m;
        scanf("%d %d", &n, &m);
    
        if(n==0 && m== 0) break;
        
        for (int j=1; j <= m; j++) printf("#");
        printf("\n");
        
        for (int i=2; i<=n-1; i++) {
            
            for (int j=1; j <= m; j++) {
                if (j==1 || j==m) printf("#");
                else printf(".");
            
            
            }
            printf("\n");
        }
    
        for (int j=1; j <= m; j++) printf("#");
        printf("\n\n");
        
    }
       
}