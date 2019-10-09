/*Função: Calcular a área de um circulo
  Autor: Matheus Henrique dos Santos Sousa
  Data de criação: 09/10/2019
  Data de alteração: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"");
	
	float raio = 0, area = 0;

	printf("Informe o valor do raio do circulo: \n");	
	scanf("%f", &raio);
	area = (raio * raio) * 3.14;
	
	printf("A área do circulo informado é de %f.", area);
	
	return 0;	
}
