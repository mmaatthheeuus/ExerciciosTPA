/*Função: Calcular o imc de um aluno
  Nome: Matheus Henrique dos Santos Sousa
  Data de criação:25/09/2019
  Data de auteração:25/09/2019
*/ 

#include <iostream>

int main(){
	
	float tc = 0, tf = 0;
	
	printf("Informe o valor da temperatura em CELSIUS: ");
	scanf("%f", &tc);
	
	tf = (tc * 1.8) + 32;
	
	printf("O valor de CELSIUS em FAHREMHEIT é de: %f", tf);
	
	return 0;
}