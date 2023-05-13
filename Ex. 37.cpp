/* .cpp - Fatec SCS - Exerc�cio 37 - 15/04/2023

Crie um programa que pe�a ao usu�rio o valor do sal�rio bruto de funcion�rio, calcule e exiba os valores dos descontos
(INSS e IR, calculados sobre o valor do sal�rio bruto), bem como o sal�rio l�quido.
use as tabelas (est�o no slide) para definir os valores do INSS e do IR.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float sal_bruto, sal_liquido, desconto_INSS, desconto_IR;
	
	printf("Informe o seu sal�rio:\n\n");
	scanf("%f", &sal_bruto);

// C�lculo INSS
	
	if(sal_bruto <= 1000){
		desconto_INSS = sal_bruto * 0.03;
	}
	
	else if((sal_bruto > 1000) && (sal_bruto <= 3000)){
		desconto_INSS = sal_bruto * 0.04;
	}
	
	else if((sal_bruto > 3000) && (sal_bruto <=7000)){
		desconto_INSS = sal_bruto * 0.05;
	}
	
	else{
		desconto_INSS = sal_bruto * 0.06;
	}
	
// C�lculo IR

	if(sal_bruto <= 2500){
		desconto_IR = 0;
	}
	
	else if((sal_bruto > 2500) && (sal_bruto <= 5000)){
		desconto_IR = sal_bruto *  0.05;
	}
	
	else if((sal_bruto > 5000) && (sal_bruto <= 10000)){
		desconto_IR = sal_bruto * 0.1;
	}
	
	else{
		desconto_IR = sal_bruto * 0.15;
	}
	
// C�lculo valor L�quido
	
	sal_liquido = sal_bruto - desconto_INSS - desconto_IR;
	
	printf("\n\n Valor INSS: %.2f", desconto_INSS);
	printf("\n Valor IR: %.2f", desconto_IR);
	printf("\n Valor L�quido: %.2f", sal_liquido);
	
	return 0;
}
