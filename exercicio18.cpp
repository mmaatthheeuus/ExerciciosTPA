/*
Fun��o: Leia o nome de um aluno e sua m�dia final e verificar o estado do aluno
Autor: Matheus Henrique dos Santos Sousa
Data de cria��o: 22/10/2019
Data de altera��o: 22/10/2019
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");

	char nome[40];
	float media = 0; 
	
	printf("Informe o nome do aluno: \n");
	scanf("%s", &nome);
	printf("Informe a m�dia final deste aluno: \n");
	scanf("%f", &media);
	
	if(media >= 7){
		printf("O aluno %s passou!", nome);
	}else if(media <= 5){
		printf("O aluno %s est� reprovado!", nome);
	}else{
		printf("ENTRADA INV�LIDA!!");
	}

	return 0;
}