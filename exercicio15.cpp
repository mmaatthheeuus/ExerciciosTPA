/*
Fun��o: Verificar tr�s n�meros e ver qual � o maior
Autor: Matheus Henrique dos Santos Sousa
Data de Cria��o: 16/10/2019
Data de Modifica��o: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	int n1 = 0, n2 = 0, n3 = 0;
	
	printf("Informe um n�mero: \n");
	scanf("%i", &n1);
	printf("Informe outro n�mero: \n");
	scanf("%i", &n2);
	printf("Informe mais um n�mero: \n");
	scanf("%i", &n3);
	if(n1 > n2 and n1 > n3){
		printf("O n�mero %i � o maior! \n", n1);
	}
	else if(n2 > n1 and n2 > n3){
		printf("O n�mero %i � o maior! \n", n2);
	}
	else if(n3 > n1 and n3 > n2){
		printf("O n�mero %i � o maior! \n", n3);
	}
	else{
		printf("Os n�meros s�o iguais!");
	}
	
	return 0;
}

