/* prova12.cpp - Fatec SCS - Prova-N1 - 22/04/2023

Ex.12: Foi definido que os funcionários de uma determinada empresa que tiverem salário bruto entre três e cinco salários mínimos
serão selecionados para participar de uma pesquisa. Crie um programa que peça o valor do salário bruto e exiba a mensagem 
PARTICIPARÁ DA PESQUISA caso deva ser selecionado para a pesquisa. Por outro lado, caso não deva ser selecionado , deverá ser exibida 
a mensagem NÃO PARTICIPARÁ DA PESQUISA. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float sal_bruto;
	
	printf("Informe o seu salário bruto:\n");
	scanf("%f", &sal_bruto);
	
	if((sal_bruto > 3906) && (sal_bruto < 6510)){     // Salário minímo R$1302,00
		printf("PARTICIPARÁ DA PESQUISA");
	}
	
	else{
		printf("NÃO PARTICIPARÁ DA PESQUISA");
	}
	
	return 0;
}
