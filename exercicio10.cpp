/*Fun��o: Verificar se o n�mero � maior que 100, se sim some 150
  Autor: Matheus Henrique dos Santos Sousa
  Data de cria��o: 09/10/2019
  Data de altera��o: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	
	int n1 = 0;
	
	printf("Informe um n�mero: \n");
	scanf("%i", &n1);	
	
	if(n1 > 100){
		n1 = n1 + 150;
	}
	
	printf("%i", n1);
	
	return 0;
}
