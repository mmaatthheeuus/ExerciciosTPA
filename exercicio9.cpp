/*Fun��o: Calcular o quociente e o resto da divis�o
  Autor: Matheus Henrique dos Santos Sousa
  Data de cria��o: 09/10/2019
  Data de altera��o: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	
	int dividendo = 0, divisor = 0, quociente = 0, resto = 0;
	
	printf("Informe o n�mero que ser� dividido: \n");
	scanf("%i", &dividendo);	
	printf("Informe o n�mero que ir� dividir o n�mero anterior: \n");
	scanf("%i", &divisor);
	quociente = dividendo / divisor;
	resto  = dividendo - (divisor * quociente);
	
	printf("O resto dessa divis�o � de %i e o quociente � equivalente a %i", resto, quociente);
	return 0;
}
