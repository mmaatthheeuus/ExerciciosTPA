/*
Função: Teatro
Autores: Matheus Henrique dos Santos Sousa e Tiago Gili Lopes
Data de Criação: 26/11/2019
Data de Modificação: 27/11/2019
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(int argc, char const* argv[]){
	
	setlocale(LC_ALL,"");
	
	int co=0, fi=0, opc=0, larg=0, comp=0, i=0, j=0, escala=1, g=0, show=0, exit=0, dec=0, vendas=0, cont=0, codigo[25][25], n_verificacao=0, reservas=0, total_arrecadado=0, total_esperado=0, total=0, falta=0, in_compl=0, livres=0;
	float valor=0, in=0, meia_in=0, reser_in=0;
	char area[25][25], hori[26];
	bool teatro=true;
	
	hori[1] = 'A';
	hori[2] = 'B';
	hori[3] = 'C';
	hori[4] = 'D';
	hori[5] = 'E';
	hori[6] = 'F';
	hori[7] = 'G';
	hori[8] = 'H';
	hori[9] = 'I';
	hori[10] = 'J';
	hori[11] = 'K';
	hori[12] = 'L';
	hori[13] = 'M';
	hori[14] = 'N';
	hori[15] = 'O';
	hori[16] = 'P';
	hori[17] = 'Q';
	hori[18] = 'R';
	hori[19] = 'S';
	hori[20] = 'T';
	hori[21] = 'U';
	hori[22] = 'V';
	hori[23] = 'W';
	hori[24] = 'X';
	hori[25] = 'Y';
	hori[26] = 'Z';
	
	for (i = 0; i < fi; i++){
		for (j = 0; j < co; j++){
			area[i][j] = '_';
		}
	}
					
	if(teatro);
		printf("                                                          (*************************¨¨¨***************************) \n");
		printf("                                                           )                                                     (  \n");
		printf("                                                          (  [1] Informar o valor do ingresso e tamanho da sala.  ) \n");
		printf("                                                           ) [2] Abrir um espetáculo.                 		 (      \n");
		printf("                                                          (  [3] Reservar ou cancelar a reserva de um lugar.      ) \n");
		printf("                                                           ) [4] Vender um lugar (inteira).                      (  \n");
		printf("                                                          (  [5] Vender um lugar (meia).                          ) \n");
		printf("                                                           ) [6] Verificar mapa do teatro.                       (  \n");
		printf("                                                          (  [7] Encerrar o espetáculo.                           ) \n");
		printf("                                                           ) [8] Verificar parciais.                             (  \n");
		printf("                                                          (  [9] Encerrar.                                        ) \n");
		printf("                                                           )                                                      ( \n");
		printf("                          |------------------------------ ( ************************¨¨¨*************************** ) --------------------------------| \n");
		printf("                                                                      		                                   ");
		scanf("%i", &opc);
		
		while(opc < 1 or opc > 9){
			printf("\n                                                                      	     Entrada adulterada!!! \n");
			printf("                                                                           Informe um número válido: ");
			scanf("%i", &opc);
		}
		
		while(exit == 0){
				
			switch (opc){
				
			//Informar o valor do ingresso e tamanho da sala.	
				case 1:
					
					printf("			                                                 Informe a LARGURA da sala: ");
					scanf("%i", &larg);
					
					while(larg < 0){
						printf("\n                                                                      	     Entrada adulterada!!! \n");
						printf("                                                                           Informe um número válido: ");
						scanf("%i", &larg);
					}
					
					if(larg > 34){
						larg = 29;
					}
					
					printf("						    		       Informe o COMPRIMENTO da sala: ");
					scanf("%i", &comp);
					
					while(comp < 0){
						printf("\n                                                                      	     Entrada adulterada!!! \n");
						printf("                                                                           Informe um número válido: ");
						scanf("%i", &comp);
					}
					
					if(comp > 29){
						comp = 29;
					}
					
					printf("                   	   _______________________________________________________________________________________________________________________ \n\n\n");
					
					
					fi = larg - 4;
					co = comp - 4;
					
					if(show == 1){
						for (i = 0; i < fi; i++){
							for (j = 0; j < co; j++){
								area[i][j] = '_';
							}
						}
					}
					
					if(fi == 25 and co == 25){
						if(larg > comp){
							co = 20;
						}
						else if(larg == comp){
							co = 20;
						}
						else if(larg < comp){
							larg = 20;
						}
					}
					

					
					printf("\n                                                      ");
					
					while(g < co){
						g++;
						printf(" %c  ", hori[g]);
					}
					
					printf("\n                                                ");
					
					g = 0;
					for (i = 0; i < fi; i++){
						if(g < 10){
							printf("%i -  ", g++);
						}
						else{
							printf("%i - ", g++);
						}
						for (j = 0; j < co; j++){
							printf(" {%c}", area[i][j]);
						}
					printf("\n\n                                                ");
					}
					
					printf("             _________________________________________________________\n\n");
					
					printf("                                                              Informe o VALOR que deseja arrecadar com o teatro: ");
					scanf("%f", &valor);
					in = valor / (fi * co);
					total_esperado = (co * fi) * 0.6;

					
					while(dec != 1){
						meia_in = in / 2;
						reser_in = in * 0.6;
						in_compl = in - reser_in;
											
						printf("                                                                          O valor do INGRESSO é R$%.2f \n", in);
						printf("                                                                     O valor para RESERVAR um lugar é R$%.2f \n", reser_in);					
						printf("                                                                        O valor da MEIA ENTRADA é R$%.2f \n", meia_in);
						
						printf("                                                                      Esta de acordo com o valor do ingresso? \n");
						printf("                                                                                   [1] - SIM. \n");
						printf("                                                                                   [2] - NÃO. \n");
						printf("                                                                                       ");
						scanf("%i", &dec);
						
						while(opc < 1 and opc > 2){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
							printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
						
						if(dec == 2){
							printf("                                                                     	Qual o valor desejado para o ingresso?");
							scanf("%f", &in);
							meia_in = in / 2;
							reser_in = in * 0.6;
							in_compl = in - reser_in;
							dec = 1;
						}
					}
					
					printf("                                                                      Deseja continuar e abrir o espetáculo? \n");
					printf("                                                                                   [1] - SIM. \n");
					printf("                                                                                   [2] - NÃO. \n");
					printf("                                                                                       ");
					scanf("%i", &opc);
					
					while(opc < 1 or opc > 2){
						printf("\n                                                                      	     Entrada adulterada!!! \n");
					    printf("                                                                           Informe um número válido: ");
						scanf("%i", &opc);
					}
					
					if(opc == 1){
						opc = 2;
						show = 1;
					}
					else{
						opc = 9;
					}
					
				break;
				
			//Abrir um espetáculo.
				case 2:
					if(show == 1){
						for (i = 0; i < fi; i++){
							for (j = 0; j < co; j++){
								area[i][j] = '_';
							}
						}
						
						printf("                                                                           O ESPETÁCULO ESTÁ ABERTO!!! \n");
						
						show = 1;
						
						printf("                                                            (*************************¨¨¨***************************)  \n");
						printf("                                                             )                                                     ( \n");
						printf("                                                            (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
						printf("                                                             ) [2] Vender um lugar (inteira).                      (  \n");
						printf("                                                            (  [3] Vender um lugar (meia).                          ) \n");
						printf("                                                             ) [4] Verificar mapa do teatro.                       (  \n");
						printf("                                                            (  [5] Encerrar o espetáculo.                           ) \n");
						printf("                                                             )                                                     ( \n");
						printf("                            |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
						printf("                                                                      		       ");
						scanf("%i", &opc);
						
						while(opc < 1 and opc > 5){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
							printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
						
						if(opc == 1){
							opc = 3;
						}
						else if(opc == 2){
							opc = 4;
						}
						else if(opc == 3){
							opc = 5;
						}
						else if(opc == 4){
							opc = 6;
						}
						else if(opc == 5){
							opc = 7;
						}
						
					}
					else{
						printf("									 O SHOW NÃO ESTÁ ABERTO!!! \n");
						printf("                                                                        Deseja abrir um espetáculo? \n");
						printf("                                                                               [1] - SIM. \n");
						printf("                                                                               [2] - NÃO. \n");
						printf("                   	   _______________________________________________________________________________________________________________________ \n\n\n");
						printf(" 										   ");
						scanf("%i", &opc);
						
						while(opc < 1 or opc > 2){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
							printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
						if(opc == 2){
							printf("Encerrando...");
							opc = 9;
						}
						else{
							opc = 1;
						}
					}
					
					
				break;
				
			//Reservar ou cancelar a reserva de um lugar.
				case 3:
					if(show == 1){
						
						dec = 4;
						
						while(dec == 4){
							printf("\n                                                      ");
							
							g = 0;
						
							while(g < co){
								g++;
								printf(" %c  ", hori[g]);
							}
							
							printf("\n                                                ");
							
							g = 0;
							for (i = 0; i < fi; i++){
								if(g < 10){
									printf("%i -  ", g++);
								}
								else{
									printf("%i - ", g++);
								}
								for (j = 0; j < co; j++){
									printf(" {%c}", area[i][j]);
								}
								printf("\n\n                                                ");
							}
							
							dec = 0;
							
							printf("            Informe se será efetuada a reserva ou o cancelamento da mesma: \n");
							printf("                                                                             [1] - Efetuar reserva. \n");
							printf("                                                                             [2] - Cancelar reserva. \n");
							printf("                                                                                         ");
							scanf("%i", &dec);
							
							while(dec < 1 or dec > 2){
								printf("\n                                                                      	     Entrada adulterada!!! \n");
						        printf("                                                                           Informe um número válido: ");
								scanf("%i", &dec);
							}
							if(dec == 1){
								printf("                                                           ________________________________________________________________\n\n");
								
								printf("					                                   Deseja reservar qual POLTRONA: \n");
								printf("\n                                                                                      EXEMPLO: ");
								printf("\n                                                                    Fileira-1 | Coluna-A -> Fileira-1 | Coluna-0 \n");
							
								printf("                                                                             Informe o Nº da FILEIRA: ");
								scanf("%i", &i);
								
								while(i > fi){
									printf("\n                                                                      	     Entrada adulterada!!! \n");
						            printf("                                                                           Informe um número válido: ");
									scanf("%i", &i);
								}
								
								printf("\n                                                                                 Informe a COLUNA: ");
								scanf("%i", &j); 
								
								while(j > co){
									printf("\n                                                                      	     Entrada adulterada!!! \n");
						            printf("                                                                           Informe um número válido: ");
									scanf("%i", &j);
								}
								
								if(area[i][j] == '_'){
									printf("                                                                                    Poltrona livre! \n");
									printf("                                                                   O valor para a reserva deste acento é de R$%.2f \n", reser_in);
									printf("                                                                                  Realizar pagamento? \n");
									printf("                                                                                      [1] - SIM. \n");
									printf("                                                                                      [2] - NÃO. \n");
									printf("                   	          _______________________________________________________________________________________________________________________ \n\n\n");
									printf(" 										          ");
									scanf("%i", &dec);
									
									while(dec < 1 or dec > 2){
										printf("\n                                                                      	     Entrada adulterada!!! \n");
						                printf("                                                                           Informe um número válido: ");
										scanf("%i", &dec);
									}
									
									if(dec == 1){
										printf("                                                                                PROCESSANDO...");
										printf("VERIFICANDO CREDENCIAIS...");
										printf("FINALIZANDO RESERVA...");
										printf("RESERVA REALIZADA!");
										
										srand((unsigned)time(0));
										int maior = 600;
										int menor = 100;
										int aleatorio = rand()%(maior-menor+1) + menor;
										std::cout << "Código de reserva: " << aleatorio << std::endl;
										
										codigo[i][j] = aleatorio;
										
										printf("\n                                     Apresente este código e o número de sua poltrona no dia da apresentação para poder pagar o resto de seu ingresso! \n");
										
										reservas++;
										total_arrecadado = total_arrecadado + reser_in;
										
										area[i][j] = 'X';
										
										dec = 0;
										printf("                                                                       Será realizada mais alguma compra ou reserva? \n");
										printf("                                                                                      [1] - SIM. \n");
										printf("                                                                                      [2] - NÃO. \n");
										printf("                   	          _______________________________________________________________________________________________________________________ \n\n\n");
										printf(" 										          ");
										scanf("%i", &dec);
										
										if(dec == 1){
											dec = 4;
										}
										else if(dec = 2){
											printf("                                                               (*************************¨¨¨***************************)  \n");
											printf("                                                                )                                                     ( \n");
											printf("                                                               (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
											printf("                                                                ) [2] Vender um lugar (inteira).                      (  \n");
											printf("                                                               (  [3] Vender um lugar (meia).                          ) \n");
											printf("                                                                ) [4] Verificar mapa do teatro.                       (  \n");
											printf("                                                               (  [5] Encerrar o espetáculo.                           ) \n");
											printf("                                                                )                                                     ( \n");
											printf("                               |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
											printf("                                                                      		          ");
											scanf("%i", &opc);
											
											while(opc < 1 and opc > 5){
												printf("\n                                                                      	     Entrada adulterada!!! \n");
						                        printf("                                                                           Informe um número válido: ");
												scanf("%i", &opc);
											}
											
											if(opc == 1){
												opc = 3;
											}
											else if(opc == 2){
												opc = 4;
											}
											else if(opc == 3){
												opc = 5;
											}
											else if(opc == 4){
												opc = 6;
											}
											else if(opc == 5){
												opc = 7;
											}
										}
									}
								}
								else if(area[i][j] == 'O'){
									dec = 3;
									while(dec == 3){
										printf("                                                                           Está poltona já foi comprada. \n");
										printf("                                                                          Deseja reservar outro assento? \n");
										printf("                                                                                    [1] - SIM. \n");
										printf("                                                                                    [2] - NÃO. \n");
										printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
										printf(" 										      ");
										scanf("%i", &dec);
										
										while(dec < 1 or dec > 2){
											printf("\n                                                                      	     Entrada adulterada!!! \n");
						        			printf("                                                                           Informe um número válido: ");
											scanf("%i", &dec);
										}
										
										if(dec == 1){
											dec = 4;
										}
										else{
											dec = 0;
											printf("                                                                      Será realizada mais alguma reserva? \n");
											printf("                                                                                  [1] - SIM. \n");
											printf("                                                                                  [2] - NÃO. \n");
											printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
											printf(" 										      ");
											scanf("%i", &dec);
											
											if(dec == 1){
												dec = 4;
											}
											else if(dec = 2){
												printf("                                                          (*************************¨¨¨***************************)  \n");
												printf("                                                           )                                                     ( \n");
												printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
												printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
												printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
												printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
												printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
												printf("                                                           )                                                     ( \n");
												printf("                          |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
												printf("                                                                      		     				   ");
												scanf("%i", &opc);
												
												while(opc < 1 and opc > 5){
													printf("\n                                                                      	     Entrada adulterada!!! \n");
						       						printf("                                                                           Informe um número válido: ");
													scanf("%i", &opc);
												}
												
												if(opc == 1){
													opc = 3;
												}
												else if(opc == 2){
													opc = 4;
												}
												else if(opc == 3){
													opc = 5;
												}
												else if(opc == 4){
													opc = 6;
												}
												else if(opc == 5){
													opc = 7;
												}
											}
										}
									}
								}
								else if(area[i][j] == 'X'){
									dec = 3;
									while(dec == 3){
										printf("                                                                        Esta poltrona já foi reservada. \n");
										printf("                                                                        Deseja reservar outro assento? \n");
										printf("                                                                                  [1] - SIM. \n");
										printf("                                                                                  [2] - NÃO. \n");
										printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
										printf(" 										      ");
										scanf("%i", &dec);
										
										while(dec < 1 or dec > 2){
											printf("\n                                                                      	     Entrada adulterada!!! \n");
						        			printf("                                                                           Informe um número válido: ");
											scanf("%i", &dec);
										}
										
										if(dec == 1){
											dec = 4;
										}
										else{
											dec = 0;
											printf("                                                                     Será realizada mais alguma reserva? \n");
											printf("                                                                                  [1] - SIM. \n");
											printf("                                                                                  [2] - NÃO. \n");
											printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
											printf(" 										      ");
											scanf("%i", &dec);
											
											if(dec == 1){
												dec = 4;
											}
											else if(dec = 2){
												printf("                                                          (*************************¨¨¨***************************)  \n");
												printf("                                                           )                                                     ( \n");
												printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
												printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
												printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
												printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
												printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
												printf("                                                           )                                                     ( \n");
												printf("                          |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
												printf("                                                                      		     	  ");
												scanf("%i", &opc);
												
												while(opc < 1 and opc > 5){
													printf("\n                                                                      	     Entrada adulterada!!! \n");
						        					printf("                                                                           Informe um número válido: ");
													scanf("%i", &opc);
												}
												
												if(opc == 1){
													opc = 3;
												}
												else if(opc == 2){
													opc = 4;
												}
												else if(opc == 3){
													opc = 5;
												}
												else if(opc == 4){
													opc = 6;
												}
												else if(opc == 5){
													opc = 7;
												}
											}
										}
									}
								}
							}
							else{
								dec = 0;
								
								printf("                                                                     Informe o número da fileira de sua poltrona: ");
								scanf("%i", &i);
								
								while(i > fi){
									printf("\n                                                                      	     Entrada adulterada!!! \n");
						        	printf("                                                                           Informe um número válido: ");
									scanf("%i", &i);
								}
								
								printf("                                                                      Informe o número da coluna de sua poltrona: ");
								scanf("%i", &j);
								
								while(j > co){
									printf("\n                                                                      	     Entrada adulterada!!! \n");
						        	printf("                                                                           Informe um número válido: ");
									scanf("%i", &j);
								}
								
								printf("                                                                     Informe o código de segurança dado na reserva: \n");
								scanf("%i", &n_verificacao);
								
								if(codigo[i][j] == n_verificacao){
									printf("                                                                                PROCESSANDO... \n");
									printf("BUSCANDO POLTRONA... \n");
									printf("VERIFICANDO CÓDIGO... \n");
									printf("CÓDIGO VÁLIDO! \n");
									printf("                                                              	  Deseja mesmo cancelar a reserva de sua poltrona? \n");
									printf("                                                                                     [1] - SIM. \n");
									printf("                                                                                     [2] - NÃO. \n");
									printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
									printf(" 										      ");
									scanf("%i", &dec);
									
									while(dec < 1 or dec > 2){
										printf("\n                                                                      	     Entrada adulterada!!! \n");
						        		printf("                                                                           Informe um número válido: ");
										scanf("%i", &dec);
									}
									if(dec == 1){
										printf("CANCELANDO RESERVA... \n");
										area[i][j] = '_';
										printf("RESERVA CANCELADA! \n");
										printf("Você recebeu R$%.2f \n", in);
										
										total_arrecadado = total_arrecadado - reser_in;
										reservas--;
										
										dec = 0;
										printf("                                                                      Será realizada mais alguma reserva? \n");
										printf("                                                                                  [1] - SIM. \n");
										printf("                                                                                  [2] - NÃO. \n");
										printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
										printf(" 										      ");
										scanf("%i", &dec);
										
										if(dec == 1){
											dec = 4;
										}
										else if(dec = 2){
											printf("                                                          (*************************¨¨¨***************************)  \n");
											printf("                                                           )                                                     ( \n");
											printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
											printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
											printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
											printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
											printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
											printf("                                                           )                                                     ( \n");
											printf("                          |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
											printf("                                                                      		     	  ");
											scanf("%i", &opc);
											
											while(opc < 1 and opc > 5){
												printf("\n                                                                      	     Entrada adulterada!!! \n");
						        				printf("                                                                           Informe um número válido: ");
												scanf("%i", &opc);
											}
												
											if(opc == 1){
												opc = 3;
											}
											else if(opc == 2){
												opc = 4;
											}
											else if(opc == 3){
												opc = 5;
											}
											else if(opc == 4){
												opc = 6;
											}
											else if(opc == 5){
												opc = 7;
											}
										}
									}
									else{
										printf("ENCERRANDO CANCELAMETO... \n");
										printf("CANCELAMETO ENCERRADO... \n");
										
										printf("                                                          (*************************¨¨¨***************************)  \n");
										printf("                                                           )                                                     ( \n");
										printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
										printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
										printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
										printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
										printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
										printf("                                                           )                                                     ( \n");
										printf("                          |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
										printf("                                                                      		     	  ");
										scanf("%i", &opc);
										
										while(opc < 1 and opc > 5){
											printf("\n                                                                      	     Entrada adulterada!!! \n");
						        			printf("                                                                           Informe um número válido: ");
											scanf("%i", &opc);
										}
												
										if(opc == 1){
											opc = 3;
										}
										else if(opc == 2){
											opc = 4;
										}
										else if(opc == 3){
											opc = 5;
										}
										else if(opc == 4){
											opc = 6;
										}
										else if(opc == 5){
											opc = 7;
										}
									}
								}
								else{
									printf("                                                                            CÓDIGO INVÁLIDO!!! \n");
									printf("                                                                   NÃO FOI POSSIVEL CANCELAR A RESERVA!! \n");
									printf("                                                          (*************************¨¨¨***************************)  \n");
									printf("                                                           )                                                     ( \n");
									printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
									printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
									printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
									printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
									printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
									printf("                                                           )                                                     ( \n");
									printf("                          |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
									printf("                                                                      		     	  ");
									scanf("%i", &opc);
											
									while(opc < 1 and opc > 5){
										printf("\n                                                                      	     Entrada adulterada!!! \n");
						        		printf("                                                                           Informe um número válido: ");
										scanf("%i", &opc);
									}
												
									if(opc == 1){
										opc = 3;
									}
									else if(opc == 2){
										opc = 4;
									}
									else if(opc == 3){
										opc = 5;
									}
									else if(opc == 4){
										opc = 6;
									}
									else if(opc == 5){
										opc = 7;
									}
								}
							}
						}
					}

						
					else{
						printf("									    O SHOW NÃO ESTÁ ABERTO!!! \n");
						printf("                                                                           Deseja abrir um espetáculo? \n");
						printf("                                                                                  [1] - SIM. \n");
						printf("                                                                                  [2] - NÃO. \n");
						printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
						printf(" 										      ");
						scanf("%i", &opc);
						
						while(opc < 1 or opc > 2){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
						    printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
						if(opc == 2){
							printf("Encerrando... \n");
							opc = 9;
						}
						else{
							opc = 1;
						}
					}
					
				break;
				
			//Vender um lugar (inteira).
				case 4:
					if(show == 0){
						printf("									    O SHOW NÃO ESTÁ ABERTO!!! \n");
						printf("                                                                         Deseja abrir um espetáculo? \n");
						printf("                                                                                 [1] - SIM. \n");
						printf("                                                                                 [2] - NÃO. \n");
						printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
						printf(" 										     ");
						scanf("%i", &opc);
							
						while(opc < 1 or opc > 2){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
						    printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
						if(opc == 2){
							printf("Encerrando... \n");
							opc = 9;
						}
						else{
							opc = 1;
						}
						printf("\n                                                      ");	
					}
					else if(show == 1){
						printf("                                                           ________________________________________________________\n\n");
						
						printf("					                                   Deseja comprar qual POLTRONA: \n");
						printf("\n                                                                                     EXEMPLO:  \n");
						printf("\n                                                                    Fileira-1 | Coluna-A -> Fileira-1 | Coluna-1 \n");
							
						printf("                                                                             Informe o Nº da FILEIRA: ");
						scanf("%i", &i);
						
						while(i > fi){
								printf("\n                                                                      	     Entrada adulterada!!! \n");
						        printf("                                                                           Informe um número válido: ");
								scanf("%i", &i);
							}
								
						printf("\n                                                                                 Informe a COLUNA: ");
						scanf("%i", &j);
						
						while(j > co){
								printf("\n                                                                      	     Entrada adulterada!!! \n");
						        printf("                                                                           Informe um número válido: ");
								scanf("%i", &j);
							} 
							
						if(area[i][j] == '_'){
							printf("                                                                                Poltrona livre! \n");
									
						    dec = 0;
									
								printf("                                                                  O valor da compra deste acento é de: R$%f \n", in);
								printf("                                                                             Realizar pagamento? \n");
								printf("                                                                                  [1] - SIM. \n");
								printf("                                                                                  [2] - NÃO. \n");
								printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
								printf(" 										      ");
								scanf("%i", &dec);
									
								while(dec < 1 or dec > 2){
								printf("\n                                                                      	     Entrada adulterada!!! \n");
						        printf("                                                                           Informe um número válido: ");
								scanf("%i", &dec);
							    }
									
							if(dec == 1){
								printf("                                                                                PROCESSANDO... \n");
								printf("VERIFICANDO CREDENCIAIS... \n");
								printf("FINALIZANDO COMPRA... \n");
								printf("COMPRA REALIZADA! \n");
										
								total++;		
								vendas++;
								total_arrecadado = total_arrecadado + in;
								
								area[i][j] = 'O';
								
								dec = 0;
								printf("                                                                       Será realizada mais alguma compra? \n");
								printf("                                                                                  [1] - SIM. \n");
								printf("                                                                                  [2] - NÃO. \n");
								printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
								printf(" 										      ");
								scanf("%i", &dec);
										
								if(dec == 1){
									dec = 4;
							    }
								else if(dec = 2){
									printf("                                                          (*************************¨¨¨***************************)  \n");
									printf("                                                           )                                                     ( \n");
									printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
									printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
									printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
									printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
									printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
									printf("                                                           )                                                     ( \n");
									printf("                          |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
									printf("                                                                      		     	  ");
									scanf("%i", &opc);
											
									while(opc < 1 and opc > 5){
										printf("\n                                                                      	     Entrada adulterada!!! \n");
						        		printf("                                                                           Informe um número válido: ");
										scanf("%i", &opc);
									}
											
									if(opc == 1){
										opc = 3;
									}
									else if(opc == 2){
										opc = 4;
									}
									else if(opc == 3){
										opc = 5;
									}
									else if(opc == 4){
										opc = 6;
									}
									else if(opc == 5){
										opc = 7;
									}
								}
							}
						}
						else if(area[i][j] == 'O'){
							dec = 3;
							while(dec == 3){
								printf("                                                                        Está poltona já foi comprada. \n");
								printf("                                                                        Deseja comprar outro assento? \n");
								printf("                                                                                  [1] - SIM. \n");
								printf("                                                                                  [2] - NÃO. \n");
								printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
								printf(" 										      ");
								scanf("%i", &dec);
										
								while(dec < 1 or dec > 2){
									printf("\n                                                                      	     Entrada adulterada!!! \n");
						        	printf("                                                                           Informe um número válido: ");
									scanf("%i", &dec);
								}
										
								if(dec == 1){
									dec = 4;
								}
								
								else{
									dec = 0;
									printf("                                                                       Será realizada mais alguma compra? \n");
									printf("                                                                                  [1] - SIM. \n");
									printf("                                                                                  [2] - NÃO. \n");
									printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
									printf(" 										      ");
									scanf("%i", &dec);
											
									if(dec == 1){
										dec = 4;
									}
									
									else if(dec = 2){
										printf("                                                          (*************************¨¨¨***************************)  \n");
										printf("                                                           )                                                     ( \n");
										printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
										printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
										printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
										printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
										printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
										printf("                                                           )                                                     ( \n");
										printf("                          |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
										printf("                                                                      		     	 ");
										scanf("%i", &opc);
												
										while(opc < 1 and opc > 5){
											printf("\n                                                                      	     Entrada adulterada!!! \n");
						        			printf("                                                                           Informe um número válido: ");
											scanf("%i", &opc);
										}
												
										if(opc == 1){
											opc = 3;
										}
										else if(opc == 2){
											opc = 4;
										}
										else if(opc == 3){
											opc = 5;
										}
										else if(opc == 4){
											opc = 6;
										}
										else if(opc == 5){
											opc = 7;
										}
									}
								}
							}
						}
						else if(area[i][j] == 'X'){
							dec = 3;
							while(dec == 3){
								printf("                                                                         Está poltona já foi reservada. \n");
								printf("                                                                      Você possui o código desta poltrona? \n");
								printf("                                                                                  [1] - SIM. \n");
								printf("                                                                                  [2] - NÃO. \n");
								printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
								printf(" 										      ");
								scanf("%i", &dec);
										
								while(dec < 1 or dec > 2){
									printf("\n                                                                      	     Entrada adulterada!!! \n");
						        	printf("                                                                           Informe um número válido: ");
									scanf("%i", &dec);
								}
										 
								if(dec == 1){
									printf("Informe o código: \n");
									scanf("%i", &codigo);
									
									if(n_verificacao == codigo[i][j]){
										printf("                                                                                PROCESSANDO... \n");
										printf("VERIFICANDO CÓDIGO... \n");
										printf("CÓDIGO VÁLIDO! \n");
										printf("                                                                             Valor a pagar: %i", in_compl);
										printf("                                                                            Realizar pagamento?");
										printf("                                                                           		[1] - SIM.");
										printf("                                                                           		[2] - NÃO.");
										printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
										printf(" 										      ");
										scanf("%i", &dec);
											
										while(dec < 1 or dec > 2){
											printf("\n                                                                      	     Entrada adulterada!!! \n");
						        			printf("                                                                           Informe um número válido: ");
											scanf("%i", &dec);
										}
											
										if(dec == 1){
											printf("                                                                       	Pagamento realizado!");
											
											total++;		
											vendas++;
											total_arrecadado = total_arrecadado + in_compl;
										}
										else{
											printf("                                                       Não foi possível realizar acompra desta lugar reservado.");
										}
									}
									else{
										printf("Número inválido!! \n");
										printf("                                                           Não foi possível realizar acompra desta lugar reservado.");
									}
										
								}
								else{
									printf("                                                                        Deseja comprar outro assento? \n");
									printf("                                                                               [1] - SIM. \n");
									printf("                                                                               [2] - NÃO. \n");
									printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
									printf(" 										      ");
									scanf("%i", &dec);
											
									while(dec < 1 or dec > 2){
										printf("\n                                                                      	     Entrada adulterada!!! \n");
						        		printf("                                                                           Informe um número válido: ");
										scanf("%i", &dec);
									}
											
									if(dec == 1){
										dec = 4;
									}
									else{
										dec = 0;
										printf("                                                                        Será realizada mais alguma compra? \n");
										printf("                                                                                  [1] - SIM. \n");
										printf("                                                                                  [2] - NÃO. \n");
										printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
										printf(" 										      ");
										scanf("%i", &dec);
										
										if(dec == 1){
											dec = 4;
										}
										else if(dec = 2){
											printf("                                                          (*************************¨¨¨***************************)  \n");
											printf("                                                           )                                                     ( \n");
											printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
											printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
											printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
											printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
											printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
											printf("                                                           )                                                     ( \n");
											printf("                          |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
											printf("                                                                      		     	 ");
											scanf("%i", &opc);
												
											while(opc < 1 and opc > 5){
												printf("\n                                                                      	     Entrada adulterada!!! \n");
						        				printf("                                                                           Informe um número válido: ");
												scanf("%i", &opc);
											}
											
											if(opc == 1){
												opc = 3;
											}
											else if(opc == 2){
												opc = 4;
											}
											else if(opc == 3){
												opc = 5;
											}
											else if(opc == 4){
												opc = 6;
											}
											else if(opc == 5){
												opc = 7;
											}
										}
									}
								}
							}
						}	
					}
									
				break;
			
			//Vender um lugar (meia).	
				case 5:
					if(show == 0){
						printf("									    O SHOW NÃO ESTÁ ABERTO!!! \n");
						printf("                                                                           Deseja abrir um espetáculo? \n");
						printf("                                                                                  [1] - SIM. \n");
						printf("                                                                                  [2] - NÃO. \n");
						printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
						printf(" 										      ");
						scanf("%i", &opc);
							
						while(opc < 1 or opc > 2){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
						    printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
						if(opc == 2){
							printf("Encerrando... \n");
							opc = 9;
						}
						else{
							opc = 1;
						}
						printf("\n                                                      ");	
					}
					else if(show == 1){
						printf("             ________________________________________________________\n\n");
								
						printf("					              Deseja comprar qual POLTRONA: \n");
						printf("\n                                              EXEMPLO:  \n");
						printf("\n                                         Fileira-1 | Coluna-A -> Fileira-1 | Coluna-1 \n");
							
						printf("                                        Informe o Nº da FILEIRA: \n");
						scanf("%i", &i);
						
						while(i > fi){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
						    printf("                                                                           Informe um número válido: ");
							scanf("%i", &i);
						}
								
						printf("\n                                         Informe a COLUNA: \n");
						scanf("%i", &j);
						
						while(j > co){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
						    printf("                                                                           Informe um número válido: ");
							scanf("%i", &j);
						} 
							
						if(area[i][j] == '_'){
							printf("                                         Poltrona livre! \n");
									
						    dec = 0;
									
								printf("                                                               O valor da compra deste acento é de: R$%.2f \n", meia_in);
								printf("                                                                             Realizar pagamento? \n");
								printf("                                                                                  [1] - SIM. \n");
								printf("                                                                                  [2] - NÃO. \n");
								printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
								printf(" 										      ");
								scanf("%i", &dec);
									
								while(dec < 1 or dec > 2){
								printf("\n                                                                      	     Entrada adulterada!!! \n");
						        printf("                                                                           Informe um número válido: ");
								scanf("%i", &dec);
							}
									
							if(dec == 1){
								printf("                                                                                PROCESSANDO... \n");
								printf("VERIFICANDO CREDENCIAIS... \n");
								printf("FINALIZANDO COMPRA... \n");
								printf("COMPRA REALIZADA! \n");
										
								total++;		
								vendas++;
								total_arrecadado = total_arrecadado + meia_in;
								
								area[i][j] = 'O';
								
								dec = 0;
								printf("                                                                       Será realizada mais alguma compra? \n");
								printf("                                                                                  [1] - SIM. \n");
								printf("                                                                                  [2] - NÃO. \n");
								printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
								printf(" 										      ");
								scanf("%i", &dec);
										
								if(dec == 1){
									dec = 4;
								}
								else if(dec = 2){
									printf("                                                          (*************************¨¨¨***************************)  \n");
									printf("                                                           )                                                     ( \n");
									printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
									printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
									printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
									printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
									printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
									printf("                                                           )                                                     ( \n");
									printf("                          |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
									printf("                                                                      		     	  ");
									scanf("%i", &opc);
											
									while(opc < 1 and opc > 5){
										printf("\n                                                                      	     Entrada adulterada!!! \n");
						        		printf("                                                                           Informe um número válido: ");
										scanf("%i", &opc);
									}
											
									if(opc == 1){
										opc = 3;
									}
									else if(opc == 2){
										opc = 4;
									}
									else if(opc == 3){
										opc = 5;
									}
									else if(opc == 4){
										opc = 6;
									}
									else if(opc == 5){
										opc = 7;
									}
								}
							}
						}
						else if(area[i][j] == 'O'){
							dec = 3;
							while(dec == 3){
								printf("                                                                          Esta poltrona já foi comprada. \n");
								printf("                                                                           Deseja comprar outro assento? \n");
								printf("                                                                                  [1] - SIM. \n");
								printf("                                                                                  [2] - NÃO. \n");
								printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
								printf(" 										      ");
								scanf("%i", &dec);
										
								while(dec < 1 or dec > 2){
									printf("\n                                                                      	     Entrada adulterada!!! \n");
						        	printf("                                                                           Informe um número válido: ");
									scanf("%i", &dec);
								}
										
								if(dec == 1){
									dec = 4;
								}
								else{
									dec = 0;
									printf("                                                                       Será realizada mais alguma compra? \n");
									printf("                                                                                  [1] - SIM. \n");
									printf("                                                                                  [2] - NÃO. \n");
									printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
									printf(" 										      ");
									scanf("%i", &dec);
											
									if(dec == 1){
										dec = 4;
									}
									else if(dec = 2){
										printf("                                                          (*************************¨¨¨***************************)  \n");
										printf("                                                           )                                                     ( \n");
										printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
										printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
										printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
										printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
										printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
										printf("                                                           )                                                     ( \n");
										printf("                          |------------------------------ (**************************¨¨¨**************************) --------------------------------| \n");
										printf("                                                                      		     				   ");
										scanf("%i", &opc);
												
										while(opc < 1 and opc > 5){
											printf("\n                                                                      	     Entrada adulterada!!! \n");
						        			printf("                                                                           Informe um número válido: ");
											scanf("%i", &opc);
										}
												
										if(opc == 1){
											opc = 3;
										}
										else if(opc == 2){
											opc = 4;
										}
										else if(opc == 3){
											opc = 5;
										}
										else if(opc == 4){
											opc = 6;
										}
										else if(opc == 5){
											opc = 7;
										}
									}
								}
							}
						}
						else if(area[i][j] == 'X'){
							dec = 3;
							while(dec == 3){
								printf("                                                                         Está poltrona já foi resrvada. \n");
								printf("                                                                          Deseja comprar outro assento? \n");
								printf("                                                                                  [1] - SIM. \n");
								printf("                                                                                  [2] - NÃO. \n");
								printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
								printf(" 										      ");
								scanf("%i", &dec);
										
								while(dec < 1 or dec > 2){
									printf("\n                                                                      	     Entrada adulterada!!! \n");
						        	printf("                                                                           Informe um número válido: ");
									scanf("%i", &dec);
								}
										
								if(dec == 1){
									dec = 4;
								}
								else{
									dec = 0;
									printf("                                                                        Será realizada mais alguma compra? \n");
									printf("                                                                                  [1] - SIM. \n");
									printf("                                                                                  [2] - NÃO. \n");
									printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
									printf(" 										      ");
									scanf("%i", &dec);
									
									if(dec == 1){
										dec = 4;
									}
									else if(dec = 2){
										printf("                                                          (*************************¨¨¨***************************)  \n");
										printf("                                                           )                                                     ( \n");
										printf("                                                          (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
										printf("                                                           ) [2] Vender um lugar (inteira).                      (  \n");
										printf("                                                          (  [3] Vender um lugar (meia).                          ) \n");
										printf("                                                           ) [4] Verificar mapa do teatro.                       (  \n");
										printf("                                                          (  [5] Encerrar o espetáculo.                           ) \n");
										printf("                                                           )                                                     ( \n");
										printf("                          |------------------------------ (**************************¨¨¨**************************) --------------------------------| \n");
										printf("                                                                      		     				   ");
										scanf("%i", &opc);
											
										while(opc < 1 and opc > 5){
											printf("\n                                                                      	     Entrada adulterada!!! \n");
						        			printf("                                                                           Informe um número válido: ");
											scanf("%i", &opc);
										}
										
										if(opc == 1){
											opc = 3;
										}
										else if(opc == 2){
											opc = 4;
										}
										else if(opc == 3){
											opc = 5;
										}
										else if(opc == 4){
											opc = 6;
										}
										else if(opc == 5){
											opc = 7;
										}
									}
								}
							}
						}
					}
					
				break;
				
			//Verificar mapa do teatro.
				case 6:
					if(show == 0){
						printf("									    O SHOW NÃO ESTÁ ABERTO!!! \n");
						printf("                                                                           Deseja abrir um espetáculo? \n");
						printf("                                                                                  [1] - SIM. \n");
						printf("                                                                                  [2] - NÃO. \n");
						printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
						printf(" 										      ");
						scanf("%i", &opc);
							
						while(opc < 1 or opc > 2){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
						    printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
						if(opc == 2){
							printf("Encerrando...");
							opc = 9;
						}
						else{
							opc = 1;
						}
						printf("\n                                                      ");	
					}
					else if(show == 1){
						printf("\n                                                      ");	
						
						g = 0;
						while(g < co){
							g++;
							printf(" %c  ", hori[g]);
						}
						
						printf("\n                                                ");
						
						g = 0;
						for (i = 0; i < fi; i++){
							if(g < 10){
								printf("%i -  ", g++);
							}
							else{
								printf("%i - ", g++);
							}
							for (j = 0; j < co; j++){
								printf(" {%c}", area[i][j]);
							}
						printf("\n\n                                                ");
						}
						
						printf("             _________________________________________________________\n\n");
						printf("                                                             (*************************¨¨¨***************************)  \n");
						printf("                                                              )                                                     ( \n");
						printf("                                                             (  [1] Reservar ou cancelar a reserva de um lugar.      ) \n");
						printf("                                                              ) [2] Vender um lugar (inteira).                      (  \n");
						printf("                                                             (  [3] Vender um lugar (meia).                          ) \n");
						printf("                                                              ) [4] Verificar mapa do teatro.                       (  \n");
						printf("                                                             (  [5] Encerrar o espetáculo.                           ) \n");
						printf("                                                              )                                                     ( \n");
						printf("                             |------------------------------ ( ************************¨¨¨************************** ) --------------------------------| \n");
						printf("                                                                      		        ");
						scanf("%i", &opc);
											
						while(opc < 1 and opc > 5){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
						    printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
												
						if(opc == 1){
							opc = 3;
						}
						else if(opc == 2){
							opc = 4;
						}
						else if(opc == 3){
							opc = 5;
						}
						else if(opc == 4){
							opc = 6;
						}
						else if(opc == 5){
							opc = 7;
						}
					}		
					
				break;
				
			//Encerrar o espetáculo.
				case 7:
					if(show == 0){
						printf("									    O SHOW NÃO ESTÁ ABERTO!!! \n");
						printf("                                                                           Deseja abrir um espetáculo? \n");
						printf("                                                                                  [1] - SIM. \n");
						printf("                                                                                  [2] - NÃO. \n");
						printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
						printf(" 										      ");
						scanf("%i", &opc);
							
						while(opc < 1 or opc > 2){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
						    printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
						if(opc == 2){
							printf("Encerrando...");
							opc = 9;
						}
						else{
							opc = 1;
						}
						printf("\n                                                      ");	
					}
					else if(show == 1){
						if(total >= total_esperado){
							printf("                                                                   Pela grande venda de ingressos, o show já pode começar! \n");
							printf("                                                                  Deseja iniciar o show ou continuar a venda de ingressos?");
							printf("                                                                                  [1] - COMEÇAR SHOW. \n");
		 					printf("                                                                              [2] - VENDER MAIS INGRESSOS. \n");
		 					printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
							printf(" 										      ");
							scanf("%i", &opc);
							
							while(opc < 1 or opc > 2){
								printf("\n                                                                      	     Entrada adulterada!!! \n");
						        printf("                                                                           Informe um número válido: ");
								scanf("%i", &opc);
							}
							if(opc == 1){
								printf("Encerrando...");
								opc = 8;
							}
							else{
								opc = 3;
							}
							printf("\n                                                      ");	
							}
							else if(total < total_esperado){
								printf("                                                        	Devido à falta de lugares vendidos, o espetáculo não pode começar! \n");
								falta = total_esperado - total;
								printf("                                                      	  Para que o show possa continuar é necessário vender mais %i ingressos. \n\n\n", falta);
								opc = 2;
							}	
						}
				break;
				
			//Verificar parciais.
				case 8:
					if(show == 0){
						printf("									    O SHOW NÃO ESTÁ ABERTO!!! \n");
						printf("                                                                           Deseja abrir um espetáculo? \n");
						printf("                                                                                  [1] - SIM. \n");
						printf("                                                                                  [2] - NÃO. \n");
						printf("                   	    _______________________________________________________________________________________________________________________ \n\n\n");
						printf(" 										      ");
						scanf("%i", &opc);
							
						while(opc < 1 or opc > 2){
							printf("\n                                                                      	     Entrada adulterada!!! \n");
						    printf("                                                                           Informe um número válido: ");
							scanf("%i", &opc);
						}
						if(opc == 2){
							printf("Encerrando...");
							opc = 9;
						}
						else{
							opc = 1;
						}
						printf("\n                                                      ");	
					}
					else if(show == 1){
						livres = (co * fi) - (vendas + reservas);
						printf("Lugares reservados: %i \n", reservas);
						printf("Lugares livres: %i \n", livres);
						printf("Lugares vendidos: %i \n", vendas);
						printf("Dinheiro arrecadado: %i \n", total_arrecadado);
						printf("Lugares que faltam para iniciar o espetaculo: %i \n", falta);
						opc = 10;
					}
				break;
			
			//Encerrar.	
				case 9:
					
					exit = 1;
					
				break;
				
			//Extra.
				case 10:
					
					for(int cont=0; cont < 50; cont++){
						printf("           *          .        *      ¨           ..      ''");
						printf("              ¨          **       .              ¨           ..      ''");
						printf("             *    o          .      .        .. ''");
						printf("          o          .            . ..      .           .");
						opc = 9;
					}
					for(int cont=0; cont < 50; cont++){
						printf(" \       \     \\      *           \    \     ");
						printf("  \       \     \*            \     \    \    ");
						printf("   \       *     * \           \     *    \   ");
						printf("    *               *           *          *  ");
						opc = 9;
					}
					while(cont < 1){
						printf("\nO \n");
						printf("B \n");
						printf("R \n");
						printf("I \n");
						printf("G \n");
						printf("A \n");
						printf("D \n");
						printf("O \n");
						printf("  \n");
						printf("P \n");
						printf("O \n");
						printf("R \n");
						printf("  \n");
						printf("A \n");
						printf("S \n");
						printf("S \n");
						printf("I \n");
						printf("S \n");
						printf("T \n");
						printf("I \n");
						printf("R \n");
						printf("! \n");
						cont++;
					}
					
				break;	
				
				default :
					
				printf("Número Inválido. \n");
				
				break;
			}
		}
	}

