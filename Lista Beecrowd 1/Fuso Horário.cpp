#include <stdio.h>
 
int main() {
    
    int S, T, F, H;
    
    printf("Fuso Hor�rio\n");
    
    printf("\nHor�rio de Sa�da: ");
    scanf("%d", &S);
    printf("\nTempo de Voo: ");
    scanf("%d", &T);
    printf("\nFuso Hor�rio do Destino: ");
    scanf("%d", &F);
    
    H = (S + F + T) % 24;
    
    if (H == 24) {
        H = 0;
        printf("Voc� chegar� as %d horas.\n", H);
    } else if (H > 24) {
        H = H - 24;
        printf("Voc� chegar� as %d horas.\n", H);
    } else if ( H < 24) {
        printf("Voc� chegar� as %d horas.\n", H);
    }
    
    return 0;
}
