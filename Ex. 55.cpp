/* .cpp - Fatec SCS - Exerc�cio 55 - 13/05/2023
  Crie um programa que pe�a dez n�meros inteiros ao usu�rio e mostre o valor da m�dia dos n�meros pares
  maiores que 8 entre os dez digitados.*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], a, soma = 0, qtd = 0;
	float media;
	
	for(a = 0; a <= 9; a++){
	    printf("Digite os n�meros\n");
	    scanf("%d", &num[a]);
	    if((num[a] > 8) && (num[a] % 2 == 0)){
	    	
	    	soma = soma + num[a];
	    	qtd++;
	
		}
    }
        media = (float)soma / qtd;
		printf("M�dia:%f\n", media);
		printf("Os n�meros selecionados foram:");
		for(a = 0; a <= 9; a++){
			if((num[a] > 8) && (num[a] % 2 == 0)){
				printf("%d\n", num[a]);
			}
		}
		
		return 0;

}
