/*6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if"
ou o operador de condição "?". (0,1)*/

#include <stdio.h>

int main(){
	float valor, aumento;
	//entrada
	//ler preço do produto
	printf("Digite o preco do produto:\n");
	scanf("%f", &valor);
	
	aumento = valor * 0.1;
	//if disfarçado de while
	while(valor>=100){
		aumento *= 2;
		break;
	}
	//saida
	printf("O valor inflacionado eh: %.2f", aumento + valor);
	
	return 0;
}
