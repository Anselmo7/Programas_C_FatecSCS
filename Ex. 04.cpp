/* .cpp Exerc�cio 4 - Fatec SCS - 25/03/23023

Uma das tarefas rotineiras em um banco � a troca de moeda, sendo que o cliente chega 
com uma determinada quantidade de moeda estrangeira e o funcion�rio do caixa, ap�s consultar
a cota��o daquela moeda no dia, devolva-lhe o equivalente em reais. Crie um programa que 
permita saber qual a quantidade de moeda estrangeira que deve ser paga a um cliente a partir
da quantidade de reais que ele apresenta no caixa.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	printf("C�MBIO DE MOEDA\n\n");
	
	float qtd_reais, cotacao, conversao;
	
	printf("Informe a quantidade em reais:");
	scanf("%f", &qtd_reais);
	printf("Informe a cota��o da moeda:");
	scanf("%f", &cotacao);
	
	conversao = qtd_reais / cotacao;
	
	printf("Convers�o da Moeda: %.2f", conversao);
	return 0;
} 
