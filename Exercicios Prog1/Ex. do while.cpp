/*.cpp - Exc. 33while - Fatec SCS - 01/04/2023
Solicita ao usuário que informe uma sequência de números inteiros, um a um, e ao final
exibe o valor da soma desses números.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num, soma = 0;
	
	do{
		printf("Digite um número (0 termina):");
		scanf("%d", &num);
		soma = num + soma;
	}
	while (num != 0); // != quer dizer diferente
	
	printf("A soma dos números digitados é %d", soma);
	
	return 0;
	
}
