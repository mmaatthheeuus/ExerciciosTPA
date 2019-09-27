/*Função: Calcular a area, comprimento e volume com base em um raio informado
  Nome: Matheus Henrique dos Santos Sousa
  Data de criação:27/09/2019
  Data de auteração:27/09/2019
*/ 

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	float raio = 0, comp = 0, area = 0, vol = 0;
	
	printf("Informe o valor do raio: \n");
	scanf("%f", &raio);
	
	comp = 2 * 3.14 * raio;
	area = (raio * raio) * 3.14;
	vol = (raio * raio * raio) * 3.14 * 0.75;
	
	printf("O comprimento desta esfera é de: %f \n", comp);
	printf("A área desta esfera é de: %f \n", area);
	printf("O volume desta esfera é de: %f \n", vol);
	
	return 0;
}
    