/*
Fun��o: Verificar se um n�mero � par ou �mpar
Autor: Matheus Henrique dos Santos Sousa
Data de cria��o: 22/10/2019
Data de altera��o: 22/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");

	int n = 0; 
	
	printf("Informe um n�mero: ");
	scanf("%i", &n);

	if(n % 2 == 0){
		printf("O n�mero informado � par!! \n");
	}
	else if(n % 2 != 0){
		printf("O n�mero informado � impar!! \n");
	}	
	
	return 0;
}