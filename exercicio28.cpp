/*
Função: Ler o número do dia da semana
Autor: Matheus Henrique dos Santos Sousa
Data de Criação: 22/10/2019
Data de Modificação: 22/10/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int dia = 0;

	printf("Digite um número de um dia da semana: ");
	scanf("%i", &dia);
	
	switch (dia)
	{
	
	case 1 :
	printf("Esse número se a refere a domingo. \n");
	break;
	
	case 2 :
	printf("Esse número se a refere a segunda-feira. \n");
	break;
	
	case 3 :
	printf("Esse número se a refere a terça-feira. \n");
	break;
	
	case 4 :
	printf("Esse número se a refere a quarta-feira. \n");
	break;
	
	case 5 :
	printf("Esse número se a refere a quinta-feira. \n");
	break;
	
	case 6 :
	printf("Esse número se a refere a sexta-feira. \n");
	break;
	
	case 7 :
	printf("Esse número se a refere a sabado. \n");
	break;
	
	default :
	printf("NÚMERO INFORMADO INVALIDO!! \n");
	break;
	}
	
	getchar();
	return 0;
}