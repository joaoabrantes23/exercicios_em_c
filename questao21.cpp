/*21) Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses
números em pares e ímpares e os armazenem em dois outros vetores separando pares e
ímpares, exibindo os resultados na tela. (0,1)*/

#include <stdio.h>

int main() {
    int num, i_par = 0, i_impar = 0, pares[12], impares[12];
    //entrada
    //ler numeros
    for(int i = 0; i < 12; i++){
        printf("Digite o numero %d: ", (i+1));
        scanf("%d", &num);
        if((num % 2) == 0) { //condicionar se numero e par ou impar
            pares[i_par] = num;
            i_par++;
        }
        else{
            impares[i_impar] = num;
            i_impar++;
        }
    }
    //saida
    //imprimir numeros
    printf("Pares: \t");
    for(int i = 0; i < i_par ; i++){
        printf("%d\t", pares[i]);
    }
    printf("\nImpares: ");
    for(int i = 0; i < i_impar; i++){
        printf("%d\t", impares[i]);
    }

    return 0;
}
