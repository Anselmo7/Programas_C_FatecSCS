/* .cpp - Fatec SCS - Exercício 55a - 13/05/2023
  Crie um programa que peça dez números inteiros ao usuário e mostre o valor da média dos números pares
  maiores que 8 entre os dez digitados.
  sem array*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num, a, soma = 0, qtd = 0;
	float media;
	
	for(a = 0; a <= 9; a++){
	    printf("Digite os números\n");
	    scanf("%d", &num);
	    if((num > 8) && (num % 2 == 0)){
	    	
	    	soma = soma + num;
	    	qtd++;
	
		}
    }
      if(qtd > 0){
	    media = (float)soma / qtd;
		printf("Média:%f\n", media);
       }
       else{
       	printf("Não é possível calcular a média pois nenhum número foi selecionado");
	   }
		
		return 0;

}
