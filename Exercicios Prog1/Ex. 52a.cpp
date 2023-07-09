/* .cpp - Fatec SCS - Exercício 52a - 06/05/2023
  Crie um programa que peça dez números inteiros ao usuário e mostre o valor da soma desses dez numeros
  esta versão usa um array ao invés de uma variável para armezenar os dez números digitados*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num[10], soma, a;  //declaração das variáveis
	
	//solicita os números ao usuário
	for(a = 0; a <= 9; a++){
	   printf("Digite o numero:\n");
	   scanf("%d", &num[a]);
	   soma = soma + num[a];  //acumula cada número
    }
    
    //exibe a soma dos números e a lista dos números digitados
	printf("A soma é %d\n", soma);
	printf("Números digitados: ");
	for(a = 0; a <= 9; a++){
		printf("%d", num[a]);
	}
	
	return 0;
}
