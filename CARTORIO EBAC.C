#include <stdio.h> // biblioteca comunicaçao com o usuario 

#include <stdlib.h> // biblioteca de alocação de espaço de memoria

#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //biblioteca responsavel por cuidar das string


int registro()
{
	CHAR arquivo[40];
	CHAR cpf[40];
	CHAR nome[40];
	CHAR sobrenome[40];
	CHAR cargo[40];
	
	printf("Digite o CPF A SER CADASTRADO: ");
	scanf("%s",cpf);
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores da string
    
	FILE *file; //cria o arquivo
	file = fopen(arquivo,"w"); //cria arquivo
	fprintf(file,cpf);
	fclose(file);	
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
    print("Digite o nome a ser cadastrado:");
    scanf("%s",nome);
    
    file =fopen(arquivo,"a");
    fprintf(file,nome);
    fclose(file),
    
    file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
    
    print("Digite o sobrenome a ser cadastrado:");
    scanf("%s",sobrenome);
    
     file =fopen(arquivo,"a");
    fprintf(file,sobrenome);
    fclose(file),
    
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
    
    print("Digite o cargo a ser cadastrado:");
    scanf("%s",cargo);
    
    file = fopen(arquivo,"a");
    fprintf(file,cargo);
    fclose(file),
    
}

int consulta ()
{
	printf("você escolheu consultar os nomes!\n");
	system("pause");
}

int deletar()
{
	printf("Você escolheu Deletar os nomes!\n");
	system("pause");
}


int main ()

{

int opcao=0; //Definindo as variaveis
int laco=1;

for(laco=1;laco=1;)
{

system("cls");


setlocale(LC_ALL, "portuguese");//Definindo a Linguagem



printf("### cartório da EBAC### \n\n");// inicio do menu

printf(" ESCOLHA A OPÇÃO DESEJADA DO MENU:\n\n");

printf("\t1 - Registrar Nomes\n");

printf("\t2 - Consultar Nomes \n");

printf("\t3 - Deletar Nomes\n\n");

printf("opçao:"); //fim do menu

scanf("%d" , &opcao);//armazenamento a escolha do usuario


system("cls");


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

   
 default:

printf("Essa opção não está disponivel!\n");

  system("pause");

  break;
  }}}
