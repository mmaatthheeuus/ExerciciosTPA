/*
Fun��o: Ler o n�mero do dia da semana
Autor: Matheus Henrique dos Santos Sousa
Data de Cria��o: 22/10/2019
Data de Modifica��o: 22/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int dia = 0;

	printf("Digite um n�mero de um dia da semana: ");
	scanf("%i", &dia);
	
	switch (dia)
	{
	
	case 1 :
	printf("Esse n�mero se a refere a domingo. \n");
	break;
	
	case 2 :
	printf("Esse n�mero se a refere a segunda-feira. \n");
	break;
	
	case 3 :
	printf("Esse n�mero se a refere a ter�a-feira. \n");
	break;
	
	case 4 :
	printf("Esse n�mero se a refere a quarta-feira. \n");
	break;
	
	case 5 :
	printf("Esse n�mero se a refere a quinta-feira. \n");
	break;
	
	case 6 :
	printf("Esse n�mero se a refere a sexta-feira. \n");
	break;
	
	case 7 :
	printf("Esse n�mero se a refere a sabado. \n");
	break;
	
	default :
	printf("N�MERO INFORMADO INVALIDO!! \n");
	break;
	}
	
	getchar();
	return 0;
}