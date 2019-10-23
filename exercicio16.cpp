/*Função: Colocar três números inteiros em ordem crescente
Autor: Matheus Henrique dos Santos Sousa
Data de Criação: 16/10/2019
Data de Modificação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	int n1 = 0, n2 = 0, n3 = 0;
	
	printf("Informe um número: \n");
	scanf("%i", &n1);
	printf("Informe outro número: \n");
	scanf("%i", &n2);
	printf("Informe mais um número: \n");
	scanf("%i", &n3);
	if(n1 >= n2 and n2 >= n3){
		printf("A ordem crescente destes números é: %i - %i - %i \n", n3, n2, n1);
	}
	else if(n2 >= n3 and n3 >= n1){
		printf("A ordem crescente destes números é: %i - %i - %i \n", n1, n3, n2);
	}
	else if(n3 >= n2 and n2 >= n1){
		printf("A ordem crescente destes números é: %i - %i - %i \n", n1, n2, n3);
	}
	else if(n1 >= n3 and n3 >= n2){
		printf("A ordem crescente destes números é: %i - %i - %i \n", n2, n3, n1);
	}
	else if(n2 >= n1 and n1 >= n3){
		printf("A ordem crescente destes números é: %i - %i - %i \n", n3, n1, n2);
	}
	else if(n3 >= n1 and n1 >= n2){
		printf("A ordem crescente destes números é: %i - %i - %i \n", n2, n1, n3);
	}
	else{
		printf("Os números são iguais!");
	}
	
	return 0;
}
