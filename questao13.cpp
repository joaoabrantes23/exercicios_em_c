/*13) Dado um número positivo, crie um programa que escreva todos os números ímpares
menores e/ou iguais a esse número e maiores ou igual a um. (0,1)*/

#include <stdio.h>

int main(){
	int numero;
	//entrada
	//ler numero inteiro
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	if(numero < 0){ //condicionar se é positivo
		printf("Digite um numero positivo");
	}
	else
		for(int i = 1; i <= numero; i++) //ler um número de cada vez
			if(i & 2 != 0)
				printf("%d\n", i); //imprimir numeros impares.
	
	return 0;
}


