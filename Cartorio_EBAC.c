#include <stdio.h> //Biblioteca de comunica��o com o usuario
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em memoria
#include <locale.h> //Biblioteca de aloca��o de texto por regi�o
#include <string.h> //Biblioteca respons�vel pelas strings

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Respons�vel por copiar valor das strings
	
	FILE *file; //Cria��o de arquivo
	file = fopen(arquivo, "w");
	fprintf(file,cpf); //salvo valor da variavel
	fclose(file); //fechar o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);	
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");

	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");


}

int deletar()
{
	printf("Voc� escolheu a op��o 3 - Deletar nomes\n");
  	system("pause");
}



int main()
  {
  	int opcao=0; //Definindo variaveis
  	int laco=1;
  	
  	for(laco=1;laco=1;)
  	{
  	
  		system("cls");
  	
  		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
  	
  		printf("### Cart�rio da EBAC ###\n\n"); //Inicio do menu
  		printf("Escolha a op��o desejada do menu\n\n");
  		printf("\t1 - Registrar nomes\n");
  		printf("\t2 - Consultar nomes\n");
  		printf("\t3 - Deletar nomes\n");
  		printf("\t4 - Sair do sistema\n\n");
  		printf("Op��o: ");//Fim do menu
  	
  		scanf("%d", &opcao);//Armazenamento de escolha do usuario
  	
  		system("cls");//bagulho pra limpar a tela
  	
  	
  		switch(opcao)
  		{
  			case 1:
  			registro();
  			break;
  			
  			case 2:
  			consulta();
  			break;
  			
  			case 3:
  			deletar();
  			break;
  			
  			case 4:
            printf("Obrigado por utilizar nosso sistema!\n");
            return 0;
            break;
  			
  			default:
  			printf("Essa op��o n�o est� dispon�vel!\n");
  			system("pause");
  			break;
  			
		}
	
		
	}	
}
