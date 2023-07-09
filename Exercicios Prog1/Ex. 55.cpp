/* .cpp - Fatec SCS - Exercício 55 - 13/05/2023
  Crie um programa que peça dez números inteiros ao usuário e mostre o valor da média dos números pares
  maiores que 8 entre os dez digitados.*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], a, soma = 0, qtd = 0;
	float media;
	
	for(a = 0; a <= 9; a++){
	    printf("Digite os números\n");
	    scanf("%d", &num[a]);
	    if((num[a] > 8) && (num[a] % 2 == 0)){
	    	
	    	soma = soma + num[a];
	    	qtd++;
	
		}
    }
        media = (float)soma / qtd;
		printf("Média:%f\n", media);
		printf("Os números selecionados foram:");
		for(a = 0; a <= 9; a++){
			if((num[a] > 8) && (num[a] % 2 == 0)){
				printf("%d\n", num[a]);
			}
		}
		
		return 0;

}
