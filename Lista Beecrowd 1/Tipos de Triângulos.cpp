#include <stdio.h>
#include <math.h>

int main() {
    
    double A, B, C;
    double Xa, Yb, Zc;
    
    printf("Tipos de Triângulos\n");
    
    printf("\nLado A: ");
    scanf("%lf", &A);
    printf("\nLado B: ");
    scanf("%lf", &B);
    printf("\nLado C: ");
    scanf("%lf", &C);
    
    Xa = A;
    Yb = B;
    Zc = C;
    
    if ((A <= B) && (A <= C)) {
        if (B <= C){
            A = Zc;
            B = Yb;
            C = Xa;
        } else if (C < B){
            A = Yb;
            B = Zc;
            C = Xa;
        }
    } else if ((B < A) && (B <= C)) {
        if (A <= C){
            A = Zc;
            B = Xa;
            C = Yb;
        } else if (C < A){
            A = Xa;
            B = Zc;
            C = Yb;
        } 
    } else if ((C < A) && (C < B)) {
        if (A <= B){
            A = Yb;
            B = Xa;
            C = Zc;
        } else if (B < A){
            A = Xa;
            B = Yb;
            C = Zc;
        } 
    }
    
       if (A >= (B + C)) {
           printf("NAO FORMA TRIANGULO\n");
       } else if ( !(A >= (B + C)) ) {
           if (pow(A, 2) == (pow(B, 2) + pow(C, 2))) {
                printf("TRIANGULO RETANGULO\n");
            } else if (pow(A, 2) > (pow(B, 2) + pow(C, 2))) {
                printf("TRIANGULO OBTUSANGULO\n");
            } else if (pow(A, 2) < (pow(B, 2) + pow(C, 2))) {
                printf("TRIANGULO ACUTANGULO\n");
            }
            
            if ((A == B) && (B == C)) {
                printf("TRIANGULO EQUILATERO\n");      
            } else if ( ((A == B) && (B != C)) || ((B == C) && (C != A)) || ((A == C) && (C != B)) ) {
                printf("TRIANGULO ISOSCELES\n"); 
            } 
           
       } 
    
    return 0;
}
