/* .cpp - Fatec SCS - Exerc�cio 55a - 13/05/2023
  Crie um programa que pe�a dez n�meros inteiros ao usu�rio e mostre o valor da m�dia dos n�meros pares
  maiores que 8 entre os dez digitados.
  sem array*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num, a, soma = 0, qtd = 0;
	float media;
	
	for(a = 0; a <= 9; a++){
	    printf("Digite os n�meros\n");
	    scanf("%d", &num);
	    if((num > 8) && (num % 2 == 0)){
	    	
	    	soma = soma + num;
	    	qtd++;
	
		}
    }
      if(qtd > 0){
	    media = (float)soma / qtd;
		printf("M�dia:%f\n", media);
       }
       else{
       	printf("N�o � poss�vel calcular a m�dia pois nenhum n�mero foi selecionado");
	   }
		
		return 0;

}
