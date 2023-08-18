#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	// declara��o de vari�veis
	int tipo_imovel;
	float consumo, valor_por_m3, valor_total;

    // entrada de dados
    printf("Digite o consumo do im�vel em metros c�bicos: ");
    scanf("%f", &consumo);
    printf("Digite o tipo do im�vel\n1 - Residencial\n2 - Comercial\n3 - Industrial\n4 - Outro\n==> ");
    scanf("%d", &tipo_imovel);

	switch (tipo_imovel) {
		case 1: valor_por_m3 = 0.23423; break;
        case 2: valor_por_m3 = 0.34654; break;
        case 3: valor_por_m3 = 0.42787; break;
        default: valor_por_m3 = 0.55456;
	}
	
	valor_total = valor_por_m3 * consumo;

    printf("Valor a pagar: R$ %.2f", valor_total);

	return 0;
}
