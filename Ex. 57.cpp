/*.cpp - Exc. 57 - Fatec SCS - 01/04/2023
Crie um programa que pe�a uma sequ�ncia de n�meros inteiros positivos e exiba ao final a soma e a m�dia desses n�meros.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num, qtd = 0, soma = 0;
	float media;
	
	do{
		do{
		   printf("Digite um n�mero (0 termina):\n");
		   scanf("%d", &num);
		   if(num < 0){
		   	printf("N�o aceitamos n�meros negativos. Digite novamente.\n");
		   }
	    }
	    while( num < 0);
		soma = num + soma;
		if(num != 0){
		qtd ++; // qtd = qtd + 1
	    }
	}
	while (num != 0); // != quer dizer diferente
	
	media = soma / qtd;
	
	printf("A soma dos n�meros digitados �:%d\n", soma);
	printf("Foram digitados %d n�meros:\n", qtd);
	printf("A m�dia �:%.2f\n", media);

	
	return 0;
	
}
