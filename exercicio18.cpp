/*
Função: Leia o nome de um aluno e sua média final e verificar o estado do aluno
Autor: Matheus Henrique dos Santos Sousa
Data de criação: 22/10/2019
Data de alteração: 22/10/2019
*/

#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale (LC_ALL,"");

	char nome[40];
	float media = 0; 
	
	printf("Informe o nome do aluno: \n");
	scanf("%s", &nome);
	printf("Informe a média final deste aluno: \n");
	scanf("%f", &media);
	
	if(media >= 7){
		printf("O aluno %s passou!", nome);
	}else if(media <= 5){
		printf("O aluno %s está reprovado!", nome);
	}else{
		printf("ENTRADA INVÁLIDA!!");
	}

	return 0;
}