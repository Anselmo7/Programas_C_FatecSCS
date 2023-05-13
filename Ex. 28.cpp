/* .cpp - Exc. 28 - Fatec SCS - 25/03/2023
Para calcular o desempenho de um autom�vel em quil�metros por litro � necess�rio saber a dist�ncia
percorrida e a quantidade de combust�vel gasto em um determinado percurso. Crie um programa que 
pe�a ao usu�rio os dados necess�rios, calcule e exiba as seguintes innforma��es:
-dist�ncia percorrida em quil�metros
-quantidade de combust�vel gasto em litros
-desempenho do ve�culo em quil�metro por litro */

#include <stdio.h>
#include <locale.h>

int main(){
	// Dist�ncia percorrida
	setlocale(LC_ALL,"");
	printf("C�lculo da dist�ncia\n\n");
	
	float velocidade, tempo, distancia, qtd_inicial, qtd_final, gasto, desempenho, verificacao, abastecimento, qtd_total;
	
	printf("Insira Velocidade M�dia:");
	scanf("%f", &velocidade);
	printf("Insira o tempo do percurso:");
	scanf("%f", &tempo);
	
	distancia = velocidade * tempo;
	
	printf("A dist�ncia percorrida � de %.2fkm\n\n", distancia);
	
	// Gasto de combust�vel
	
	printf("C�lculo do gasto de combust�vel\n\n");
	printf("Insira a quantidade inicial de combust�vel:");
	scanf("%f", &qtd_inicial);
	printf("Insira a quantidade final de combust�vel:");
	scanf("%f", &qtd_final);
	printf("O ve�culo foi abastecido? Pressione 1 se sim ou Pressione 2 se n�o:");
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
	
	printf("Quantidade de combust�vel gasto � de %.2fl\n\n", gasto);
	
	// Desempenho do Ve�culo
	
	printf("Desempenho do Ve�culo\n\n");
	printf("Insira a dist�ncia percorrida:");
	scanf("%f", &distancia);
	printf("Insira gasto de combust�vel:");
	scanf("%f", &gasto);
	
	desempenho = distancia / gasto;
	
	if(desempenho >= 12){
		printf("Bom desempenho\n");
	}
	
	else{
		printf("Verifique o consumo\n");
	}
	
	printf("O desempenho do Ve�culo foi de %2.f km/l", desempenho);
	
	return 0;
}
