/*9) Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA =(N1 + N2*2 + N3*3 + ME)/7.
A partir da média, informar o conceito de acordo com a tabela:(0,1)
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E*/
#include <stdio.h>
int main(){
	float media, nota1, nota2, nota3, mediame;
	printf("Digite 3 notas e a media ME:\n");
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &mediame);
	media = (nota1 + nota2*2 + nota3*3 + mediame)/7;
	
	if(media >= 9){
		printf("A");
	}
	else if(media >= 7.5){
		printf("B");
		}
		else if(media >= 6){
			printf("C");
			}
			else if(media >= 4){
				printf("D");
				}
				else
					printf("E");
	return 0;
}
