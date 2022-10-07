/*2) Crie um programa que receba o valor da temperatura em Fahrenheit e imprime ocorrespondente em Celsius e em Kelvin: (0,1)*/

#include <stdio.h>

int main(){
	float fah, cels, K;
	
	//entrada
	//armazenar a temperatura em fahrenheit
	printf("Digite a temperatura em fahrenheit:\n");
	scanf("%f", &fah);
	
	//processamento
	cels = (fah - 32) / 1.8; //conversao fah -> celsius
	K = cels + 273.15; //conversao celsius -> kelvin
	
	//saida
	//imprimir valores em celsius e kelvins
	printf("A temperatura em celsius eh: %.2f", cels);
	printf("\nA temperatura em kelvins eh: %.2f", K);
	
	return 0;
}
