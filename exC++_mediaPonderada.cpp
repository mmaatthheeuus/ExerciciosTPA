/*Função: Calcular uma média ponderada
  Nome: Matheus Henrique dos Santos Sousa
  Data de criação:26/09/2019
  Data de auteração:26/09/2019
*/ 

#include <iostream>

int main(){
	
	float p1 = 0, p2 = 0, p3 = 0, p4 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, mediaP = 0;
	
	printf("Informe a primeira nota: \n");
	scanf("%f", &n1);
	
	printf("Informe a segunda nota: \n");
	scanf("%f", &n2);
	
	printf("Informe a terceira nota: \n");
	scanf("%f", &n3);
	
	printf("Informe a quarta nota: \n");
	scanf("%f", &n4);
	
	printf("Informe o peso da primeira nota: \n");
	scanf("%f", &p1);
	
	printf("Informe a primeira nota: \n");
	scanf("%f", &n1);
	
	printf("Informe o peso da quarta nota: \n");
	scanf("%f", &p2);
	
	printf("Informe o peso da terceira nota: \n");
	scanf("%f", &p3);
	
	printf("Informe o peso da quarta nota: \n");
	scanf("%f", &p4);
			
	mediaP = (n1 + n2 + n3 + n4) / (p1 + p2 + p3 + p4);
	
	printf("A média ponderada dessas notas é de: %f", mediaP);
	
	return 0;
}