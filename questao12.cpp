/*12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes. (0,1)*/

#include <stdio.h>

int main(){
	int pedro, joana, ismael;
	//entrada 
	//ler idades
	printf("Digite a idade de Pedro:\n");
	scanf("%d", &pedro);
	printf("Digite a idade de Joana:\n");
	scanf("%d", &joana);
	printf("Digite a idade de Ismael:\n");
	scanf("%d", &ismael);
	
	//processamento
	//comparar idades
	if(pedro > joana){
		if(pedro > ismael){
			printf("Pedro eh o mais velho");
		}
		else{
			if(ismael > joana){
				printf("Ismael eh o mais velho");
			}
			else{
				printf("Joana eh a mais velha");
				}
			}}
	else
		if(joana > ismael){
			printf("Joana eh a mais velha");
		}
		else if(ismael > joana)
			printf("Ismael eh o mais velho");		
	
	if(pedro == joana && joana == ismael)
		printf("eles tem a mesma idade");
	
	return 0;
}


