/* .cpp - Exercício 5 - Fatec SCS - 25/03/2023

Uma empresa reembolsa a quilometragem percorrida por seus vendedores na base
de R$ 0,025478 por quilômetro rodado. Crie um programa que permita saber qual 
será o valor do reembolso para um determinado vendedor.*/

#include <stdio.h>
#include <locale.h>
#define valor 0.025478

int main(){
	setlocale(LC_ALL,"");
	
	float km, reembolso;
	printf("Informe a quilometragem rodada:");
	scanf("%f", &km);
	
	reembolso = km * valor;
	
	printf("Reembolso é de R$%f", reembolso);
	
	return 0;
}
