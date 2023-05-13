/* .cpp Exercício 4 - Fatec SCS - 25/03/23023

Uma das tarefas rotineiras em um banco é a troca de moeda, sendo que o cliente chega 
com uma determinada quantidade de moeda estrangeira e o funcionário do caixa, após consultar
a cotação daquela moeda no dia, devolva-lhe o equivalente em reais. Crie um programa que 
permita saber qual a quantidade de moeda estrangeira que deve ser paga a um cliente a partir
da quantidade de reais que ele apresenta no caixa.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	printf("CÂMBIO DE MOEDA\n\n");
	
	float qtd_reais, cotacao, conversao;
	
	printf("Informe a quantidade em reais:");
	scanf("%f", &qtd_reais);
	printf("Informe a cotação da moeda:");
	scanf("%f", &cotacao);
	
	conversao = qtd_reais / cotacao;
	
	printf("Conversão da Moeda: %.2f", conversao);
	return 0;
} 
