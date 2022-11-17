#include <stdio.h>
#include <stdlib.h>

int main(){
	int S;
	scanf("%d", &S);
	
	while(S != 2002){
		printf("Senha Invalida\n");
		scanf("%d", &S);	
	}
	
	printf("Acesso Permitido\n");
	
	return 0;
}
