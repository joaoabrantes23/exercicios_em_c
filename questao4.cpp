/*4) Fa�a um programa que l� dois valores e imprime: (0,1)
	a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro at� o segundo;
	b) se o primeiro valor for menor que o segundo a lista de valores do segundo at� o primeiroem ordem decrescente;
	c) se ambos forem iguais a mensagem "valores iguais".*/
	
#include <stdio.h>
int main(){
	float vlr[2];
	//entrada
	//pegar dois valores
	printf("Digite dois numeros:\n");
	scanf("%f %f", &vlr[0], &vlr[1]);
	
	//processamento
	//condi��o
	if(vlr[0] < vlr[1]){
		printf("1: %.2f\n2: %.2f", vlr[0], vlr[1]);
	}
	else if(vlr[0] > vlr[1]){
		printf("2: %.2f\n1: %.2f", vlr[0], vlr[1]);
	}
	else
		printf("Valores iguais");
		
	return 0;
}
