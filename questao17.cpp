/*17) O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares
consecutivos. Por exemplo, 1�=1, 2�=1+3, 3�=1+3+5, 4�=1+3+5+7, etc. Dado um n�mero n,
calcule seu quadrado usando a soma de �mpares ao inv�s de produto. (0,1)*/

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
