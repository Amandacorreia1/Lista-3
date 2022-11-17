#include <stdio.h>
 
int main() {
	
	int N, X, C, num, soma=0;
	
	scanf("%d", &N);
	
	for(int C=0; C<N; C++){
		scanf("%d", &X);
		soma=0;
		  for(int num=1; num<X; num++){
			 if(X%num==0){
				soma+=num;
			}
		}
		if(soma!=X){
			printf("%d nao eh perfeito\n", X);
		}else{
			printf("%d eh perfeito\n", X);
		}
	}
 
    return 0;
}
