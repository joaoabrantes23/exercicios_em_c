/*25) Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos
valores � igual a m�dia dos mesmos. (0,1)*/
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
