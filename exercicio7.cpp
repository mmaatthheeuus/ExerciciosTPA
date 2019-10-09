/*Função: Calcular o valor de uma prestação em atraso
  Autor: Matheus Henrique dos Santos Sousa
  Data de criação: 09/10/2019
  Data de alteração: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"");
	
	float divida = 0, valorPrest = 0, aumento = 0, periodo = 0;
	
	printf("Informe o valor da prestação inicial: \n");
	scanf("%f", &valorPrest);
	printf("Informe o valor de aumento da prestação por mês sem porcentagem: \nEXEMPLO: '15' \n");
	scanf("%f", &aumento);
	printf("Informe o valor do tempo de atraso do pagamento: \n");
	scanf("%f", &periodo);
	divida = valorPrest + (periodo * ((aumento / 100) * valorPrest));
	
	printf("O novo valor a se pagar é de %f", divida);
	
	return 0;
}
