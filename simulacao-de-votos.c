#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu();
int main() {
setlocale(LC_ALL, "Portuguese");
	int escolha=0, i=1, Vevotos, Pvotos;
	int vJF=0, vMP=0, vZF=0, pDZ=0, pSG=0, vNv=0, vNp=0;
	
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
				scanf("%d", &Vevotos);
				fflush(stdin);

				switch(Vevotos)
				{
				 	case 111:
						printf("Voto computado!\n");
						vJF = vJF + 1;	
						break;
					case 222:
					printf("Voto computado!\n");
						vMP = vMP + 1;
						break;
					case 333:
						printf("Voto computado!\n");
						vZF = vZF + 1;
						break;
					case 444:
						printf("Voto computado!\n");
						vNv = vNv + 1;
						break;
					default:
						printf("Número inválido, seu voto foi inválidado.\n\n");
						menu();
						scanf("%d",&escolha);
						fflush(stdin);
						system("cls");
						
				}
					if ((Vevotos == 111) || (Vevotos == 222) || (Vevotos == 333) || (Vevotos == 444))
					{
					
						printf("-----------------------------------\nQual seu voto para Prefeito?\n");
						printf("11 - Prefeito Dr. Zureta\n");
						printf("22 - Prefeito Senhor Gomes\n");
						printf("44 - Voto Nulo\n-----------------------------------\n");
						scanf("%d", &Pvotos);  
						fflush(stdin);
		
						switch(Pvotos)
						{
						 	case 11:
								printf("Voto computado!\n");
								printf("---------------------------\n");
								pDZ = pDZ + 1;
								break;
							case 22:
								printf("Voto computado!\n");
								printf("---------------------------\n");
								pSG = pSG + 1;
								break;
							case 44:
								printf("Voto computado!\n");
								printf("---------------------------\n");
								vNp = vNp + 1;
								break;
							default:
								printf("Número inválido, seu voto foi inválidado.\n\n");
								menu();
								scanf("%d",&escolha);
								fflush(stdin);
								system("cls");
											
						}
						}
				
				if (((Vevotos == 111) || (Vevotos == 222) || (Vevotos == 333) || (Vevotos == 444)) && ((Pvotos == 11) ||
				   (Pvotos == 22) || (Pvotos == 44)))
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
				printf("Vereador Joao do Frete:%d votos\n", vJF);
				printf("Vereador Maria da Pamonha:%d votos\n", vMP);
				printf("Vereador Ze da Farmacia:%d votos\n", vZF);
				printf("Voto Nulo:%d votos\n", vNv);
				printf("---------------------------\n");
				printf("Apuraçâo prefeitos.\n\n");
				printf("Prefeito Dr. Zureta:%d votos\n", pDZ);
				printf("Prefeito Senhor Gomes:%d votos\n", pSG);
				printf("Voto Nulo:%d votos\n", vNp);
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
