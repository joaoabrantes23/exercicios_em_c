/*3) Escreva um programa que leia um número na base decimal e em seguida imprima essemesmo número nas bases octal e hexadecimal. (0,1)*/

#include <stdio.h>
int main(){
	int decimal, dec, hexa, shexa[16], i = 0, resultado;
	int deci, octal, soctal[16], o;
	//entrada
	//armazenar numero em decimal
	printf("Digite um numero decimal:\n");
	scanf("%d", &dec);
	
	//processamento
	//converter para hexadecimal
	decimal = dec;
	deci = dec;
	do{
		resultado = dec / 16;
		shexa[i] = dec % 16;
		i++;
		dec = resultado;
	}while(resultado != 0);
	
	//converter para octal
	do{
		resultado = deci / 8;
		soctal[o] = deci % 8;
		o++;
		deci = resultado;
	}while(resultado != 0);
	
	//saida
	//imprimir o hexadecimal
	printf("%d na base hexadecimal eh: ", decimal);
    for(i--; i>=0; i--){
        if(shexa[i] == 10)
            printf("A");
       else if(shexa[i] == 11)
            printf("B");
        else if(shexa[i] == 12)
            printf("C");
        else if(shexa[i] == 13)
            printf("D");
        else if(shexa[i] == 14)
            printf("E");
        else if(shexa[i] == 15)
            printf("F");
        else
            printf("%d", shexa[i]);
    }
	//imprimir o octal
	printf("\n%d na base octal eh: ", decimal);
	for(o--; o>=0; o--){
		printf("%d", soctal[o]);
	}
	return 0;
}
