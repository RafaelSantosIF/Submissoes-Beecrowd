#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, X, R=0;
	scanf("%d", &N);
	
	while(N > 0){
		scanf("%d", &X);
		for(int i=1; i<X; i++){
			if(X%i == 0){
				R += i;	
			}
		}
		if(R == X){
			printf("%d eh perfeito\n", X);
		} else {
			printf("%d nao eh perfeito\n", X);
		}
		
		N -= 1;
		R = 0;	
	}
	
	
	return 0;
}
