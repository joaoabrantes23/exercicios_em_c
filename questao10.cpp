/*10) Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero � par
ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se
� ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor
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
