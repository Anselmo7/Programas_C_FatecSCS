/*.cpp - Exc. 33while - Fatec SCS - 01/04/2023
Solicita ao usu�rio que informe uma sequ�ncia de n�meros inteiros, um a um, e ao final
exibe o valor da soma desses n�meros.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num, soma = 0;
	
	do{
		printf("Digite um n�mero (0 termina):");
		scanf("%d", &num);
		soma = num + soma;
	}
	while (num != 0); // != quer dizer diferente
	
	printf("A soma dos n�meros digitados � %d", soma);
	
	return 0;
	
}
