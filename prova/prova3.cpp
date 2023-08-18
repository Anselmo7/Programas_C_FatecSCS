/* .cpp - N2 exerc�cio 3 - Fatec SCS - 10/06/2023
Uma escola concede um desconto na mensalidade aos seus alunos de acordo 
com o tipo de matr�cula que cada um fez. Crie um programa que pe�a os dados 
necess�rios e exiba o valor do desconto a ser dado na mensalidade, bem como o valor da mensalidade com desconto. 
Deve ser utilizado a instru��o switch.

Matr�cula1 - 0,03
Matr�cula2 - 0,04
Matr�cula3 - 0,05
Outro - 0
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int tipo_matricula;
	float desconto, calculo_desconto, mensalidade, valor_total;
	
	printf("Digite o valor da mensalidade:");
	scanf("%f", &mensalidade);
	printf("Digite o tipo de Matr�cula\n1 - Matr�cula1\n2 - Matr�cula2\n3 - Matr�cula\n4 - Outro\n==> ");
	scanf("%d", &tipo_matricula);
	
	switch (tipo_matricula){
		case 1: desconto = 0.03; break;
		case 2: desconto = 0.04; break;
		case 3: desconto = 0.05; break;
		default: desconto = 0;
    }
    
    calculo_desconto = mensalidade * desconto;
    
    valor_total = mensalidade - calculo_desconto;
    
    printf("Desconto obtido: R$ %.2f", calculo_desconto);
    printf("\nValor com desconto a pagar: R$ %.2f", valor_total);
    
    return 0;
	
}


