/*8) Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero
m�ximo (no exemplo, 9). Este n�mero deve ser sempre �mpar. (0,1)*/
#include <stdio.h>
int main(){
	int espaco=0, num_max, inicio=1, fim;
	printf("Digite o numero maximo(impar):\n");
	scanf("%d", &num_max);
	fim = num_max;
	do{
		for(int i = 0;i < espaco; i++){
			printf("  ");
		}
		for(int i = inicio;i <= fim; i++){
			printf("%d ", i);
		}
		printf("\n");
		inicio++;
		fim--;
		espaco++;
	}while(inicio != fim);
	for(int i = 0;i < espaco; i++){
		printf("  ");
	}
	printf("%d", inicio);
	return 0;
}
