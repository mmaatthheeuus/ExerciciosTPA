/*Função: Calcular a idade de um aluno
  Nome: Matheus Henrique dos Santos Sousa
  Data de criação:26/09/2019
  Data de auteração:26/09/2019
*/ 

#include <iostream>

int main(){
	
	int aNasc = 0, ano = 0, idadeA = 0, idadeD = 0;
	
	printf("Informe o ano de seu nascimento: \n");
	scanf("%i", &aNasc);
	
	printf("Informe o ano atual: \n");
	scanf("%i", &ano);
	
	idadeA = ano - aNasc;
	idadeD = idadeA * 365;
	
	printf("Sua idade em ANOS é de: %i \nE sua idade em dias é de: %i", idadeA, idadeD);
	
	return 0;
}
