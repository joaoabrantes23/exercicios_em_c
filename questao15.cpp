/*15) Faça um programa que mostre todos os números pares existentes entre 1 e 50. (0,1)*/

#include <stdio.h>

int main(){
	for(int i = 1; i <= 50; i++){
		if(i % 2 == 0)
			printf("%d\n", i);
	}
	return 0;
}


