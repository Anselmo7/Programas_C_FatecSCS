/* .cpp - Fatec SCS - Exercício 54 - 13/05/2023
  Crie um programa que peça dez números inteiros ao usuário e mostre o valor da quantidade dos números ímpares
  entre os dez digitados.*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], a, qtd = 0;
	
	for(a = 0; a <= 9; a++){
	   printf("Digite o numero:\n");
	   scanf("%d", &num[a]);
	   if(num[a] % 2 == 1){
		qtd = qtd + 1;
	   }
    }
    
    printf("Soma dos Números: %d\n", qtd);
    printf("Os números digitados são:");
    
    for(a = 0; a <= 9; a++){
    	if(num[a] % 2 == 1){
    	printf("%d", num[a]);
        }
	}
    
    return 0;
}
