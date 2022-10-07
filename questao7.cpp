/*7) Implemente um programa que solicita as notas das duas provas feitas por cada um dos
alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a
média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para
a nota da primeira prova. (0,1)*/

#include <stdio.h>

int main(){
	int nota1=0, nota2=0;
	//condiçao de parada "50"
	while(nota1!=50){
		printf("Digite as duas notas:\n");
		scanf("%d %d", &nota1, &nota2);
		if(nota1==50){ //O programa deve parar imediatamente após ter sido digitado o valor 50
			break;
		}
		if((nota1 >= 0) && (nota1 <= 10) && (nota2 >= 0) && (nota2 <= 10)){ //as notas têm de estar no intervalo [0 10]
			printf("A media eh: %d\n\n", (nota1+nota2)/2); //imprime media 
		}else
			printf("Nota invalida\n\n");
	}
	return 0;
}
