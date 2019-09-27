/*Função: Calcular a potência de iluminação de um cômodo
  Nome: Matheus Henrique dos Santos Sousa
  Data de criação:27/09/2019
  Data de auteração:27/09/2019
*/ 

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	float larg = 0, area = 0, comp = 0, pot = 0;
	
	printf("Informe o valor da largura do cômodo: \n");
	scanf("%f", &larg);
	
	printf("Informe o valor do comprimento do cômodo: \n");
	scanf("%f", &comp);
	
	area = larg * comp;
	pot = area * 18;

	printf("A área deste cômodo é de: %f metros quadrados \n", area);
	printf("A potência de iluminação devera ser de: %fW \n", pot);
	
	return 0;
}
    