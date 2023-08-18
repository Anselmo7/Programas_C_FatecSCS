/* .cpp - N2 exercício 3 - Fatec SCS - 10/06/2023
Uma escola concede um desconto na mensalidade aos seus alunos de acordo 
com o tipo de matrícula que cada um fez. Crie um programa que peça os dados 
necessários e exiba o valor do desconto a ser dado na mensalidade, bem como o valor da mensalidade com desconto. 
Deve ser utilizado a instrução switch.

Matrícula1 - 0,03
Matrícula2 - 0,04
Matrícula3 - 0,05
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
	printf("Digite o tipo de Matrícula\n1 - Matrícula1\n2 - Matrícula2\n3 - Matrícula\n4 - Outro\n==> ");
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


