/* .cpp - Exc. 28 - Fatec SCS - 25/03/2023
Para calcular o desempenho de um automóvel em quilômetros por litro é necessário saber a distância
percorrida e a quantidade de combustível gasto em um determinado percurso. Crie um programa que 
peça ao usuário os dados necessários, calcule e exiba as seguintes innformações:
-distância percorrida em quilômetros
-quantidade de combustível gasto em litros
-desempenho do veículo em quilômetro por litro */

#include <stdio.h>
#include <locale.h>

int main(){
	// Distância percorrida
	setlocale(LC_ALL,"");
	printf("Cálculo da distância\n\n");
	
	float velocidade, tempo, distancia, qtd_inicial, qtd_final, gasto, desempenho, verificacao, abastecimento, qtd_total;
	
	printf("Insira Velocidade Média:");
	scanf("%f", &velocidade);
	printf("Insira o tempo do percurso:");
	scanf("%f", &tempo);
	
	distancia = velocidade * tempo;
	
	printf("A distância percorrida é de %.2fkm\n\n", distancia);
	
	// Gasto de combustível
	
	printf("Cálculo do gasto de combustível\n\n");
	printf("Insira a quantidade inicial de combustível:");
	scanf("%f", &qtd_inicial);
	printf("Insira a quantidade final de combustível:");
	scanf("%f", &qtd_final);
	printf("O veículo foi abastecido? Pressione 1 se sim ou Pressione 2 se não:");
	scanf("%f", &verificacao);
	
	if(verificacao == 1){
		printf("Quantos litros foram abastecidos?");
		scanf("%f", &abastecimento);
		
		qtd_total = gasto + abastecimento;
			
	}
	else{
		qtd_total = qtd_final;
	}
	
	gasto = (qtd_inicial - qtd_final) + abastecimento;
	
	printf("Quantidade de combustível gasto é de %.2fl\n\n", gasto);
	
	// Desempenho do Veículo
	
	printf("Desempenho do Veículo\n\n");
	printf("Insira a distância percorrida:");
	scanf("%f", &distancia);
	printf("Insira gasto de combustível:");
	scanf("%f", &gasto);
	
	desempenho = distancia / gasto;
	
	if(desempenho >= 12){
		printf("Bom desempenho\n");
	}
	
	else{
		printf("Verifique o consumo\n");
	}
	
	printf("O desempenho do Veículo foi de %2.f km/l", desempenho);
	
	return 0;
}
