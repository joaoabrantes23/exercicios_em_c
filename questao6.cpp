/*6) Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: n�o use o comando "if"
ou o operador de condi��o "?". (0,1)*/

#include <stdio.h>

int main(){
	float valor, aumento;
	//entrada
	//ler pre�o do produto
	printf("Digite o preco do produto:\n");
	scanf("%f", &valor);
	
	aumento = valor * 0.1;
	//if disfar�ado de while
	while(valor>=100){
		aumento *= 2;
		break;
	}
	//saida
	printf("O valor inflacionado eh: %.2f", aumento + valor);
	
	return 0;
}
