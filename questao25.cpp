/*25) Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos
valores é igual a média dos mesmos. (0,1)*/
#include <stdio.h>
int main(){
	int num[10], soma, media;
	for(int i = 0; i < 10; i++){
		printf("Digite o numero %d:\n", (i + 1));
		scanf("%d", &num[i]);
		soma += num[i];
	}
		media = soma / 10;
	printf("A media eh: %d", media);
	for(int i = 0; i < 10; i++){
		if(num[i] == media){
			printf("\nO numero %d eh igual a media", (i + 1));
		}
	}
	
	return 0;
}
