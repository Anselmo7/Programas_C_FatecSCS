/* .cpp - Fatec SCS - Exercício 50 - 06/05/2023
Crie um programa que mostre a "tabuada" de um número informado pelo usuário, de 1 até 10*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int a, num;
	
	printf("TABUADA\n\n");
	printf("Informe um número\n");
	scanf("%d", &num);
	
	for(a = 1; a <=10; a++){
		printf("%d x %d = %d\n", a, num, num * a);
}
	return 0;
}
