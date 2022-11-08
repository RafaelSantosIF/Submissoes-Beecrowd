#include <stdio.h>
 
int main() {
 
    float N1, N2, N3, N4, EX, MED, MEDF;
    
    printf("MÉDIA 3: \n");
    
    printf("\nNota 1: ");
    scanf("%f", &N1);
    printf("\nNota 2: ");
    scanf("%f", &N2);
    printf("\nNota 3: ");
    scanf("%f", &N3);
    printf("\nNota 4: ");
    scanf("%f", &N4);
    
    MED = ( (N1 * 2) + (N2 * 3) + (N3 * 4) + (N4) ) / 10;
    
    if (MED >= 7){
        printf("Media: %.1f\n", MED);
        printf("Aluno aprovado.\n");
    } else if ( (MED <= 6.9) && (MED >= 5) ) {
        printf("Media: %.1f\n", MED);
        printf("Aluno em exame.\n");
        
        scanf("%f", &EX);
        printf("Nota do exame: %.1f\n", EX);
        
        MEDF = (MED + EX) / 2;
        
        if (MEDF >= 5) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", MEDF);
        } else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", MEDF);
        }
    } else if (MED < 5) {
        printf("Media: %.1f\n", MED);
        printf("Aluno reprovado.\n");
    }
    
    return 0;
}
