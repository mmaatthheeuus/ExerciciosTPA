/*Fun��o: Troque o valor de 2 n�mero
  Autor: Matheus Henrique dos Santos Sousa
  Data de cria��o: 09/10/2019
  Data de altera��o: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	
	int n1 = 0, n2 = 0, n3 = 0;
	
	printf("Informe um n�mero: \n");
	scanf("%i", &n1);	
	printf("Informe outro n�mero: \n");
	scanf("%i", &n2);	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	printf("%i, %i", n1, n2);
	
	return 0;
}
