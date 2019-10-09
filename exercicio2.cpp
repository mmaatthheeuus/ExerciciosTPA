/*Função: Calcular a área de um triângulo
  Autor: Matheus Henrique dos Santos Sousa
  Data de criação: 09/10/2019
  Data de alteração: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"");
	
	float base = 0, altura = 0, area = 0;

	printf("Informe o valor da base do triângulo: \n");	
	scanf("%f", &base);
	printf("Informe o valor da altura do triângulo: \n");	
	scanf("%f", &altura);
	area = (base * altura) / 2;
	
	printf("A área do triângulo informado é de %f.", area);
	
	return 0;	
}
