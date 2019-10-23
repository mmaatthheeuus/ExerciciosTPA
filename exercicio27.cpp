/*
Função: Verificar se um número é igual a UM ou DOIS
Autor: Matheus Henrique dos Santos Sousa
Data de Criação: 22/10/2019
Data de Modificação: 22/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int n = 0;
	
	printf("Informe um número: ");
	scanf("%i", &n);
	
	if(n == 1){
		printf("O número é igaul a 1");
	}else if(n == 2){
		printf("O número é igaul a 2");
	}else{
		printf("O número é diferente de 1 ou 2");
	}

	return 0;
}