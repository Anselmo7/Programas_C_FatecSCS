/* .cpp - N2 exerc�cio 5 - Fatec SCS - 10/06/2023
Crie um programa que pe�a ao usu�rio dez n�meros inteiros e os armazene em um array. 
Ap�s pedir os dez n�meros, o programa dever� exibir:
a. A lista de n�meros digitados, um ao lado do outro e separados por um espa�o, do primeiro ao �ltimo n�mero.
b. Abaixo da lista de n�meros digitados, a soma desses n�meros.
c. Abaixo da soma dos n�meros, a m�dia desses n�meros com duas decimais.
d. Abaixo da soma dos n�meros, a quantidade de n�meros pares digitados.
e. Abaixo da quantidade de n�meros pares digitados, a lista de n�meros digitados, um ao lado do outro 
e separados por um espa�o, do �ltimo ao primeiro n�mero*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], a, soma = 0, pares = 0;
	float media;
	
	for(a = 0; a < 10; a++){
	    printf("Digite os n�meros\n");
	    scanf("%d", &num[a]);
	}
	
	printf("N�meros digitados:");
	
	for(a = 0; a < 10; a++){
	    printf("%d ", num[a]);
		soma += num[a];
		if (num[a] % 2 == 0) {
            pares++;
        }
    }
    
    printf("\nSoma dos n�meros: %d", soma);
    media = (float)soma / 10;
    printf("\nM�dia dos n�meros: %.2f", media);
    printf("\nQuantidade de n�meros pares: %d", pares);
    printf("\nN�meros digitados (do �ltimo ao primeiro): ");
    
    for (a = 9; a >= 0; a--) {
        printf("%d ", num[a]);
    }
    
    return 0;
}
