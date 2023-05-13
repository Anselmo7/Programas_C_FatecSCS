/* 01.cpp - Crie um programa que peça dois números ao usuário e exiba a soma desses dois números. - 19/03/2023 */

#include <stdio.h>

int main(){
	int valor1, valor2, soma; //declaração de variáveis
	printf("Digite o primeiro numero\n");
	scanf("%d", & valor1); //obtém o primeiro valor
	printf("Digite o segundo numero\n");
	scanf("%d", & valor2); //obtém o dsegundo valor
	soma = valor1 + valor2; //armazena a soma dos números na variável soma
	printf("Resultado da soma\n %d", soma);
	return 0;
}

