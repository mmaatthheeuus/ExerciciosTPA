/*Fun��o: Calcular o valor de uma presta��o em atraso
  Autor: Matheus Henrique dos Santos Sousa
  Data de cria��o: 09/10/2019
  Data de altera��o: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"");
	
	float divida = 0, valorPrest = 0, aumento = 0, periodo = 0;
	
	printf("Informe o valor da presta��o inicial: \n");
	scanf("%f", &valorPrest);
	printf("Informe o valor de aumento da presta��o por m�s sem porcentagem: \nEXEMPLO: '15' \n");
	scanf("%f", &aumento);
	printf("Informe o valor do tempo de atraso do pagamento: \n");
	scanf("%f", &periodo);
	divida = valorPrest + (periodo * ((aumento / 100) * valorPrest));
	
	printf("O novo valor a se pagar � de %f", divida);
	
	return 0;
}
