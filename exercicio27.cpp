/*
Fun��o: Verificar se um n�mero � igual a UM ou DOIS
Autor: Matheus Henrique dos Santos Sousa
Data de Cria��o: 22/10/2019
Data de Modifica��o: 22/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int n = 0;
	
	printf("Informe um n�mero: ");
	scanf("%i", &n);
	
	if(n == 1){
		printf("O n�mero � igaul a 1");
	}else if(n == 2){
		printf("O n�mero � igaul a 2");
	}else{
		printf("O n�mero � diferente de 1 ou 2");
	}

	return 0;
}