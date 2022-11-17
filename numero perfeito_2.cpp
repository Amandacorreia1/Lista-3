#include <stdio.h>

int main(){
	
	int N, i, X=0;
	
	scanf("%d", &N);
	
	for(i=1; i<N; i = i+1){
		if(N%i==0){
			X = X + i;
		}
		
	}
	
	if(X==N){
		printf("%d eh perfeito", N);
	}else{
		printf("%d nao eh perfeito", N);
	}
	return 0;
}
