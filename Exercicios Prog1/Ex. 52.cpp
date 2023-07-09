/* .cpp - Fatec SCS - Exercício 52 - 06/05/2023
  Crie um programa que peça dez números inteiros ao usuário e mostre o valor da soma desses dez numeros*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num, soma, a;  //declaração das variáveis
	
	//solicita os números ao usuário
	for(a = 1; a <=10; a++){
	   printf("Digite o numero:\n");
	   scanf("%d", &num);
	   soma = soma + num;  //acumula cada número
    }
	printf("A soma é %d\n", soma);
	
	return 0;
}
