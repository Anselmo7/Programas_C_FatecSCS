/* .cpp - Exerc�cio 3 - Fatec SCS - 25/03/2023

A �rea de um tri�ngulo � calculada a partir da f�rmula B.h/2, sendo que B � a medida da base e H � a medida da altura desse tri�ngulo. Crie um programa que permita saber qual a �rea da figura.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float base, altura, area;
	
	printf("C�LCULO DA �REA DO TRI�NGULO\n\n");
	
	printf("Informe a medida da base:");
	scanf("%f", &base);
	printf("Informe a medida da altura:");
	scanf("%f", &altura);
	
	area = base * altura / 2;
	
	printf("A �rea do tri�ngulo � %f", area);
	
	return 0;
}
