/*Função: Calcular uma temperatura de celsius para fahremheit
  Nome: Matheus Henrique dos Santos Sousa
  Data de criação:26/09/2019
  Data de auteração:26/09/2019
*/ 

#include <iostream>

int main(){
	
	float tc = 0, tf = 0;
	
	printf("Informe a temperatura em CELSIUS: \n");
	scanf("%f", &tc);
			
	tf = (tc * 1.8) + 32;
	
	printf("O valor de CELSIUS em FAHREMHEIT é de: %f", tf);
	
	return 0;
}
