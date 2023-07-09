/* .cpp - Exc. 29 - Fatec SCS - 25/03/2023

Uma empresa reembolsa a quilometragem percorrida por seus vendedores na base
de R$ 0,025478 por quilômetro rodado. Crie um programa que permita saber qual 
será o valor do reembolso para um determinado vendedor.*/

#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	
	float km, reembolso, valor_km;
	printf("Informe a quilometragem rodada:");
	scanf("%f", &km);
	
	if(km < 100){
		valor_km = 0.025478;
	}
	
	else{
		valor_km = 0.035263;
	}
	
	reembolso = km * valor_km;
	
	printf("Reembolso é de R$%f", reembolso);
	
	return 0;
}
