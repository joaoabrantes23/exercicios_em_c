/*22) Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses
dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse
vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em
seguida, o programa deverá apresentar na tela os resultados. (0,1)*/
#include <stdio.h>

int main(){
	int num[10], soma = 0, sub = 0;
	//entrada
	//ler numeros inteiros
	for(int i = 0; i < 10; i++){
		printf("Digite o numero %d:\n", (i+1));
		scanf("%d", &num[i]);
		if(num[i] % 2 == 0){ //condicionar se o numero e par ou impar
			soma += num[i];
		}
		else
			sub -= num[i];
	}
	//saida
	//imprimir soma e substracao dos numeros
	printf("Soma do numeros pares: %d\nSubstracao dos demais numero: %d", soma, sub);
	
	return 0;
}
