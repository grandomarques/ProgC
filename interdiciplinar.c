//Aluno: Vinicius Grando Marques RGM: 1946553-0 | Renato Vaz Domingues Jr RGM: 1945439-2 
//Prof: Jos� Luis Pagotto
//Disciplina: Programa��o de Computadores
//Programa para Calculo de M�dia de Notas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

main () 
{

	setlocale(LC_ALL, "Portuguese");
	float media;
	float n1,n2;
	char nome_aluno[100]; 
	char disciplina[100];
	int resposta;
	int flag = 0;
	int opcao;
	
	
	while (flag == 0) 
	{
		
		printf("                 |/============ SELECIONE A MATERIA ================|\n"); //Menu
		printf("                 ||=================================================|\n");
		printf("                 || [1] SISTEMAS OPERACIONAIS                       |\n");
		printf("                 || [2] L�NGUA PORTUGUESA                           |\n");
		printf("                 || [3] APLICA��ES PARA INTERNET                    |\n");
		printf("                 || [4] ORGANIZA��O E ARQUITETURA DE COMPUTADORES   |\n");
		printf("                 || [5] PROGRAMA��O DE COMPUTADORES                 |\n");
		printf("                 || [6] ENGENHARIA DE REQUISITOS                    |\n");
		printf("                 || [7] FUNDAMENTOS DE SISTEMAS DE INFORMA��O       |\n");
		printf("                 || [8] INTERFACE HUMANO-COMPUTADOR                 |\n");
		printf("                 || [9] MODELAGEM DE NEG�CIOS                       |\n");
		printf("                 ||[10] SAIR                                        |\n");
		printf("                 ||================================================/|\n");
		printf("                 ||Escolha uma opc�o: "); //Selecao da Materia
		scanf("%i", &opcao);
		fflush(stdin); //Limpa Buffer do Teclado
		system("cls"); //Limpa a Tela
			
		if (opcao == 10)
		{
			printf("|=================================|\n");
			printf("|        At� a Prox�ma :)         |\n");
			printf("|            Obrigado!            |\n");
			printf("|=================================|\n\n");
			return 0;
		}
		
		printf("                 |=====>Digite o Nome do Aluno: "); //Nome do Aluno
		scanf("%[^\n]", &nome_aluno);
		fflush(stdin); //Limpa Buffer do Teclado
		system("cls"); //Limpa a Tela
	
		printf("                 |=====>Digite a nota da Avalia��o A1<=====|\n"); //Nota A1
		printf("                 |=====>Valor 0 a 5,0<=====================|\n");
		scanf("%4f", &n1);
		system("cls"); //Limpa a Tela
			if (n1 < 0 || n1 > 5)
			{
				printf("                 |===============================================|\n");
				printf("                 |========>Nota M�xima de A1 Excedida!!!<========|\n"); //Mensagem de Erro!
				printf("                 |===============================================|\n");
				system("pause");
				return 0;
				system("cls");//Limpa a Tela
			}
	
		printf("                 |=====>Digite a nota da Avalia��o A2<=====|\n"); //Nota A2
		printf("                 |=====>Valor 0 a 5,0<=====================|\n");
		scanf("%4f", &n2);
		system("cls"); //Limpa a Tela
			if (n2 < 0 || n2 > 5)
			{
				printf("                 |===============================================|\n");
				printf("                 |========>Nota M�xima de A2 Excedida!!!<========|\n"); //Mensagem de Erro!
				printf("                 |===============================================|\n");
				system("pause");
				return 0;
				system("cls");//Limpa a Tela
			}
			
	    media =(n1+n2); //Calculo
		if (opcao == 1) if (media >=6) //SISTEMAS OPERACIONAIS
		{
			printf("|==============================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>APROVADO EM: SISTEMAS OPERACIONAIS<=====|\n");
			printf("|=====>NOTA: %.2f<=============================|\n", media);
			printf("|==============================================|\n");
		}
		else
		{
			printf("|==============================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>REPROVADO EM: SISTEMAS OPERACIONAIS<====|\n");
			printf("|=====>NOTA: %.2f<=============================|\n", media);
			printf("|==============================================|\n");
		}
	
		else if (opcao == 2) if (media >=6) //L�NGUA PORTUGUESA
		{
			printf("|==============================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>APROVADO EM: L�NGUA PORTUGUESA<=========|\n");
			printf("|=====>NOTA: %.2f<=============================|\n", media);
			printf("|==============================================|\n");
		}
		else
		{
			printf("|==============================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>REPROVADO EM: L�NGUA PORTUGUESA<========|\n");
			printf("|=====>NOTA: %.2f<=============================|\n", media);
			printf("|==============================================|\n");
		}
							
		else if (opcao == 3) if (media >=6) //APLICA��ES PARA INTERNET
		{
			printf("|==============================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>APROVADO EM: APLICA��ES PARA INTERNET<==|\n");
			printf("|=====>NOTA: %.2f<=============================|\n", media);
			printf("|==============================================|\n");
		}
		else
		{
			printf("|==============================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>REPROVADO EM: APLICA��ES PARA INTERNET<=|\n");
			printf("|=====>NOTA: %.2f<=============================|\n", media);
			printf("|==============================================|\n");
		}
		
		else if (opcao == 4) if (media >=6) //ORGANIZA��O E ARQUITETURA DE COMPUTADORES
		{
			printf("|==============================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>APROVADO EM: ORGANIZA��O E ARQUITETURA DE COMPUTADORES<=|\n");
			printf("|=====>NOTA: %.2f<=============================================|\n", media);
			printf("|==============================================================|\n");
		}
		else
		{
			printf("|===============================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>REPROVADO EM: ORGANIZA��O E ARQUITETURA DE COMPUTADORES<=|\n");
			printf("|=====>NOTA: %.2f<==============================================|\n", media);
			printf("|===============================================================|\n");
		}
		
		else if (opcao == 5) if (media >=6) //PROGRAMA��O DE COMPUTADORES
		{
			printf("|==============================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>APROVADO EM: PROGRAMA��O DE COMPUTADORES<===============|\n");
			printf("|=====>NOTA: %.2f<=============================================|\n", media);
			printf("|==============================================================|\n");
		}
		else
		{
			printf("|=========================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>REPROVADO EM: PROGRAMA��O DE COMPUTADORES<=========|\n");
			printf("|=====>NOTA: %.2f<========================================|\n", media);
			printf("|=========================================================|\n");
		}
		
		else if (opcao == 6) if (media >=6) //ENGENHARIA DE REQUISITOS
		{
			printf("|=======================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>APROVADO EM: ENGENHARIA DE REQUISITOS<===========|\n");
			printf("|=====>NOTA: %.2f<======================================|\n", media);
			printf("|=======================================================|\n");
		}
		else
		{
			printf("|==================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>REPROVADO EM: ENGENHARIA DE REQUISITOS<=====|\n");
			printf("|=====>NOTA: %.2f<=================================|\n", media);
			printf("|==================================================|\n");
		}
		
		else if (opcao == 7) if (media >=6) //FUNDAMENTOS DE SISTEMAS DE INFORMA��O
		{
			printf("|==============================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>APROVADO EM: FUNDAMENTOS DE SISTEMAS DE INFORMA��O<=====|\n");
			printf("|=====>NOTA: %.2f<=============================================|\n", media);
			printf("|==============================================================|\n");
		}
		else
		{
			printf("|===============================================================|\n");
			printf("|=====>ALUNO: %s\n<====", nome_aluno);
			printf("|=====>REPROVADO EM: FUNDAMENTOS DE SISTEMAS DE INFORMA��O<=====|\n");
			printf("|=====>NOTA: %.2f<==============================================|\n", media);
			printf("|===============================================================|\n");
		}
		
		else if (opcao == 8) if (media >=6) //INTERFACE HUMANO-COMPUTADOR
		{
			printf("|==========================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>APROVADO EM: INTERFACE HUMANO-COMPUTADOR<===========|\n");
			printf("|=====>NOTA: %.2f<=========================================|\n", media);
			printf("|==========================================================|\n");
		}
		else
		{
			printf("|=======================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>REPROVADO EM: INTERFACE HUMANO-COMPUTADOR<=======|\n");
			printf("|=====>NOTA: %.2f<======================================|\n", media);
			printf("|=======================================================|\n");
		}
		
		else if (opcao == 9) if (media >=6) //MODELAGEM DE NEG�CIOS
		{
			printf("|================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>APROVADO EM: MODELAGEM DE NEG�CIOS<=======|\n");
			printf("|=====>NOTA: %.2f<===============================|\n", media);
			printf("|================================================|\n");
		}
		else
		{
			printf("|================================================|\n");
			printf("|=====>ALUNO: %s<====\n", nome_aluno);
			printf("|=====>REPROVADO EM: MODELAGEM DE NEG�CIOS<======|\n");
			printf("|=====>NOTA: %.2f<===============================|\n", media);
			printf("|================================================|\n");
		}
		
	
	
		system("pause\n"); //Op��es de Sa�da
		system("cls"); //Limpa a Tela
	        
	 	printf("|============================|\n");
	 	printf("|        Deseja Sair?        |\n");
	 	printf("|       [1] SIM [2] N�O      |\n");
		printf("|============================|\n");
		scanf("%i", &resposta);
		fflush(stdin);
		system("cls");//Limpa a Tela
		
		if (resposta == 2) 
		{
			flag = 0;
			system("cls");
		}
		else
		{
			printf("|=================================|\n");
			printf("|        At� a Prox�ma :)         |\n");
			printf("|            Obrigado!            |\n");
			printf("|=================================|\n");
			flag = 1;
		}
		
	}

}

		

 	




