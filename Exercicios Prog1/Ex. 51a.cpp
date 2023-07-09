/* .cpp - Fatec SCS - Exercício 51 - 06/05/2023
  Crie um programa que mostre a temperatura em graus Celsius, entre 0 e 100 e suas equivalentes
  em graus Fahrenheit, sabendo-se que a conversão se dá pela fórmula F = C * 9 / 5 + 32
  exibir as temperaturas da seguinte forma:
  C graus Celsius equivalem a F graus Fahrenheit*/
  
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int a, t_c, t_f;
	
	printf("Conversão de temperatura\n\n");
	
	for(t_c = 0; t_c <= 100; t_c++){
		printf("%d Celsius = %.2f Fahrenheit\n", t_c, t_c * 1.8 + 32); // nesse ex. 9 / 5 = 1.8, para mostrar com números decimais
	}
	
	return 0;
}
