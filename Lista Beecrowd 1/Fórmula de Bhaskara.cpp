#include <stdio.h>
#include <math.h>

int main() {
 
    double A, B, C, D, R1, R2;
 	
	 printf("Fórmula de Bhaskara\n");
	
	printf("\nValor de A: ");
    scanf("%lf", &A);
    printf("\nValor de B: ");
    scanf("%lf", &B);
    printf("\nValor de C: ");
    scanf("%lf", &C);
    
    D = pow(B, 2) - 4 * A * C;
    
    if ( (D < 0) || (A == 0) ) {
        printf("Impossivel calcular\n");
    } else {
        R1 = ((-1 * B) + sqrt(D)) / (2 * A);
        R2 = ((-1 * B) - sqrt(D)) / (2 * A);
        
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
 
    return 0;
}
