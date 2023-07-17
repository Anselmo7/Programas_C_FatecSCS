/* .cpp - N2 exercício 5 - Fatec SCS - 10/06/2023
Crie um programa que peça ao usuário dez números inteiros e os armazene em um array. 
Após pedir os dez números, o programa deverá exibir:
a. A lista de números digitados, um ao lado do outro e separados por um espaço, do primeiro ao último número.
b. Abaixo da lista de números digitados, a soma desses números.
c. Abaixo da soma dos números, a média desses números com duas decimais.
d. Abaixo da soma dos números, a quantidade de números pares digitados.
e. Abaixo da quantidade de números pares digitados, a lista de números digitados, um ao lado do outro 
e separados por um espaço, do último ao primeiro número*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], a, soma = 0, pares = 0;
	float media;
	
	for(a = 0; a < 10; a++){
	    printf("Digite os números\n");
	    scanf("%d", &num[a]);
	}
	
	printf("Números digitados:");
	
	for(a = 0; a < 10; a++){
	    printf("%d ", num[a]);
		soma += num[a];
		if (num[a] % 2 == 0) {
            pares++;
        }
    }
    
    printf("\nSoma dos números: %d", soma);
    media = (float)soma / 10;
    printf("\nMédia dos números: %.2f", media);
    printf("\nQuantidade de números pares: %d", pares);
    printf("\nNúmeros digitados (do último ao primeiro): ");
    
    for (a = 9; a >= 0; a--) {
        printf("%d ", num[a]);
    }
    
    return 0;
}
