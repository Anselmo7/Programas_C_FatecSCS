/* .cpp - Fatec SCS - Exerc�cio 52a - 06/05/2023
  Crie um programa que pe�a dez n�meros inteiros ao usu�rio e mostre o valor da soma desses dez numeros
  esta vers�o usa um array ao inv�s de uma vari�vel para armezenar os dez n�meros digitados*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], soma, a;  //declara��o das vari�veis
	
	//solicita os n�meros ao usu�rio
	for(a = 0; a <= 9; a++){
	   printf("Digite o numero:\n");
	   scanf("%d", &num[a]);
	   soma = soma + num[a];  //acumula cada n�mero
    }
    
    //exibe a soma dos n�meros e a lista dos n�meros digitados
	printf("A soma � %d\n", soma);
	printf("N�meros digitados: ");
	for(a = 0; a <= 9; a++){
		printf("%d", num[a]);
	}
	
	return 0;
}
