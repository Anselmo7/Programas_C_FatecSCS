/* .cpp - Ex. 58 - Fatec SCS - 20/05/2023

Crie um programa que simula a caixa registradora de um mercado.
O programa dever� pedir ao usu�rio o c�digo do produto, a quantidade de unidades e o pre�o unit�rio do produto.
Essa opera��o dever� ser repetida para todos os produtos que forem passados no caixa.
O programa deve mostrar:
- Quantidade total de produtos
- Quantidade total de itens(unidades) comprados.
- Valor total a pagar pela comprar.*/

#include <stdio.h>
#include <locale>

int main(){
	setlocale(LC_ALL,"");
	
	int cod, qtd = 0;
	float preco = 0, total;
	
	do{
	   printf("Caixa Registradora:\n");
	
	   printf("Insira o c�digo do produto:\n");
	   scanf("%d", &cod);
	
       printf("Insira a quantidade de unidades:\n");
	   scanf("%d", &qtd);
	
	   printf("Insira o pre�o:\n");
	   scanf("%f", &preco);
	   
	   cod++;
	   qtd + qtd;
	   total = preco * qtd;
    }
    while(cod != 0);

    printf("O total �:%f", total);
    
	
	return 0;
}
