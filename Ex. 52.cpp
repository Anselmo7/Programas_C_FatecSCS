/* .cpp - Fatec SCS - Exerc�cio 52 - 06/05/2023
  Crie um programa que pe�a dez n�meros inteiros ao usu�rio e mostre o valor da soma desses dez numeros*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num, soma, a;  //declara��o das vari�veis
	
	//solicita os n�meros ao usu�rio
	for(a = 1; a <=10; a++){
	   printf("Digite o numero:\n");
	   scanf("%d", &num);
	   soma = soma + num;  //acumula cada n�mero
    }
	printf("A soma � %d\n", soma);
	
	return 0;
}
