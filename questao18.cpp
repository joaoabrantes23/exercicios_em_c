/*18) Faça um programa C que leia dez números que representam as notas de dez alunos de
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
que as notas são informadas corretamente no intervalo de 1 a 10. (0,1)*/
#include <stdio.h>

#define QTD 5

int main(){
	int i;
	float menor = 10, maior = 0, media = 0, soma = 0, nota[QTD];
	//entrada
	//ler nota dos 10 alunos
	for(i = 0; i < QTD; i++){
		printf("Digite a nota do aluno %d:\n", (i + 1));
		scanf("%f", &nota[i]);
		if(nota[i] > 10.00)
			return -1;
		//processamento
		//soma das notas
		soma = nota[i] + soma;
		//media
		media = soma / QTD;
		//maior nota
		if(maior <= nota[i]){
			maior = nota[i];
		}
		//menor nota
		if(menor >= nota[i]){
			menor = nota[i];
		}			
	}
	
	//saida
	printf("A soma das notas eh: %.2f\nA media das notas eh: %.2f\nA maior nota eh: %.2f\nA menor nota eh: %.2f", soma, media, maior, menor);
	
	return 0;
}
