/* .cpp - N2 exercício 5 - Fatec SCS - 10/06/2023
Crie um programa que peça ao usuário dez números inteiros e os armazene em um array. 
Após pedir os dez números, o programa deverá exibir os números digitados, um abaixo do outro, mas apenas 
enquanto não for encontrado o número 0, devendo parar e exibir a mensagem "Fim da lista".*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], a, soma = 0;
	float media;
	
	for(a = 0; a < 10; a++){
	    printf("Digite os números\n");
	    scanf("%d", &num[a]);
	}
	
	printf("Números digitados:\n");
	
	for(a = 0; a < 10; a++){
		
		if(num[a] == 0){
			printf("Fim da lista");
			break;
		}
		printf("%d\n", num[a]);
    }
	
	return 0;
}
