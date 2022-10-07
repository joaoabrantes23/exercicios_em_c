/*19) Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo
inteiro. (0,1)*/

#include <stdio.h>

int main(){
	
	int num[5], i, maior = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite o numero %d:\n", (i + 1));
		scanf("%d", &num[i]);
		
		if(maior <= num[i]){
			maior = num[i];
		}
	}
	printf("O maior numero eh: %d", maior);
	
	return 0;
}
