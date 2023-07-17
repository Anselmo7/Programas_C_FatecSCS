/* prova12.cpp - Fatec SCS - Prova-N1 - 22/04/2023

Ex.12: Foi definido que os funcion�rios de uma determinada empresa que tiverem sal�rio bruto entre tr�s e cinco sal�rios m�nimos
ser�o selecionados para participar de uma pesquisa. Crie um programa que pe�a o valor do sal�rio bruto e exiba a mensagem 
PARTICIPAR� DA PESQUISA caso deva ser selecionado para a pesquisa. Por outro lado, caso n�o deva ser selecionado , dever� ser exibida 
a mensagem N�O PARTICIPAR� DA PESQUISA. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float sal_bruto;
	
	printf("Informe o seu sal�rio bruto:\n");
	scanf("%f", &sal_bruto);
	
	if((sal_bruto > 3906) && (sal_bruto < 6510)){     // Sal�rio min�mo R$1302,00
		printf("PARTICIPAR� DA PESQUISA");
	}
	
	else{
		printf("N�O PARTICIPAR� DA PESQUISA");
	}
	
	return 0;
}
