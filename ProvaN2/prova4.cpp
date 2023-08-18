/* .cpp - N2 exerc�cio 3 - Fatec SCS - 10/06/2023
Complete o c�digo fonte a seguir para que o programa fa�a a valida��o na entrada de dados, sendo que n�o pode ser aceito 
um produto com pre�o menor que R$ 0,01 e deve aceitar somente a entrada dos tipos de produtos informados na mensagem. 
Tanto para o pre�o como para o tipo do produto, caso valores inv�lidos sejam informados, a respectiva mensagem de erro 
dever� ser exibida e o dado dever� ser solicitado novamente, quantas vezes forem necess�rias de forma que a mensagem 
"Vamos continuar." somente ser� exibida depois que um produto com pre�o e tipo v�lidos for informado.
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "");

    float preco_unitario;
    char tipo, a, b, c;
    
    printf("Digite o pre�o unit�rio do produto: ");
    scanf("%lf", &preco_unitario);
    
    while("%f", preco_unitario < 0.01){
    	printf("O valor deve ser maior que R$0.01, insira novamente:");
    	scanf("%lf", &preco_unitario);
	}
    
    printf("Digite o tipo do produto:\na - essencial\n");
    printf("b - importante\nc - sup�rfluo ==> ");
    
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

