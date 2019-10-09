/*Função: Troque o valor de 2 número
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
	printf("Informe outro número: \n");
	scanf("%i", &n2);	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	printf("%i, %i", n1, n2);
	
	return 0;
}
