/* .cpp - Exercício 3 - Fatec SCS - 25/03/2023

A área de um triângulo é calculada a partir da fórmula B.h/2, sendo que B é a medida da base e H é a medida da altura desse triângulo. Crie um programa que permita saber qual a área da figura.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float base, altura, area;
	
	printf("CÁLCULO DA ÁREA DO TRIÂNGULO\n\n");
	
	printf("Informe a medida da base:");
	scanf("%f", &base);
	printf("Informe a medida da altura:");
	scanf("%f", &altura);
	
	area = base * altura / 2;
	
	printf("A área do triângulo é %f", area);
	
	return 0;
}
