/*23) Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazene
em um vetor, depois o programa dever� apresentar na tela os n�meros na ordem inversa do
qual foram digitados. (0,1)*/
#include <stdio.h>

int main(){
	int num[6];
	//entrada
	//ler numeros inteiros
	for(int i = 0; i < 6; i++){
		printf("Digite o numero %d:\n", (i + 1));
		scanf("%d", &num[i]);
	}
	//imprimir em ordem invertida
	for(int i = 5; i >= 0; i--){
		printf("%d\t", num[i]);
	}
	
	return 0;
}
