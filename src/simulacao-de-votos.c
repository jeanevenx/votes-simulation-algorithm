#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu();
int main() {
setlocale(LC_ALL, "Portuguese");
	int escolha=0, i=1, votosVereador, votosPrefeito;
	int vereador_Joao_do_Frete=0, vereador_Maria_da_Pamonha=0, Vereador_Ze_da_Farmacia=0, votos_Nulos_vereador=0;
	int prefeito_Dr_Zureta=0, prefeito_Senhor_Gomes=0, votos_Nulos_prefeito=0;
	
 	menu();
 	scanf("%d",&escolha);
	fflush(stdin);
	system("cls");

	while(i > 0)
	{	i++;
	
			if(escolha==1)
			{
				printf("Digite o número correspondente para votar.\n-------------------------------------\nQual seu voto para vereador?\n");
				printf("111 - Vereador Joao do Frete\n");
				printf("222 - Vereador Maria da Pamonha\n");
				printf("333 - Vereador Ze da Farmacia\n");
				printf("444 - Voto Nulo\n-----------------------------------\n");
				scanf("%d", &votosVereador);
				fflush(stdin);

				switch(votosVereador)
				{
				 	case 111:
						printf("Voto computado!\n");
						vereador_Joao_do_Frete = vereador_Joao_do_Frete + 1;	
						break;
					case 222:
					printf("Voto computado!\n");
						vereador_Maria_da_Pamonha = vereador_Maria_da_Pamonha + 1;
						break;
					case 333:
						printf("Voto computado!\n");
						Vereador_Ze_da_Farmacia = Vereador_Ze_da_Farmacia + 1;
						break;
					case 444:
						printf("Voto computado!\n");
						votos_Nulos_vereador = votos_Nulos_vereador + 1;
						break;
					default:
						printf("Número inválido, seu voto foi inválidado.\n\n");
						menu();
						scanf("%d",&escolha);
						fflush(stdin);
						system("cls");
						
				}
					if ((votosVereador == 111) || (votosVereador == 222) || (votosVereador == 333) || (votosVereador == 444))
					{
					
						printf("-----------------------------------\nQual seu voto para Prefeito?\n");
						printf("11 - Prefeito Dr. Zureta\n");
						printf("22 - Prefeito Senhor Gomes\n");
						printf("44 - Voto Nulo\n-----------------------------------\n");
						scanf("%d", &votosPrefeito);  
						fflush(stdin);
		
						switch(votosPrefeito)
						{
						 	case 11:
								printf("Voto computado!\n");
								printf("---------------------------\n");
								prefeito_Dr_Zureta = prefeito_Dr_Zureta + 1;
								break;
							case 22:
								printf("Voto computado!\n");
								printf("---------------------------\n");
								prefeito_Senhor_Gomes = prefeito_Senhor_Gomes + 1;
								break;
							case 44:
								printf("Voto computado!\n");
								printf("---------------------------\n");
								votos_Nulos_prefeito = votos_Nulos_prefeito + 1;
								break;
							default:
								printf("Número inválido, seu voto foi inválidado.\n\n");
								menu();
								scanf("%d",&escolha);
								fflush(stdin);
								system("cls");
											
						}
						}
				
				if (((votosVereador == 111) || (votosVereador == 222) || (votosVereador == 333) || (votosVereador == 444)) && ((votosPrefeito == 11) ||
				   (votosPrefeito == 22) || (votosPrefeito == 44)))
				{
					menu();
					scanf("%d",&escolha);
					fflush(stdin);
					system("cls");	
				}	
				
			} else if(escolha==2)
			{
				//Apuração dos votos
				printf("Resultado final...\n\n");
				printf("---------------------------\nApuraçâo vereador.\n");
				printf("Vereador Joao do Frete:%d votos\n", vereador_Joao_do_Frete);
				printf("Vereador Maria da Pamonha:%d votos\n", vereador_Maria_da_Pamonha);
				printf("Vereador Ze da Farmacia:%d votos\n", Vereador_Ze_da_Farmacia);
				printf("Voto Nulo:%d votos\n", votos_Nulos_vereador);
				printf("---------------------------\n");
				printf("Apuraçâo prefeitos.\n\n");
				printf("Prefeito Dr. Zureta:%d votos\n", prefeito_Dr_Zureta);
				printf("Prefeito Senhor Gomes:%d votos\n", prefeito_Senhor_Gomes);
				printf("Voto Nulo:%d votos\n", votos_Nulos_prefeito);
				printf("---------------------------\n");
				menu();
				scanf("%d",&escolha);
				fflush(stdin);
				system("cls");
				
			} else if(escolha==3){exit(0);} 
	}
	
					
			return 0;
		}
		
		void menu()
		{
			int i=0;
			char *menu[]=
			{
				"1 - Votar",
				"2 - Apuração dos votos",
				"3 - Sair"
			};
			
			printf("O que você deseja fazer?\n");
				for(i=0; i<3; i++)
			 	{
					printf("%s\n", menu[i]);
				}
			
		}
