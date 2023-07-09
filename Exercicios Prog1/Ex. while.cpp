/* .cpp - Ex.while- - Fatec SCS - 03/06/2023*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i;
	
	i = 1;
	
	while(i <= 10){
		printf("O valor é %d\n", i);
		i++;
	}
	
	printf("Terminou. O valor final é %d", i);
	return 0;
}
