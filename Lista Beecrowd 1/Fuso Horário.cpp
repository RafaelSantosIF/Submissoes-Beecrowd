#include <stdio.h>
 
int main() {
    
    int S, T, F, H;
    
    printf("Fuso Horário\n");
    
    printf("\nHorário de Saída: ");
    scanf("%d", &S);
    printf("\nTempo de Voo: ");
    scanf("%d", &T);
    printf("\nFuso Horário do Destino: ");
    scanf("%d", &F);
    
    H = (S + F + T) % 24;
    
    if (H == 24) {
        H = 0;
        printf("Você chegará as %d horas.\n", H);
    } else if (H > 24) {
        H = H - 24;
        printf("Você chegará as %d horas.\n", H);
    } else if ( H < 24) {
        printf("Você chegará as %d horas.\n", H);
    }
    
    return 0;
}
