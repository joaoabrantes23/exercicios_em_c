/*13) Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares
menores e/ou iguais a esse n�mero e maiores ou igual a um. (0,1)*/

#include <stdio.h>

int main(){
	int numero;
	//entrada
	//ler numero inteiro
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	if(numero < 0){ //condicionar se � positivo
		printf("Digite um numero positivo");
	}
	else
		for(int i = 1; i <= numero; i++) //ler um n�mero de cada vez
			if(i & 2 != 0)
				printf("%d\n", i); //imprimir numeros impares.
	
	return 0;
}


