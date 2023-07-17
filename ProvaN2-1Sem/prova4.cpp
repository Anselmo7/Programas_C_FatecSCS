/* .cpp - N2 exercício 3 - Fatec SCS - 10/06/2023
Complete o código fonte a seguir para que o programa faça a validação na entrada de dados, sendo que não pode ser aceito 
um produto com preço menor que R$ 0,01 e deve aceitar somente a entrada dos tipos de produtos informados na mensagem. 
Tanto para o preço como para o tipo do produto, caso valores inválidos sejam informados, a respectiva mensagem de erro 
deverá ser exibida e o dado deverá ser solicitado novamente, quantas vezes forem necessárias de forma que a mensagem 
"Vamos continuar." somente será exibida depois que um produto com preço e tipo válidos for informado.
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "");

    float preco_unitario;
    char tipo, a, b, c;
    
    printf("Digite o preço unitário do produto: ");
    scanf("%lf", &preco_unitario);
    
    while("%f", preco_unitario < 0.01){
    	printf("O valor deve ser maior que R$0.01, insira novamente:");
    	scanf("%lf", &preco_unitario);
	}
    
    printf("Digite o tipo do produto:\na - essencial\n");
    printf("b - importante\nc - supérfluo ==> ");
    
    while(1){
    	tipo = getche();
        if(tipo == 'a' || tipo == 'b' || tipo == 'c'){
        	break;
        	
	    }
	    printf("\nTipo precisa ser a, b ou c, digite novamente:");
    }
    printf("\nVamos continuar.");
    
    return 0;
}

