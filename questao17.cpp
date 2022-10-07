/*17) O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares
consecutivos. Por exemplo, 1²=1, 2²=1+3, 3²=1+3+5, 4²=1+3+5+7, etc. Dado um número n,
calcule seu quadrado usando a soma de ímpares ao invés de produto. (0,1)*/

#include <stdio.h>
int main(){
	int num, i, quad=0;
	//entrada
	//ler numero natural
	printf("Digite um numero natural:\n");
	scanf("%d", &num);
	
	//processamento
	if(num >= 0){
		for(i = 1; i < num * 2; i = i + 2){
			quad = quad  + i; //somar numeros impares
		}
		printf("O quadrado de %d eh: %d", num, quad); //saida
	}
	else
		printf("Numero nao natural");
	
	return 0;
}
