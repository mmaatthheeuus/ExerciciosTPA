/*Fun��o: Calcular o quadrado da soma de tr�s n�meros
  Autor: Matheus Henrique dos Santos Sousa
  Data de cria��o: 09/10/2019
  Data de altera��o: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	
	int n1 = 0, n2 = 0, n3 = 0, resu = 0;
	
	printf("Informe o primeiro valor: \n");
	scanf("%i", &n1);	
	printf("Informe o segundo valor: \n");
	scanf("%i", &n2);
	printf("Informe o terceiro valor: \n");
	scanf("%i", &n3);
	
	resu = (n1 + n2 + n3) * (n1 + n2 + n3);
	
	printf("O quadrado da soma desses tr�s n�meros � de %i", resu);
	
	return 0;
}
