//Aluno: Vinicius Grando Marques RGM: 1946553-0
//Prof: José Luis Pagotto
//Disciplina: Programação de Computadores
//Programa para Sequência de Fibonacci

#include<stdio.h>
#include<locale.h>
#include<conio.h>

main () 
{

	setlocale(LC_ALL, "Portuguese");
	int n, fab1=0,fab2=1,fab=0,i=0;
	int resposta;
	int flag = 0;
	int opcao;
	
	
	while (flag == 0) 
	{
		
		n=0;fab1=0;fab2=1;fab=0;i=0;
		printf("|/========== Sequência de Fibonacci ==============|\n"); //Menu
		printf("|=================================================|\n");
		printf("| [1] Exibir Sequência                            |\n");
		printf("| [2] SAIR                                        |\n");
		printf("|================================================/|\n");
	
		printf("Escolha uma opcão: "); //Selecão
		scanf("%i", &opcao);
		fflush(stdin); //Limpa Buffer do Teclado
		system("cls"); //Limpa a Tela
			
		if (opcao == 2) //Caso o Usuario Escolha a 2 opção
		{
			printf("|=================================|\n");
			printf("|        Até a Próxima :)         |\n");
			printf("|            Obrigado!            |\n");
			printf("|=================================|\n\n");
			return 0;
		}
		if (opcao == 1)
		{
			printf("|==============================================================|\n");
			printf("|   Quantos Números da Sequência de Fibonacci Deseja Exibir?   |\n");
			printf("|==============================================================|\n");
			scanf("%d",&n);
			system("cls"); //Limpa a Tela
			printf("|==============================================================|\n");
			printf("|    Os Primeiros %d Números da Sequencia de Fibonacci São      |\n ===>|",n);

   		for (i = 0 ; i <= n - 1 ; i++ )
   		{
			printf("%d : ",fab1);
		    fab  = fab1+fab2;
		    fab1 = fab2;
		    fab2 = fab;
   		}
			printf("|<===\n");
			printf("|==============================================================|\n");
		}
		
		system("pause\n"); //Opções de Saída
		system("cls"); //Limpa a Tela
	        
	 	printf("|============================|\n");
	 	printf("|        Deseja Sair?        |\n");
	 	printf("|       [1] SIM [2] NÃO      |\n");
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
			printf("|        Até a Próxima :)         |\n");
			printf("|            Obrigado!            |\n");
			printf("|=================================|\n");
			flag = 1;
		}
	}
	
}
		
