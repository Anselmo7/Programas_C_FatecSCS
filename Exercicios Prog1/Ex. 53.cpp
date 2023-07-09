/* .cpp - Fatec SCS - Exercício 53 - 06/05/2023
  Crie um programa que peça dez números inteiros ao usuário e mostre o valor da soma dos números pares
  entre os dez digitados.*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], a, soma = 0;
	
	for(a = 0; a <= 9; a++){
	   printf("Digite o numero:\n");
	   scanf("%d", &num[a]);
	   if(num[a] % 2 == 0){
		soma = soma + num[a];
	}
    }
    
    printf("Soma dos Números: %d\n", soma);
    printf("Os números digitados são:");
    
    for(a = 0; a <= 9; a++){
    	printf("%d", num[a]);
	}
    
    return 0;
}
