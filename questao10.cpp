/*10) Faça um programa que receba um número inteiro e que verifique se esse número é par
ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se
é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor
que 50. (0,1)*/

#include <stdio.h>

int main(){
	int num;
	//entrada
	//ler numero inteiro
	printf("Digite um numero inteiro:\n");
	scanf("%d", &num);
	
	//processamento
	if(num % 2 == 0){ //se for par
		printf("O numero eh par!\n");
		if(num >= 15) //maior ou menor que 15
			printf("ele eh maior que 15");
		else
			printf("ele eh menos que 15");	
	}
	else{ //se for impar
		printf("O numero eh impar!\n");
		if(num >= 50) //maior ou menor que 50
			printf("ele eh maior que 50");
		else
			printf("ele eh menos que 50");
}
	return 0;
}
