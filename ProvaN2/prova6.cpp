/* .cpp - N2 exerc�cio 5 - Fatec SCS - 10/06/2023
Crie um programa que pe�a ao usu�rio dez n�meros inteiros e os armazene em um array. 
Ap�s pedir os dez n�meros, o programa dever� exibir os n�meros digitados, um abaixo do outro, mas apenas 
enquanto n�o for encontrado o n�mero 0, devendo parar e exibir a mensagem "Fim da lista".*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], a, soma = 0;
	float media;
	
	for(a = 0; a < 10; a++){
	    printf("Digite os n�meros\n");
	    scanf("%d", &num[a]);
	}
	
	printf("N�meros digitados:\n");
	
	for(a = 0; a < 10; a++){
		
		if(num[a] == 0){
			printf("Fim da lista");
			break;
		}
		printf("%d\n", num[a]);
    }
	
	return 0;
}
