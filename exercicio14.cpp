/*
Fun��o: Verificar dois n�meros e ver qual � o maior
Autor: Matheus Henrique dos Santos Sousa
Data de Cria��o: 16/10/2019
Data de Modifica��o: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	
	int n1 = 0, n2 = 0;
	
	printf("Informe um n�mero: \n");
	scanf("%i", &n1);
	printf("Informe outro n�mero: \n");
	scanf("%i", &n2);

	if(n1 > n2){
		printf("O n�mero %i � o maior! \n", n1);
	}
	else if(n2 > n1){
		printf("O n�mero %i � o maior! \n", n2);
	}
	else{
		printf("Os n�meros s�o iguais!");
	}
	
	return 0;
}
