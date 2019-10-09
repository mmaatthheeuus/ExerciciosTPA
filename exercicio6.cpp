/*Função: Crie um algoritmo que leia o salário e o porcentual de aumento do funcionário
  Autor: Matheus Henrique dos Santos Sousa
  Data de criação: 09/10/2019
  Data de alteração: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"");
	
	float salarioAntigo = 0, salarioNovo = 0, aumento = 0;
	
	printf("Informe o valor do salário atual: \n");
	scanf("%f", &salarioAntigo);
	printf("Informe o valor de aumento sem porcentagem: \nEXEMPLO: '35' \n");
	scanf("%f", &aumento);
	salarioNovo = salarioAntigo + (salarioAntigo * (aumento / 100));
	
	printf("O novo salário devido ao aumento é de %f", salarioNovo);
	
	return 0;
}
