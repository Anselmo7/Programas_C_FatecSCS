/* .cpp - Exc.27 - Fatec SCS - 01/04/2023

Crie um programa que peça um número inteiro e exiba a mensagem "PAR" se o número for par.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("Números pares?\n\n");
	printf("Insira um Número:");
	scanf("%d", &num);
	
	if(num%2==0){    //se o resto da divisão for 0, número é par
	 	printf("Número é par");
	}
	
	else{
		printf("Número é ímpar");
	}
	return 0;
}
