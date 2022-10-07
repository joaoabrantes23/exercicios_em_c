/*11) Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas. (0,1)*/

#include <stdio.h>

int main(){
	int alunos, alunas, qtd_alun;
	//entrada
	//ler numero de alunos e alunas
	printf("Digite a quantidade de alunos:\n");
	scanf("%d", &alunos);
	printf("Digite a quantidade de alunas:\n");
	scanf("%d", &alunas);
	
	//processamento
	if(alunas > alunos){
		printf("A turma tem mais alunas!\n");
		
		qtd_alun = alunos + alunas;
		
		printf("O total de alunos eh: %d", qtd_alun);
	}
	else if(alunos > alunas){
		printf("A turma tem mais alunos!");
	}
	else
		printf("A turma tem a mesma quantidade de alunos e alunas!");
	
	return 0;
}
