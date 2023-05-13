/* prova9.cpp - Fatec SCS - Prova-N1 - 22/04/2023

Ex.9: Crie um programa que pe�a ao usu�rio o valor atual do sal�rio.
Em seguida, o programa dever� exibir o valor do aumento e o novo valor do sal�rio.
Por exemplo, se o sal�rio atual for 1000 e o percentual de aumento for 10, o valor
do aumento dever� ser 100 e o novo valor do sal�rio dever� ser 1100. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float sal_atual, sal_novo, porcentagem, acrecimo;
	
	printf("Informe seu sal�rio atual:\n");
	scanf("%f", &sal_atual);
	printf("Insira a porcentagem de aumento:");
	scanf("%f", &porcentagem);	
	
	acrecimo =  sal_atual * (porcentagem / 100 );
	
	sal_novo = sal_atual + acrecimo;
	
	printf("O novo valor do sal�rio � de R$%.2f", sal_novo);
	
	return 0;
}
