/*Fun��o: Calcular a �rea de um retangulo
  Autor: Matheus Henrique dos Santos Sousa
  Data de cria��o: 09/10/2019
  Data de altera��o: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"");
	
	float base = 0, altura = 0, area = 0;

	printf("Informe o valor da base do ret�ngulo: \n");	
	scanf("%f", &base);
	printf("Informe o valor da altura do ret�ngulo: \n");	
	scanf("%f", &altura);
	area = base * altura;
	
	printf("A �rea do ret�ngulo informado � de %f.", area);
	
	return 0;
}
