#include <stdio.h>
 
int main() {
    
    int str, end, hr;
    
    printf("Tempo de Jogo\n");
    
    printf("Horário de Início");
    scanf("%d", &str);
    printf("Horário de Término");
    scanf("%d", &end);
    
    if (str == end) {
        printf("O JOGO DUROU 24 HORAS(S)\n");
    } else if (str < end) {
        hr = (end - str);
        printf("O JOGO DUROU %d HORAS(S)\n", hr);
    } else if (str > end) {
        hr = (24 - str) + end;
        printf("O JOGO DUROU %d HORAS(S)\n", hr);
    }
    
    return 0;
}
