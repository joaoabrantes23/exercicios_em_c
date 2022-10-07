/*20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.(0,1)*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int control = 0;
	char nome[2][256], buffer1, buffer2;

		printf("Digite um nome:\n");
		gets(nome[0]);
		printf("Digite outro nome:\n");
		gets(nome[1]);
	for(int i = 0; i < 256; i++){
		buffer1 = nome[0][i];
		buffer2 = nome[1][i];	
		if(tolower(buffer1) < tolower(buffer2)){
			control = 0;
			break;
		}
		else if(tolower(buffer1) > tolower(buffer2)){
			control = 1;
			break;
		}
	}
	if(control == 0){
		printf("1 - %s\n2 - %s", nome[0], nome[1]);
	}
	else
		printf("1 - %s\n2 - %s", nome[1], nome[0]);
		
	return 0;
}
