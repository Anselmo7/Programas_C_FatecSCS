/* .cpp - Fatec SCS - Exerc�cio 54 - 13/05/2023
  Crie um programa que pe�a dez n�meros inteiros ao usu�rio e mostre o valor da quantidade dos n�meros �mpares
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
    
    printf("Soma dos N�meros: %d\n", qtd);
    printf("Os n�meros digitados s�o:");
    
    for(a = 0; a <= 9; a++){
    	if(num[a] % 2 == 1){
    	printf("%d", num[a]);
        }
	}
    
    return 0;
}
