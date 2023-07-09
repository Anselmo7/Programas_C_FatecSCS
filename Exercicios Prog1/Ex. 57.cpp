/*.cpp - Exc. 57 - Fatec SCS - 01/04/2023
Crie um programa que peça uma sequência de números inteiros positivos e exiba ao final a soma e a média desses números.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num, qtd = 0, soma = 0;
	float media;
	
	do{
		do{
		   printf("Digite um número (0 termina):\n");
		   scanf("%d", &num);
		   if(num < 0){
		   	printf("Não aceitamos números negativos. Digite novamente.\n");
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
	
	printf("A soma dos números digitados é:%d\n", soma);
	printf("Foram digitados %d números:\n", qtd);
	printf("A média é:%.2f\n", media);

	
	return 0;
	
}
