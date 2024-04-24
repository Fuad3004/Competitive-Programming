#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    double d, root1, root2;

    
    scanf("%lf %lf %lf", &A, &B, &C);

    
    d = B * B - 4 * A * C;

    
    if (A == 0 || d < 0) {
        printf("Impossivel calcular\n");
        
    } else {
        
        root1 = (-B + sqrt(d)) / (2 * A);
        root2 = (-B - sqrt(d)) / (2 * A);

        
        printf("R1 = %.5lf\nR2 = %.5lf\n", root1, root2);
    }

    return 0;
}