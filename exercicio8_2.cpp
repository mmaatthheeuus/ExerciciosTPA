/*Fun��o: Some 4 notas e tire a m�dia dessas notas
  Autor: Matheus Henrique dos Santos Sousa
  Data de cria��o: 09/10/2019
  Data de altera��o: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale (LC_ALL,"");
	
	float n1 = 0, n2 = 0, n3 = 0, n4 = 0, media = 0;
	
	printf("Informe a primeira nota: \n");
	scanf("%f", &n1);	
	printf("Informe a segunda nota: \n");
	scanf("%f", &n2);
	printf("Informe a terceira nota: \n");
	scanf("%f", &n3);
	printf("Informe a quaurta nota: \n");
	scanf("%f", &n4);
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("A m�dia dessas notas � de %f", media);
	
	return 0;
}
