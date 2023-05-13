/* for1.cpp - exibe a mensagem OLÁ MUNDO cinco vezes, exemplificando o uso da instução for*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a; // declaração de variáveis
	
	for (a=1; a <= 5; a++){
		printf("OLÁ MUNDO\n");
	}
	
	return 0;
}
