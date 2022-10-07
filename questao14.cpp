/*14) A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc
é a temperatura em Celsius e Tf em Fahrenheit. Faça um programa C que calcule e que
imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de
1 em 1. (0,1)*/

#include <stdio.h>

int main(){
	int celsius, fah=40;
	
	//processamento
	celsius = (fah - 32) * 5/9;
	
	//saida
	//loop fah 40 - 75
	for(fah=40; fah<=75;){
		printf("Temperatura em Fahrenheit: %d - Temperatura em Celsius: %d\n", fah, celsius);
		fah = fah + 1;
		celsius = (fah - 32) * 5/9;
	}

	return 0;
}
