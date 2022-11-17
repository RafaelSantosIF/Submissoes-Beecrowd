#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, R;
	scanf("%d", &N);
	
	for(int i=1; i<=10; i++){
		R = N*i;
		printf("%d x %d = %d\n", i, N, R);
	}
	
	return 0;
}
