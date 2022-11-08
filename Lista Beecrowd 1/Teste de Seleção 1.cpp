#include <stdio.h>
 
int main() {
 
    int A, B, C, D;
    
   	printf("Teste de Seleção 1\n"); 
    
    printf("Valor Um: \n");
    scanf("%d", &A);
    printf("Valor Dois: \n");
    scanf("%d", &B);
    printf("Valor Três: \n");
    scanf("%d", &C);
    printf("Valor Quatro: \n");
    scanf("%d", &D);
    
    if ( (B > C) && (D > A) && (C+D > A+B) && (C > 0) && (D > 0) && (A%2 == 0) ) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
    
    return 0;
}
