/*Função: Calcular o quociente e o resto da divisão
  Autor: Matheus Henrique dos Santos Sousa
  Data de criação: 09/10/2019
  Data de alteração: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL,"");
	
	int dividendo = 0, divisor = 0, quociente = 0, resto = 0;
	
	printf("Informe o número que será dividido: \n");
	scanf("%i", &dividendo);	
	printf("Informe o número que irá dividir o número anterior: \n");
	scanf("%i", &divisor);
	quociente = dividendo / divisor;
	resto  = dividendo - (divisor * quociente);
	
	printf("O resto dessa divisão é de %i e o quociente é equivalente a %i", resto, quociente);
	return 0;
}
