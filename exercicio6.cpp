/*Fun��o: Crie um algoritmo que leia o sal�rio e o porcentual de aumento do funcion�rio
  Autor: Matheus Henrique dos Santos Sousa
  Data de cria��o: 09/10/2019
  Data de altera��o: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"");
	
	float salarioAntigo = 0, salarioNovo = 0, aumento = 0;
	
	printf("Informe o valor do sal�rio atual: \n");
	scanf("%f", &salarioAntigo);
	printf("Informe o valor de aumento sem porcentagem: \nEXEMPLO: '35' \n");
	scanf("%f", &aumento);
	salarioNovo = salarioAntigo + (salarioAntigo * (aumento / 100));
	
	printf("O novo sal�rio devido ao aumento � de %f", salarioNovo);
	
	return 0;
}
