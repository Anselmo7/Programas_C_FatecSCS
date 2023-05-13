/* prova11.cpp - Fatec SCS - Prova-N1 - 22/04/2023

Ex.11: Crie um programa que exiba a mensagem SALDO DEVEDOR caso o saldo da conta corrente de um cliente seja negativo. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float saldo;
	
	printf("Informe o saldo da sua conta corrente:\n");
	scanf("%f", &saldo);
	
	if(saldo < 0){
		printf("SALDO DEVEDOR");
	}
	
	else{
		printf("SALDO POSITIVO");
	}
	
	return 0;
}


