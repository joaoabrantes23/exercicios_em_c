/*5) Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)para os c�digos de 0 a 127. (0,1)*/

#include <stdio.h>

int main(){
	int i;
	
	printf("TABELA ASCII\n");
	for(i=32; i<255; i++){
		printf("%d = %x = %c\n", i, i, i);
	}
	return 0;
}
