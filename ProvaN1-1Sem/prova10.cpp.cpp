/* prova10.cpp - Fatec SCS - Prova-N1 - 22/04/2023

Ex.10: Sabe-se que para calcular o per�metro de um tri�ngulo � necess�rio somar as medidas de seus lados.
Crie um programa que permita saber se o per�metro de um tri�ngulo � pequeno (at� 30cm), m�dio (de 31 a 60cm)
ou grande (acima de 60cm). Considere que as medidadas dos lados s�o n�meros inteiros. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int lado_1, lado_2, lado_3, perimetro;
	
	printf("Informe o tamanho do lado 1:\n");
	scanf("%d", &lado_1);
	printf("Informe o tamanho do lado 2:\n");
	scanf("%d", &lado_2);
	printf("Informe o tamanho do lado 3:\n");
	scanf("%d", &lado_3);
	
	perimetro = lado_1 + lado_2 + lado_3;
	
	if(perimetro <= 30){
		printf("O tri�ngulo � pequeno");
	}
	
	else if((perimetro >= 31) && (perimetro <=60)){
		printf("O tri�ngulo � m�dio");
	}
	
	else if((perimetro > 60)){
			printf("O tri�ngulo � grande");
	}
	
	printf("\n O perimetro � de %dcm", perimetro);
	
	return 0;
}
