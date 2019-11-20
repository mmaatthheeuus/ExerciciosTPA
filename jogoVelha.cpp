/*
Função: Jogo da Velha
Autores: Matheus Henrique dos Santos Sousa e Tiago Gili Lopes
Data de Criação: 23/10/2019
Data de Modificação: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL,"");
	
	int n = 0, inicio = 0, j = 0, i = 0, l = 0, c = 0, cont = 1, b = 1, placar1= 0, placar2 = 0;
	char nome1[30], nome2[30], xis, posi[3][3]; 
	
	printf("Informe o nome do PLAYER 1: ");
	scanf("%s", &nome1);
	printf("Informe o nome do PLAYER 2: ");
	scanf("%s", &nome2);
	printf("1 - Gostaia de Jogar. \n2 - Gostaria de SAIR do Jogo. \n");
	printf("********** 1 ou 2 ********** \n");
	scanf("%i", &n);
	printf("PLACAR AGREGADO: \n%s = %i\n%s = %i \n\n", nome2, placar2, nome1, placar1);
							
	while (n == 1){
			for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
					posi[i][j] = ' ';
				}
			}	
		printf("INFORME o  NÚMERO do PLAYER que JOGARA PRIMEIRO: ");
		scanf("%i", &inicio);
		cont = 1;
		if (inicio == 1){
			printf("********** X ou O ********** \n");
			scanf("%c", &xis);
			
			while (xis != 'x' and xis != 'X' and xis != 'o' and xis != 'O'){
				printf("\nO PLAYER vai JOGAR com X ou O ? ");
				scanf("%c", &xis);
			}
			if (xis == 'x' or xis == 'X'){
				for (cont; cont <= 9; cont ++){
					if (cont%2==1){
						while (b == 1){
						printf ("Informe a POSICAO que deseja jogar: \n");
						printf ("LINHA: ");
						scanf ("%i", &l);
						b = 0;
							if (l < 1 or l > 3){
							printf("Numero adulterado. \n");
							b = 1;
							}
						}
						b = 1;
						l--;
						while (b == 1){
							printf ("COLUNA: ");
							scanf ("%i", &c);
							b = 0;
							if(c < 1 or c > 3){
								printf("Numero adulterado. \n");
								b = 1;								
							}
						}
						c--;
						while(posi[l][c] == 'X' or posi[l][c] == 'O'){
							printf("Não foi possivel efetuar esta jogada. \nInforme a posição que deseja jogar: ");
							printf("LINHA: ");
							scanf("%i", &l);
							b = 0;
							if (l < 1 or l > 3){
								printf("Numero adulterado. \n");
								b = 1;
							}
							b = 1;
							l--;
							while (b == 1){
								printf("COLUNA: ");
								scanf("%i", &c);
								b = 0;
								if(c < 1 or c > 3){
									printf("Numero adulterado. \n");
									b = 1;								
								}
							}
							c--;
						}
						if (posi[l][c] == ' '){
							posi[l][c] = 'X';
						}
						for (i = 0; i < 3; i++){
							for (j = 0; j < 3; j++){
								printf("|%c|", posi[i][j]);
							}
							printf("\n");
						}
						printf("\n");
					}
					b = 1;
					cont++;
					if ((posi[0][0] == 'X' and posi[1][1] == 'X' and posi[2][2] == 'X') or (posi[0][2] == 'X' and posi [1][1] == 'X' and posi[2][0] == 'X') or (posi[0][0] == 'X' and posi[0][1] == 'X' and posi[0][2] == 'X') or (posi[1][0] == 'X' and posi[1][1] == 'X' and posi[1][2] == 'X') or (posi[2][0] == 'X' and posi[2][1] == 'X' and posi[2][2] == 'X') or (posi[0][0] == 'X' and posi[1][0] == 'X' and posi[2][0] == 'X') or (posi[0][1] == 'X' and posi[1][1] == 'X' and posi[2][1] == 'X') or (posi[0][2] == 'X' and posi[1][2] == 'X' and posi[2][2] == 'X')){
						placar1 ++;
						printf("O PLAYER 1 GANHOU!!! \n%s = %i \n", nome1, placar1); 
						cont = 287; 
						inicio = 3;
						n = 3;
					}
					if (n == 3 or cont == 9){
						printf("O JOGO ACABOU. \n PLACAR AGREGADO: \n%s = %i\n%s = %i \n\n1 - Gostaria de JOGAR. \n2 - Gostaria de SAIR do Jogo. \nGostaria de JOGAR NOVAMENTE ? ", nome2, placar2, nome1, placar1);
						scanf("%i", &n);
					}
					if(cont % 2 == 0 and cont < 9){
	  				 	while(b == 1){
							printf("Informe a POSICAO que deseja jogar: \n");
		    					printf("LINHA: ");
		    					scanf("%i", &l);
		    					b = 0;
			    					if(l < 1 or l > 3){
			    					 	printf("Numero adulterado. \n");
			    					 	b = 1;
			    					}
						}
						b = 1;
		    			l--;
		    				while(b == 1){
		    					printf ("COLUNA: ");
		    					scanf ("%i", &c);
		    					b = 0;
		    					if(c < 1 or c > 3){
		   					 		("Numero adulterado. \n");
		   					 		b = 1;
		   					 	}
		   					 }
	    					 c--;
					while(posi[l][c] == 'X' or posi[l][c] == 'O'){
		    			printf ("Nao foi possivel efetuar esta jogada. \nInforme a POSICAO que deseja jogar: \n");
			    		printf ("LINHA: ");
			    		scanf ("%i",&l);
			    		b = 0;
			    			if(l < 1 or l > 3){
			    				printf ("Numero adulterado. \n");
			    				b = 1;
			    			}
						b = 1;
			    		l--;
			    		while (b == 1){
			    			printf ("COLUNA: ");
			    			scanf ("%i", &c);
			    			b = 0;
			    			if (c < 1 or c > 3){
			    				printf ("Numero adulterado. \n");
			    				b = 1;
			    			}
			    		}
			    		c--;
			    	}
			    	if(posi[l][c] == ' '){
			    		posi[l][c] = 'O';
			    	}
			    	for(i = 0; i < 3; i++){
			      		for(j = 0; j < 3; j++){
			       			printf("|%c|", posi[i][j], " ");
			     		}
			     			printf("\n");
			    	}
			    	printf("\n");
		  			}
		  			b = 1;
		  			if((posi[0][0] == 'O' and posi[1][1] == 'O' and posi[2][2] == 'O') or (posi[0][2] == 'O' and posi[1][1] == 'O' and posi[2][0] == 'O') or (posi[0][0] == 'O' and posi[0][1] == 'O' and posi[0][2] == 'O') or (posi[1][0] == 'O' and posi[1][1] == 'O' and posi[1][2] == 'O') or (posi[2][0] == 'O' and posi[2][1] == 'O' and posi[2][2] == 'O') or (posi[0][0] == 'O' and posi[1][0] == 'O' and posi[2][0] == 'O') or (posi[0][1] == 'O' and posi[1][1] == 'O' and posi[2][1] == 'O') or (posi[0][2] == 'O' and posi[1][2] == 'O' and posi[2][2] == 'O')){
						placar2 ++;
		  				printf ("O PLAYER 2 GANHOU!!! \n%s = %i \n", nome2, placar2); 
						cont = 287;
						inicio = 3; 
						n = 3;
		  			}
				}
				if(n == 3 or cont == 9){
					printf("O JOGO ACABOU. PLACAR AGREGADO:  \n%s = %i\n%s = %i\n1 - Gostaria de JOGAR. \n2 - Gostaria de SAIR do Jogo. \nGostaria de JOGAR NOVAMENTE ? ", nome1, placar1, nome2, placar2);
					scanf("%i", &n);
				}
			}
			if(xis == 'o' or xis == 'O'){
				for(cont; cont <= 9; cont++){
    				if(cont % 2 == 1){
    					while(b == 1){
							printf("Informe a POSiCAO que deseja jogar: \n");
		    				printf("LINHA: ");
		    				scanf("%i", &l);
		    				b = 0;
		    				if(l < 1 or l > 3){
		    					printf("Numero adulterado. \n");
		    					b = 1;
		    				}
						}
						b = 1;
		    			l--;
		    			while(b == 1){
		    				printf("COLUNA: ");
		    				scanf("%i", &c);
		    				b = 0;
		    				if(c < 1 or c > 3){
		    					printf("Numero adulterado. \n");
		    					b = 1;
		    				}
		    			}
		    			c--;
		    			while(posi[l][c] == 'X' or posi[l][c] == 'O'){
		    				printf("Nao foi possivel efetuar esta jogada. \nInforme a POSICAO que deseja jogar: \nLINHA: ");
			    			scanf("%i", &l);
			    			b = 0;
			    			if(l < 1 or l > 3){
			    				printf("Numero adulterado. \n");
			    				b = 1;
			    			}
							b = 1;
			    			l--;
			    			while(b == 1){
			    				printf("COLUNA: ");
			    				scanf("%i", &c);
			    				b = 0;
			    			if(c < 1 or c > 3){
			    				printf("Numero adulterado. \n");
			    				b = 1;
			    			}
			    			}
			    			c--;
			    		}
			    		if(posi[l][c] == ' '){
			    			posi[l][c] = 'O';
			    		}
			    		for(i = 0; i < 3; i++){
			      			for(j = 0; j < 3; j++){
			       				printf("|%c|", posi[i][j]," ");
			     			}
			     			printf("\n");
			    		}
			    		printf("\n");
		  			}
		  			b = 1;
		  			cont++;
					if((posi[0][0] == 'O' and posi[1][1] == 'O' and posi[2][2] == 'O') or (posi[0][2] == 'O' and posi[1][1] == 'O' and posi[2][0] == 'O') or (posi[0][0] == 'O' and posi[0][1] == 'O' and posi[0][2] == 'O') or (posi[1][0] == 'O' and posi[1][1] == 'O' and posi[1][2] == 'O') or (posi[2][0] == 'O' and posi[2][1] == 'O' and posi[2][2] == 'O') or (posi[0][0] == 'O' and posi[1][0] == 'O' and posi[2][0] == 'O') or (posi[0][1] == 'O' and posi[1][1] == 'O' and posi[2][1] == 'O') or (posi[0][2] == 'O' and posi[1][2] == 'O' and posi[2][2] == 'O')){
						placar1 ++; 
		  				printf("O PLAYER 1 GANHOU!!! \nPLACAR: \n", nome1, " = ", placar1, "\n"); 
						cont = 287; 
						inicio = 3; 
						n = 3;
		  			}
		  			if(n == 3 or cont == 9){
						printf("O JOGO ACABOU. PLACAR AGREGADO:  \n%s = %i\n %s = %i \n1 - Gostaria de JOGAR. \n2 - Gostaria de SAIR do Jogo. \nGostaria de JOGAR NOVAMENTE ? ", nome1, placar1, nome2, placar2);
						scanf("%i", &n);
					}
	  				if(cont%2==0){
	  					while(b == 1){
							printf("Informe a POSICAO que deseja jogar: \nLINHA: ");
		    				scanf("%i", &l);
		    				b = 0;
		    				if(l < 1 or l > 3){
		    					printf("Numero adulterado. \n");
		    					b = 1;
		    				}
							}
							b = 1;
		    				l--;
		    				while(b == 1){
		    					printf("COLUNA: ");
		    					scanf("%i", &c);
		    					b = 0;
		    					if(c < 1 or c > 3){
		    					 	printf("Numero adulterado. \n");
		    					 	b = 1;
		    					}
		    				}
		    				c--;
		    				while(posi[l][c] == 'X' or posi[l][c] == 'O'){
		    					printf("Nao foi possivel efetuar esta jogada. \nInforme a POSICAO que deseja jogar: \nLINHA: ");
			    				scanf("%i", &l);
			    				b = 0;
			    				if(l < 1 or l > 3){
			    					printf("Numero adulterado. \n");
			    					b = 1;
			    				}
								b = 1;
			    				l--;
			    				while(b == 1){
			    					printf("COLUNA: ");
			    					scanf("%i", &c);
			    					b = 0;
			    					if(c < 1 or c > 3){
			    						printf("Numero adulterado. \n");
			    					 	b = 1;
			    					}
			    				}
			    				c--;
			    			}
			    			if(posi[l][c] == ' '){
			    				posi[l][c] = 'X';
			    			}
			    			for(i = 0; i < 3; i++){
			      				for(j = 0; j < 3; j++){
			       					printf("|%c|", posi[i][j]," ");
			     				}
			     			printf("\n");
			    			}
			    			printf("\n");
		  			}
		  			b = 1;
					if((posi[0][0] == 'X' and posi[1][1] == 'X' and posi[2][2] == 'X') or (posi[0][2] == 'X' and posi[1][1] == 'X' and posi[2][0] == 'X') or (posi[0][0] == 'X' and posi[0][1] == 'X' and posi[0][2] == 'X') or (posi[1][0] == 'X' and posi[1][1] == 'X' and posi[1][2] == 'X') or (posi[2][0] == 'X' and posi[2][1] == 'X' and posi[2][2] == 'X') or (posi[0][0] == 'X' and posi[1][0] == 'X' and posi[2][0] == 'X') or (posi[0][1] == 'X' and posi[1][1] == 'X' and posi[2][1] == 'X') or (posi[0][2] == 'X' and posi[1][2] == 'X' and posi[2][2] == 'X')){
						placar2 ++; 
		  				printf("O PLAYER 2 GANHOU!!! \nPLACAR: \n", nome2, " = ", placar2, "\n"); 
						cont = 287; 
						inicio = 3;
						n = 3;
					}
				}
				if(n == 3 or cont == 9){
					printf("O JOGO ACABOU. PLACAR AGREGADO:  \n%s = %i \n%s = %i \n1 - Gostaria de JOGAR. \n2 - Gostaria de SAIR do Jogo. \nGostaria de JOGAR NOVAMENTE ? ", nome1, placar1, nome2, placar2);
					scanf("%i", &n);
				}
			}
		}	
		else if (inicio == 2){
			printf("********** X ou O ********** \n");
			scanf("%c", &xis);
			while (xis != 'x' and xis != 'X' and xis != 'o' and xis != 'O'){
				printf("\nO PLAYER vai JOGAR com X ou O ? ");
				scanf("%c", &xis);
			}
			if (xis == 'x' or xis == 'X'){
				for (cont; cont <= 9; cont ++){
					if (cont%2==1){
						while (b == 1){
						printf("Informe a POSICAO que deseja jogar: \n");
						printf("LINHA: ");
						scanf("%i", &l);
						b = 0;
							if (l < 1 or l > 3){
								printf("Numero adulterado. \n");
								b = 1;
							}
						}
						b = 1;
						l--;
						while (b == 1){
							printf("COLUNA: ");
							scanf("%i", &c);
							b = 0;
							if(c < 1 or c > 3){
								printf("Numero adulterado. \n");
								b = 1;								
							}
						}
						c--;
						while(posi[l][c] == 'X' or posi[l][c] == 'O'){
							printf("Não foi possivel efetuar esta jogada. \nInforme a posição que deseja jogar: ");
							printf("LINHA: ");
							scanf("%i", &l);
							b = 0;
							if (l < 1 or l > 3){
								printf("Numero adulterado. \n");
								b = 1;
							}
							b = 1;
							l--;
							while (b == 1){
								printf("COLUNA: ");
								scanf("%i", &c);
								b = 0;
								if(c < 1 or c > 3){
									printf("Numero adulterado. \n");
									b = 1;								
								}
							}
							c--;
						}
						if(posi[l][c] == ' '){
							posi[l][c] = 'X';
						}
						for(i = 0; i < 3; i++){
							for(j = 0; j < 3; j++){
								printf("|%c|", posi[i][j]);
							}
						printf("\n");
						}
						printf("\n");
					}
					b = 1;
					cont++;
					if ((posi[0][0] == 'X' and posi[1][1] == 'X' and posi[2][2] == 'X') or (posi[0][2] == 'X' and posi [1][1] == 'X' and posi[2][0] == 'X') or (posi[0][0] == 'X' and posi[0][1] == 'X' and posi[0][2] == 'X') or (posi[1][0] == 'X' and posi[1][1] == 'X' and posi[1][2] == 'X') or (posi[2][0] == 'X' and posi[2][1] == 'X' and posi[2][2] == 'X') or (posi[0][0] == 'X' and posi[1][0] == 'X' and posi[2][0] == 'X') or (posi[0][1] == 'X' and posi[1][1] == 'X' and posi[2][1] == 'X') or (posi[0][2] == 'X' and posi[1][2] == 'X' and posi[2][2] == 'X')){
						placar2 ++;
						printf("O PLAYER 2 GANHOU!!! \n%s = %i \n",nome2, placar2); 
						cont = 287; 
						inicio = 3;
						n = 3;
					}
					if (n == 3 or cont == 9){
						printf("O JOGO ACABOU. \nPLACAR AGREGADO: \n%s = %i \n%s = %i \n\n1 - Gostaria de JOGAR. \n2 - Gostaria de SAIR do Jogo. \nGostaria de JOGAR NOVAMENTE ? ", nome1, placar1, nome2, placar2);
						scanf("%i", &n);
					}
					if(cont%2==0 and cont < 9){
	  				 	while(b == 1){
							printf("Informe a POSICAO que deseja jogar: \n");
		    				printf("LINHA: ");
		    				scanf("%i", &l);
		    				b = 0;
		    				if(l < 1 or l > 3){
		    					printf("Numero adulterado. \n");
		    					b = 1;
		    				}
						}
						b = 1;
		    			l--;
		    			while(b == 1){
		    				printf("COLUNA: ");
		    				scanf("%i", &c);
		    				b = 0;
		    				if(c < 1 or c > 3){
		    					("Numero adulterado. \n");
		    					b = 1;
		    				}
		    			}
		    			c--;
						while(posi[l][c] == 'X' or posi[l][c] == 'O'){
		    				printf("Nao foi possivel efetuar esta jogada. \nInforme a POSICAO que deseja jogar: \n");
			    			printf("LINHA: ");
			    			scanf("%i",&l);
			    			b = 0;
			    			if(l < 1 or l > 3){
			    				printf("Numero adulterado. \n");
			    				b = 1;
			    			}
							b = 1;
			    			l--;
			    			while(b == 1){
			    				printf("COLUNA: ");
			    				scanf("%i", &c);
			    				b = 0;
			    				if(c < 1 or c > 3){
			    					printf("Numero adulterado. \n");
			    					b = 1;
			    				}
			    			}
			    			c--;
			    		}
			    		if(posi[l][c] == ' '){
			    			posi[l][c] = 'O';
			    		}
			    		for(i = 0; i < 3; i++){
			      			for(j = 0; j < 3; j++){
			       				printf("|%c|", posi[i][j], " ");
			     			}
			     		printf("\n");
			    		}
			    		printf("\n");
		  			}
		  			b = 1;
		  			if((posi[0][0] == 'O' and posi[1][1] == 'O' and posi[2][2] == 'O') or (posi[0][2] == 'O' and posi[1][1] == 'O' and posi[2][0] == 'O') or (posi[0][0] == 'O' and posi[0][1] == 'O' and posi[0][2] == 'O') or (posi[1][0] == 'O' and posi[1][1] == 'O' and posi[1][2] == 'O') or (posi[2][0] == 'O' and posi[2][1] == 'O' and posi[2][2] == 'O') or (posi[0][0] == 'O' and posi[1][0] == 'O' and posi[2][0] == 'O') or (posi[0][1] == 'O' and posi[1][1] == 'O' and posi[2][1] == 'O') or (posi[0][2] == 'O' and posi[1][2] == 'O' and posi[2][2] == 'O')){
						placar1 ++;
		  				printf ("O PLAYER 1 GANHOU!!! \n%s = %i \n", nome1, placar1); 
						cont = 287;
						inicio = 3; 
						n = 3;
		  			}
				}
				if(n == 3 or cont == 9){
					printf("O JOGO ACABOU. PLACAR AGREGADO:  \n%s = %i\n%s = %i\n1 - Gostaria de JOGAR. \n2 - Gostaria de SAIR do Jogo. \nGostaria de JOGAR NOVAMENTE ? ", nome1, placar1, nome2, placar2);
					scanf("%i", &n);
				}
			}
			if(xis == 'o' or xis == 'O'){
				for(cont; cont <= 9; cont++){
    				if(cont%2==1){
    					while(b == 1){
							printf("Informe a POSiCAO que deseja jogar: \n");
		    				printf("LINHA: ");
		    				scanf("%i", &l);
		    				b = 0;
		    				if(l < 1 or l > 3){
		    					printf("Numero adulterado. \n");
		    					b = 1;
		    				}
						}
						b = 1;
		    			l--;
		    			while(b == 1){
		    				printf("COLUNA: ");
		    				scanf("%i", &c);
		    				b = 0;
		    				if(c < 1 or c > 3){
		    					printf("Numero adulterado. \n");
		    					b = 1;
		    				}
		    			}
		    			c--;
		    			while(posi[l][c] == 'X' or posi[l][c] == 'O'){
		    				printf("Nao foi possivel efetuar esta jogada. \nInforme a POSICAO que deseja jogar: \nLINHA: ");
			    			scanf("%i", &l);
			    			b = 0;
			    			if(l < 1 or l > 3){
			    				printf("Numero adulterado. \n");
			    				b = 1;
			    			}
							b = 1;
			    			l--;
			    			while(b == 1){
			    				printf("COLUNA: ");
			    				scanf("%i", &c);
			    				b = 0;
			    				if(c < 1 or c > 3){
			    					printf("Numero adulterado. \n");
			    					b = 1;
			    				}
			    			}
			    			c--;
			   		    }
			    		if(posi[l][c] == ' '){
			    			posi[l][c] = 'O';
			    		}
			    		for(i = 0; i < 3; i++){
			      			for(j = 0; j < 3; j++){
			       				printf("|%c|", posi[i][j]," ");
			     			}
			     		printf("\n");
			    		}
			    	printf("\n");
		  			}
		  			b = 1;
		  			cont++;
					if((posi[0][0] == 'O' and posi[1][1] == 'O' and posi[2][2] == 'O') or (posi[0][2] == 'O' and posi[1][1] == 'O' and posi[2][0] == 'O') or (posi[0][0] == 'O' and posi[0][1] == 'O' and posi[0][2] == 'O') or (posi[1][0] == 'O' and posi[1][1] == 'O' and posi[1][2] == 'O') or (posi[2][0] == 'O' and posi[2][1] == 'O' and posi[2][2] == 'O') or (posi[0][0] == 'O' and posi[1][0] == 'O' and posi[2][0] == 'O') or (posi[0][1] == 'O' and posi[1][1] == 'O' and posi[2][1] == 'O') or (posi[0][2] == 'O' and posi[1][2] == 'O' and posi[2][2] == 'O')){
		  				placar2 ++;
						printf("O PLAYER 2 GANHOU!!! \n %s = %i \n", nome2, placar2); 
						cont = 287; 
						inicio = 3;
						n = 3;
		  			}
		  			if(n == 3 or cont == 9){
						printf("O JOGO ACABOU. \nPLACAR AGREGADO: \n%s = %i \n%s = %i \n\n1 - Gostaria de JOGAR. \n2 - Gostaria de SAIR do Jogo. \nGostaria de JOGAR NOVAMENTE ? ", nome1, placar1, nome2, placar2);
						scanf("%i", &n);
					}
	  				if(cont % 2 == 0){
	  				 	while(b == 1){
							printf("Informe a POSICAO que deseja jogar: \nLINHA: ");
		    				scanf("%i", &l);
		    				b = 0;
		    				if(l < 1 or l > 3){
		    					printf("Numero adulterado. \n");
		    					b = 1;
		    				}
						}
						b = 1;
		    			l--;
		    			while(b == 1){
		    				printf("COLUNA: ");
		    				scanf("%i", &c);
		    				b = 0;
		    				if(c < 1 or c > 3){
		    					printf("Numero adulterado. \n");
		    					b = 1;
		    				}
		    			}
		    			c--;
		    			while(posi[l][c] == 'X' or posi[l][c] == 'O'){
		    				printf("Nao foi possivel efetuar esta jogada. \nInforme a POSICAO que deseja jogar: \nLINHA: ");
			    			scanf("%i", &l);
			    			b = 0;
			    			if(l < 1 or l > 3){
			    				printf("Numero adulterado. \n");
			    				b = 1;
			    			}
							b = 1;
			    			l--;
			    			while(b == 1){
			    				printf("COLUNA: ");
			    				scanf("%i", &c);
			    				b = 0;
			    				if(c < 1 or c > 3){
			    					printf("Numero adulterado. \n");
			    					b = 1;
			    				}
			    			}
			    			c--;
			    		}
			    		if(posi[l][c] == ' '){
			    			posi[l][c] = 'X';
			    		}
			    		for(i = 0; i < 3; i++){
			      			for(j = 0; j < 3; j++){
			       				printf("|%c|", posi[i][j]," ");
			     			}
			     			printf("\n");
			    		}
			    		printf("\n");
		  			}
		  			b = 1;
					if((posi[0][0] == 'X' and posi[1][1] == 'X' and posi[2][2] == 'X') or (posi[0][2] == 'X' and posi[1][1] == 'X' and posi[2][0] == 'X') or (posi[0][0] == 'X' and posi[0][1] == 'X' and posi[0][2] == 'X') or (posi[1][0] == 'X' and posi[1][1] == 'X' and posi[1][2] == 'X') or (posi[2][0] == 'X' and posi[2][1] == 'X' and posi[2][2] == 'X') or (posi[0][0] == 'X' and posi[1][0] == 'X' and posi[2][0] == 'X') or (posi[0][1] == 'X' and posi[1][1] == 'X' and posi[2][1] == 'X') or (posi[0][2] == 'X' and posi[1][2] == 'X' and posi[2][2] == 'X')){
						placar1 ++; 
		  				printf("O PLAYER 1 GANHOU!!! \n%s = %i", nome1, placar1); 
						cont = 287; 
						inicio = 3;
						n = 3;
					}
				}
				cont++;
				if(n == 3 or cont == 9){
					printf("O JOGO ACABOU. PLACAR AGREGADO:  \n%s = %i\n%s = %i\n1 - Gostaria de JOGAR. \n2 - Gostaria de SAIR do Jogo. \nGostaria de JOGAR NOVAMENTE ? ", nome1, placar1, nome2, placar2);
					scanf("%i", &n);
				}
			}
		}
	}
	if(n == 2){
		printf("ENCERRANDO PROGRAMA...");	
		system ("pause");
	}
}
