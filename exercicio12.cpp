/*Função: Verificar se o número é positivo ou negativo
  Autor: Matheus Henrique dos Santos Sousa
  Data de criação: 09/10/2019
  Data de alteração: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	
	int n1 = 0, n2 = 0, n3 = 0;
	
	printf("Informe um número: \n");
	scanf("%i", &n1);	
	if(n1 > 0){
		printf("O número é positivo!");
	}
	else if(n1 < 0){
		printf("O número é negativo!");
	}
	else{
		printf("Tecnicamente ele é nulo!");
	}

	return 0;
}
