/*Função: Calcular a media entre a altura de duas pessoas
  Nome: Matheus Henrique dos Santos Sousa
  Data de criação:26/09/2019
  Data de auteração:26/09/2019
*/ 

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	char nome1[30], nome2[30];
	float alt1 = 0, alt2 = 0, media = 0;
	
	printf("Informe o nome da primeira pessoa: \n");
	scanf("%c", &nome1);
	
	printf("Informe a altura da primeira pessoa: \n");
	scanf("%f", &alt1);
	
	printf("Informe o nome da segunda pessoa: \n");
	scanf("%c", &nome2);
	
	printf("Informe a altura da segunda pessoa: \n");
	scanf("%f", &alt2);
			
	media = (alt1 + alt2) / 2;
	
	printf("A média entre as alturas de %c e %c é %f", nome1, nome2, media);
	
	return 0;
}
