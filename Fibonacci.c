//Aluno: Vinicius Grando Marques RGM: 19
//Prof: Jos� Luis Pagotto
//Disciplina: Programa��o de Computadores
//Programa para Sequ�ncia de Fibonacci

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
		
		
		printf("|/========== Sequ�ncia de Fibonacci ==============|\n"); //Menu
		printf("|=================================================|\n");
		printf("| [1] Exibir Sequ�ncia                            |\n");
		printf("| [2] SAIR                                        |\n");
		printf("|================================================/|\n");
	
		printf("Escolha uma opc�o: "); //Selec�o
		scanf("%i", &opcao);
		fflush(stdin); //Limpa Buffer do Teclado
		system("cls"); //Limpa a Tela
			
		if (opcao == 2) //Caso o Usuario Escolha a 2 op��o
		{
			printf("|=================================|\n");
			printf("|        At� a Prox�ma :)         |\n");
			printf("|            Obrigado!            |\n");
			printf("|=================================|\n\n");
			return 0;
		}
		if (opcao == 1)
		{
			printf("|==============================================================|\n");
			printf("|   Quantos N�meros da Sequ�ncia de Fibonacci Deseja Exibir?   |\n");
			printf("|==============================================================|\n");
			scanf("%d",&n);
			system("cls"); //Limpa a Tela
			printf("|==============================================================|\n");
			printf("|    Os Primeiros %d N�meros da Sequencia de Fibonacci S�o      |\n ===>|",n);

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
		
