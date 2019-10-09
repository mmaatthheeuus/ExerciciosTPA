/*Função: Calcular o valor de venda de um terreno retângular
  Autor: Matheus Henrique dos Santos Sousa
  Data de criação: 09/10/2019
  Data de alteração: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"");
	
	float largura = 0, comprimento = 0, valorMetro = 0, valorVenda = 0, area = 0;
	
	printf("Informe o valor da largura do retângulo: \n");	
	scanf("%f", &largura);
	printf("Informe o valor do comprimento do retângulo: \n");	
	scanf("%f", &comprimento);
	printf("Informe o valor em reais do custo do metro quadrado: \n");	
	scanf("%f", &valorMetro);
	area = comprimento * largura;
	valorVenda = area * valorMetro;
	
	printf("O valor de venda deste terreno retângular é de %f", valorVenda);
	
	return 0;
}
