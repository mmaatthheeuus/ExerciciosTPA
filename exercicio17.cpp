/*
Fun��o: Leia a idade de um nadador e classifique-o entre infantil, adulto e juvenil
Autor: Matheus Hnerique dos Santos Sousa
Data de cria��o: 21/10/2019
Data de altera��o: 22/10/2019
*/

# include  < stdio.h >
# include  < locale.h >

int main(){
	
	setlocale (LC_ALL, " " );

	int idade = 0 ;
	
	printf( "Informe a idade do nadador: ");
	scanf( "% i" , &idade);
	
	if(idade >= 5  e idade <= 11){
		printf( "O nadador est� dentro da categoria infantil! \ n");
	}
	else if(idade >= 12  e idade <= 17){
		printf( "O nadador est� dentro da categoria juvenil! \ n");
	}
	else if(idade >= 18){
		printf( "O nadador est� dentro da categoria adulto!");
	}
	else{
		printf("IDADE DIGITADA INV�LIDA!!")

	return 0;
}