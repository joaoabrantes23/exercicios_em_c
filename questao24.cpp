/*24) Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma
dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.(0,1)*/
#include <stdio.h>

int main()

{

int Dinheiro=0;

int r1=0,r2=0,r5=0,r10=0,r20=0,r50=0,r100=0;
//entrada
//ler valor inteiro
printf("\n Digite o Valor:\n");
scanf("%d",&Dinheiro);

// Pega a parte inteira do valor
int parteInteira = (int) Dinheiro;

// Loop para converter a parte inteira em cédulas
do
	{
	if(parteInteira>=100)
	{
	parteInteira-=100;
	r100++;
	}
	else if(parteInteira>=50)
	{
	parteInteira-=50;
	r50++;
	}
	else if(parteInteira>=20)
	{
	parteInteira-=20;
	r20++;
	}
	else if(parteInteira>=10)
	{
	parteInteira-=10;
	r10++;
	}
	else if(parteInteira>=5)
	{
	parteInteira-=5;
	r5++;
	}
	else if(parteInteira>=1)
	{
	parteInteira-=1;
	r1++;
	}
	}while(parteInteira!=0);

printf("\n %d nota(s) de 100 Reais.",r100);
printf("\n %d nota(s) de 50 Reais.",r50);
printf("\n %d nota(s) de 20 Reais.",r20);
printf("\n %d nota(s) de 10 Reais.",r10);
printf("\n %d nota(s) de 5 Reais.",r5);
printf("\n %d nota(s) de 1 Reais.",r1);

return 0;
}

