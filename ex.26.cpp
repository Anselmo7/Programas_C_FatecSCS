/* .cpp - Exc. 26 - Fatec SCS - 01/04/2023

Crie um programa que calcule a m�dia de um aluno e indique se foi aprovado ou n�o.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float N1, N2, media;
	
	printf("C�LCULO DE M�DIA\n\n");
	printf("Insira a primeira nota:");
	scanf("%f", &N1);
	printf("Insira a segunda nota:");
	scanf("%f", &N2);
	
	media = (N1 + N2) / 2;
	
	printf("M�dia Final %.1f", media);
	
	if(media>=6){
		printf("\nAprovado\n");
	}
	
	else{
		printf("\nN�o aprovado");
	}
	
	return 0;
	
}
