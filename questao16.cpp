/*16) Dados um número natural n, exiba seu fatorial n!. (0,1)*/

#include <stdio.h>

int main(){
	int num, fatorial;
	//entrada
	//ler numero natural]
	printf("Digite um numero natural:\n");
	scanf("%d", &num);
	
	if(num >= 0){
		for(fatorial = 1; num > 1; num--)
		fatorial = fatorial * num; //calculo fatorial
		printf("O fatorial desse numero eh: %d", fatorial); //saida
	}
	else
		printf("numero nao natural"); //numero invalido
	
	return 0;
}
