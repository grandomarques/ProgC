//Alunos: Vinicius Grando Marques RGM: 1946553-0 | Renato Vaz Domingues Jr RGM: 1945439-2 
//Prof: José Luis Pagotto
//Disciplina: Programação de Computadores
//Programa para Cálculo de Média de Notas

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
		
		printf("\t\t|/============ SELECIONE A MATERIA ================|\n"); //Menu
		printf("\t\t||=================================================|\n");
		printf("\t\t|| [1] SISTEMAS OPERACIONAIS                       |\n");
		printf("\t\t|| [2] LÍNGUA PORTUGUESA                           |\n");
		printf("\t\t|| [3] APLICAÇÕES PARA INTERNET                    |\n");
		printf("\t\t|| [4] ORGANIZAÇÃO E ARQUITETURA DE COMPUTADORES   |\n");
		printf("\t\t|| [5] PROGRAMAÇÃO DE COMPUTADORES                 |\n");
		printf("\t\t|| [6] ENGENHARIA DE REQUISITOS                    |\n");
		printf("\t\t|| [7] FUNDAMENTOS DE SISTEMAS DE INFORMAÇÃO       |\n");
		printf("\t\t|| [8] INTERFACE HUMANO-COMPUTADOR                 |\n");
		printf("\t\t|| [9] MODELAGEM DE NEGÓCIOS                       |\n");
		printf("\t\t||[10] SAIR                                        |\n");
		printf("\t\t||================================================/|\n");
		printf("\t\t||Escolha uma opcão: "); //Selecao da Materia
		scanf("%i", &opcao);
		fflush(stdin); //Limpa Buffer do Teclado
			
			
		if (opcao >= 10 || opcao <= 0)
		{
			
			flag = 0;
			printf("\t\t||==========Selecione Uma Opção Valida!!!==========|\n\t\t");
		
		}
		else
		{	
			printf("\t\t||=====>Digite o Nome do Aluno: "); //Nome do Aluno
			scanf("%[^\n]", &nome_aluno);
			fflush(stdin); //Limpa Buffer do Teclado
			system("cls"); //Limpa a Tela
		
		A1:// Ciclo A1
			
			system("cls"); //Limpa a Tela
			printf("\t\t|==========================================|\n");
			printf("\t\t|=====>Digite a nota da Avaliação A1<======|\n"); //Nota A1
			printf("\t\t|=====>Valor 0 a 5,0<======================|\n");
			printf("\t\t|=====>");
			scanf("%4f", &n1);
			system("cls"); //Limpa a Tela
			fflush(stdin); //Limpa Buffer do Teclado
			
			if (n1 < 0 || n1 > 5)
			{
				printf("\t\t|==========================================|\n");
				printf("\t\t|=======>Digite um Valor Valido!!!<========|\n"); //Mensagem de Erro!
				printf("\t\t|==========================================|\n\t\t");
				system("pause\t\t");
				goto A1;
				system("cls"); //Limpa a Tela
			}
		
		A2:// Ciclo A2
		
			system("cls"); //Limpa a Tela
			printf("\t\t|==========================================|\n");
			printf("\t\t|=====>Digite a nota da Avaliação A2<======|\n"); //Nota A2
			printf("\t\t|=====>Valor 0 a 5,0<======================|\n");
			printf("\t\t|=====>");
			scanf("%4f", &n2);
			system("cls"); //Limpa a Tela
			fflush(stdin); //Limpa Buffer do Teclado
			
			if (n2 < 0 || n2 > 5)
			{
				printf("\t\t|==========================================|\n");
				printf("\t\t|=======>Digite um Valor Valido!!!<========|\n"); //Mensagem de Erro!
				printf("\t\t|==========================================|\n\t\t");
				system("pause\t\t");
				goto A2;
				system("cls"); //Limpa a Tela
			}
		}
			
	    media =(n1+n2); //Calculo
		if (opcao == 1) if (media >=6) //SISTEMAS OPERACIONAIS
		{
			printf("\t\t|==============================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>APROVADO EM: SISTEMAS OPERACIONAIS<=====|\n");
			printf("\t\t|=====>NOTA: %.2f<=============================|\n", media);
			printf("\t\t|==============================================|\n\t\t");
		}
		else
		{
			printf("\t\t|==============================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>REPROVADO EM: SISTEMAS OPERACIONAIS<====|\n");
			printf("\t\t|=====>NOTA: %.2f<=============================|\n", media);
			printf("\t\t|==============================================|\n\t\t");
		}
	
		else if (opcao == 2) if (media >=6) //LÍNGUA PORTUGUESA
		{
			printf("\t\t|==============================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>APROVADO EM: LÍNGUA PORTUGUESA<=========|\n");
			printf("\t\t|=====>NOTA: %.2f<=============================|\n", media);
			printf("\t\t|==============================================|\n\t\t");
		}
		else
		{
			printf("\t\t|==============================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>REPROVADO EM: LÍNGUA PORTUGUESA<========|\n");
			printf("\t\t|=====>NOTA: %.2f<=============================|\n", media);
			printf("\t\t|==============================================|\n\t\t");
		}
							
		else if (opcao == 3) if (media >=6) //APLICAÇÕES PARA INTERNET
		{
			printf("\t\t|==============================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>APROVADO EM: APLICAÇÕES PARA INTERNET<==|\n");
			printf("\t\t|=====>NOTA: %.2f<=============================|\n", media);
			printf("\t\t|==============================================|\n\t\t");
		}
		else
		{
			printf("\t\t|==============================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>REPROVADO EM: APLICAÇÕES PARA INTERNET<=|\n");
			printf("\t\t|=====>NOTA: %.2f<=============================|\n", media);
			printf("\t\t|==============================================|\n\t\t");
		}
		
		else if (opcao == 4) if (media >=6) //ORGANIZAÇÃO E ARQUITETURA DE COMPUTADORES
		{
			printf("\t\t|==============================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>APROVADO EM: ORGANIZAÇÃO E ARQUITETURA DE COMPUTADORES<=|\n");
			printf("\t\t|=====>NOTA: %.2f<=============================================|\n", media);
			printf("\t\t|==============================================================|\n\t\t");
		}
		else
		{
			printf("\t\t|===============================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>REPROVADO EM: ORGANIZAÇÃO E ARQUITETURA DE COMPUTADORES<=|\n");
			printf("\t\t|=====>NOTA: %.2f<==============================================|\n", media);
			printf("\t\t|===============================================================|\n\t\t");
		}
		
		else if (opcao == 5) if (media >=6) //PROGRAMAÇÃO DE COMPUTADORES
		{
			printf("\t\t|==============================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>APROVADO EM: PROGRAMAÇÃO DE COMPUTADORES<===============|\n");
			printf("\t\t|=====>NOTA: %.2f<=============================================|\n", media);
			printf("\t\t|==============================================================|\n\t\t");
		}
		else
		{
			printf("\t\t|=========================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>REPROVADO EM: PROGRAMAÇÃO DE COMPUTADORES<=========|\n");
			printf("\t\t|=====>NOTA: %.2f<========================================|\n", media);
			printf("\t\t|=========================================================|\n\t\t");
		}
		
		else if (opcao == 6) if (media >=6) //ENGENHARIA DE REQUISITOS
		{
			printf("\t\t|=======================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>APROVADO EM: ENGENHARIA DE REQUISITOS<===========|\n");
			printf("\t\t|=====>NOTA: %.2f<======================================|\n", media);
			printf("\t\t|=======================================================|\n\t\t");
		}
		else
		{
			printf("\t\t|==================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>REPROVADO EM: ENGENHARIA DE REQUISITOS<=====|\n");
			printf("\t\t|=====>NOTA: %.2f<=================================|\n", media);
			printf("\t\t|==================================================|\n\t\t");
		}
		
		else if (opcao == 7) if (media >=6) //FUNDAMENTOS DE SISTEMAS DE INFORMAÇÃO
		{
			printf("\t\t|==============================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>APROVADO EM: FUNDAMENTOS DE SISTEMAS DE INFORMAÇÃO<=====|\n");
			printf("\t\t|=====>NOTA: %.2f<=============================================|\n", media);
			printf("\t\t|==============================================================|\n\t\t");
		}
		else
		{
			printf("\t\t|===============================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>REPROVADO EM: FUNDAMENTOS DE SISTEMAS DE INFORMAÇÃO<=====|\n");
			printf("\t\t|=====>NOTA: %.2f<==============================================|\n", media);
			printf("\t\t|===============================================================|\n\t\t");
		}
		
		else if (opcao == 8) if (media >=6) //INTERFACE HUMANO-COMPUTADOR
		{
			printf("\t\t|==========================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>APROVADO EM: INTERFACE HUMANO-COMPUTADOR<===========|\n");
			printf("\t\t|=====>NOTA: %.2f<=========================================|\n", media);
			printf("\t\t|==========================================================|\n\t\t");
		}
		else
		{
			printf("\t\t|=======================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>REPROVADO EM: INTERFACE HUMANO-COMPUTADOR<=======|\n");
			printf("\t\t|=====>NOTA: %.2f<======================================|\n", media);
			printf("\t\t|=======================================================|\n\t\t");
		}
		
		else if (opcao == 9) if (media >=6) //MODELAGEM DE NEGÓCIOS
		{
			printf("\t\t|================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>APROVADO EM: MODELAGEM DE NEGÓCIOS<=======|\n");
			printf("\t\t|=====>NOTA: %.2f<===============================|\n", media);
			printf("\t\t|================================================|\n\t\t");
		}
		else
		{
			printf("\t\t|================================================|\n");
			printf("\t\t|=====>ALUNO: %s<====|\n", nome_aluno);
			printf("\t\t|=====>REPROVADO EM: MODELAGEM DE NEGÓCIOS<======|\n");
			printf("\t\t|=====>NOTA: %.2f<===============================|\n", media);
			printf("\t\t|================================================|\n\t\t");
		}
		
	
	
		system("pause\n"); //Opções de Saída
		system("cls"); //Limpa a Tela
	        
	 	printf("\t\t|============================|\n");
	 	printf("\t\t|        Deseja Sair?        |\n");
	 	printf("\t\t|       [1] SIM [2] NÃO      |\n");
		printf("\t\t|============================|\n");
		printf("\t\t|=====>");
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
			printf("\t\t|=================================|\n");
			printf("\t\t|        Até a Proxíma :)         |\n");
			printf("\t\t|            Obrigado!            |\n");
			printf("\t\t|=================================|\n\t\t");
			flag = 1;
		}
		
	}

}

		

 	




