/*
Função: Verificar se um númeor é maior que 5 e menor que 20, se sim mostre seu cubo
Autor: Matheus Henrique dos Santos Sousa
Data de Criação: 16/10/2019
Data de Modificação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	
	int n = 0, cubo = 0;
	
	printf("Informe um número: \n");
	scanf("%i", &n);
	
	cubo = n * n * n;
	if(n > 5 and n < 20){
		printf("%i", cubo);
	}
	return 0;
}
