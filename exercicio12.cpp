/*Fun��o: Verificar se o n�mero � positivo ou negativo
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
	if(n1 > 0){
		printf("O n�mero � positivo!");
	}
	else if(n1 < 0){
		printf("O n�mero � negativo!");
	}
	else{
		printf("Tecnicamente ele � nulo!");
	}

	return 0;
}
