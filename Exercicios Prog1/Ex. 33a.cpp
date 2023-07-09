/* .cpp - Exc. 33a - Fatec SCS - 01/04/2023

Crie um programa que calcule a média de um aluno e indique se foi aprovado ou não.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float N1, N2, media;
	
	do{
	   printf("Qual a primeira nota? (0-10):");
	   scanf("%f", &N1);
	   if((N1 < 0) || (N1 >10)){
	   	printf("A nota precisa estar entre 0 e 10. Digite novamente.\n");
	   }
    }
	while ((N1 < 0) || (N1 > 10));
	
    do{
	   printf("Qual a segunda nota? (0-10):");
	   scanf("%f", &N2);
	   if((N2 < 0) || (N2 >10)){
	   	printf("A nota precisa estar entre 0 e 10. Digite novamente.\n");
	   }
    }
	while ((N2 < 0) || (N2
	 > 10));
	
	media = (N1 + N2) / 2;
	
	printf("Média Final %.1f", media);
	
	if(media>=6){
		printf("\nAprovado");
	}
	
	else if(media < 3){
		printf("\nReprovado");
	}
	
	else if(media >= 3 <= 5.9){
		printf("\nExame");
	}
	
	
	return 0;
	
}
