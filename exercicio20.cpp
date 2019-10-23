/*
Função: Verifique um número de horas, minutos, segundos e exiba em segundos
Autor: Matheus Henrique dos Santos Sousa
Data de criação: 22/10/2019
Data de alteração: 22/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int hora = 0, min = 0, segun = 0, total = 0; 
	
	printf("Informe o valor de horas: \n");
	scanf("%i", &hora);
	printf("Informe o valor de minutos: \n");
	scanf("%i", &min);
	printf("informe o valor de segundos: \n");
	scanf("%i", &segun);

	total = (min * 60 ) + (hora * 3600) + segun;
	
	printf("Os valores informados convertidos em segundos equivale a %i.", total);
	
	return = 0;
}