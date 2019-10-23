/*
Função: Verificar se um número é par ou ímpar
Autor: Matheus Henrique dos Santos Sousa
Data de criação: 22/10/2019
Data de alteração: 22/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");

	int n = 0; 
	
	printf("Informe um número: ");
	scanf("%i", &n);

	if(n % 2 == 0){
		printf("O número informado é par!! \n");
	}
	else if(n % 2 != 0){
		printf("O número informado é impar!! \n");
	}	
	
	return 0;
}