/* 01.cpp - Crie um programa que pe�a dois n�meros ao usu�rio e exiba a soma desses dois n�meros. - 19/03/2023 */

#include <stdio.h>

int main(){
	int valor1, valor2, soma; //declara��o de vari�veis
	printf("Digite o primeiro numero\n");
	scanf("%d", & valor1); //obt�m o primeiro valor
	printf("Digite o segundo numero\n");
	scanf("%d", & valor2); //obt�m o dsegundo valor
	soma = valor1 + valor2; //armazena a soma dos n�meros na vari�vel soma
	printf("Resultado da soma\n %d", soma);
	return 0;
}

