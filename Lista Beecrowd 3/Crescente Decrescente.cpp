#include <stdio.h>
#include <stdlib.h>

int main(){
	int X, Y;
	
	do{
		scanf("%d", &X);
		scanf("%d", &Y);
		
		if(X < Y){
			printf("Crescente\n");
		} else if(X > Y){
			printf("Decrescente\n");
		} else {
			printf("Numeros Iguais\n");
		}
		
	} while (X != Y);
	
	
	return 0;
}
