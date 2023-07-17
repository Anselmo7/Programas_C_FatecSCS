/* prova9.cpp - Fatec SCS - Prova-N1 - 22/04/2023

Ex.9: Crie um programa que peça ao usuário o valor atual do salário.
Em seguida, o programa deverá exibir o valor do aumento e o novo valor do salário.
Por exemplo, se o salário atual for 1000 e o percentual de aumento for 10, o valor
do aumento deverá ser 100 e o novo valor do salário deverá ser 1100. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float sal_atual, sal_novo, porcentagem, acrecimo;
	
	printf("Informe seu salário atual:\n");
	scanf("%f", &sal_atual);
	printf("Insira a porcentagem de aumento:");
	scanf("%f", &porcentagem);	
	
	acrecimo =  sal_atual * (porcentagem / 100 );
	
	sal_novo = sal_atual + acrecimo;
	
	printf("O novo valor do salário é de R$%.2f", sal_novo);
	
	return 0;
}
