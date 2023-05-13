/* .cpp - Exc. 26 - Fatec SCS - 01/04/2023

Crie um programa que calcule a média de um aluno e indique se foi aprovado ou não.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float N1, N2, media;
	
	printf("CÁLCULO DE MÉDIA\n\n");
	printf("Insira a primeira nota:");
	scanf("%f", &N1);
	printf("Insira a segunda nota:");
	scanf("%f", &N2);
	
	media = (N1 + N2) / 2;
	
	printf("Média Final %.1f", media);
	
	if(media>=6){
		printf("\nAprovado\n");
	}
	
	else{
		printf("\nNão aprovado");
	}
	
	return 0;
	
}
