/* .cpp - Exc.27 - Fatec SCS - 01/04/2023

Crie um programa que pe�a um n�mero inteiro e exiba a mensagem "PAR" se o n�mero for par.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("N�meros pares?\n\n");
	printf("Insira um N�mero:");
	scanf("%d", &num);
	
	if(num%2==0){    //se o resto da divis�o for 0, n�mero � par
	 	printf("N�mero � par");
	}
	
	else{
		printf("N�mero � �mpar");
	}
	return 0;
}
