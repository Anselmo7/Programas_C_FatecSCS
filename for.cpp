/* for1.cpp - exibe a mensagem OL� MUNDO cinco vezes, exemplificando o uso da instu��o for*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a; // declara��o de vari�veis
	
	for (a=1; a <= 5; a++){
		printf("OL� MUNDO\n");
	}
	
	return 0;
}
