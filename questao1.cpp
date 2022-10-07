/*	1) Faça um programa que solicite 2 números e informe: a soma dos números, o produto do
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo
do primeiro número. (0,1)*/
#include <stdio.h>
#include <math.h>
int main()
{
	int modulo, quad1, quad2, produto, soma, numero[2];
	float seno, raiz;
	//entrada
	//armazenar dois numeros
	for(int i = 0; i < 2; i++){
		printf("Digite um numero inteiro:\n");
		scanf("%d", &numero[i]);
	}
	//processamento
	soma = numero[0] + numero[1]; //a soma dos numeros
	
	quad1 = numero[0] * numero[0]; //quadrado do primeiro numero
	
	quad2 = numero[1] * numero[1]; //quadrado do segundo numero
	
	produto = numero[0] * quad2; //produto do primeiro pelo quadrado do segundo
	
	raiz = sqrt (quad1 + quad2); //raiz quadrada da soma dos quadrados
	
	seno = sin(numero[0] - numero[1]); //seno da diferença do primeiro pelo segundo
	
	modulo = fabs(numero[0]); //modulo do primeiro numero
	
	//saida
	//imprimir os calculos feitos acima
	printf("A soma dos numero eh: %d\nO produto do quadrado pelo primero eh: %d", soma, produto); 
	printf("\nO quadrado do primero numero eh: %d\nA raiz da soma dos quadrados eh: %.2f", quad1, raiz);
	printf("\nO seno da diferença entre eles eh: %.2f\nO modulo do primeiro numero eh: %d", seno, modulo); 
	
	return 0;
}
