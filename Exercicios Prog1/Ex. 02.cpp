/* .cpp - Fatec SCS - 25/03/2023

Uma determinada instituição de ensino calcula a nota final de seus alunos a partir das notas das provas (P1, P2 e Pi). 
Tendo essas notas definidas, a nota final é calculada com a fórmula (P1+(P2+Pi).2)/3. 
Crie um programa que permita saber qual a nota final de um aluno. */

#include <stdio.h>
#include <locale.h>

int  main(){
	setlocale(LC_ALL,"");
	float P1, P2, Pi, Nota_final;
	printf("Nota Final de um aluno\n\n");
	printf("Informe a nota da P1:");
	scanf("%f", &P1);
	printf("Informe a nota da P2:");
	scanf("%f", &P2);
	printf("Informe a nota da Pi:");
	scanf("%f", &Pi);
	
	Nota_final = (P1 + (P2 + Pi) * 2) / 3;
	
	printf("Nota Final é %.2f\n", Nota_final);
	
	return 0;
}


