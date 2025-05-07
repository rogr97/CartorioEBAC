#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()
{
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);
    
    strcpy(arquivo, cpf);

    FILE *file = fopen(arquivo, "w");
    if (file == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }
    fprintf(file, "%s,", cpf);
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a");
    fprintf(file, "%s,", nome);
    fclose(file);

    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);

    file = fopen(arquivo, "a");
    fprintf(file, "%s,", sobrenome);
    fclose(file);

    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);

    file = fopen(arquivo, "a");
    fprintf(file, "%s", cargo);
    fclose(file);

    printf("Cadastro realizado com sucesso!\n");
    system("pause");
    return 0;
}

int consulta()
{
    char cpf[40];
    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);

    FILE *file = fopen(cpf, "r");
    if (file == NULL) {
        printf("Registro não encontrado.\n");
    } else {
        char conteudo[200];
        fgets(conteudo, sizeof(conteudo), file);
        printf("Dados do registro: %s\n", conteudo);
        fclose(file);
    }

    system("pause");
    return 0;
}

int deletar()
{
    char cpf[40];
    printf("Digite o CPF a ser deletado: ");
    scanf("%s", cpf);

    if (remove(cpf) == 0) {
        printf("Registro deletado com sucesso.\n");
    } else {
        printf("Erro ao deletar registro (arquivo não encontrado?).\n");
    }

    system("pause");
    return 0;
}

int main()
{
    int opcao = 0;
    char senhadigitada[20];  // espaço suficiente
printf("Digite sua senha: ");
scanf("%s", senhadigitada);

if (strcmp(senhadigitada, "admin") == 0)
{
    // acesso liberado
}
else
{
    printf("Senha incorreta!\n");
}




    setlocale(LC_ALL, "Portuguese");

    while (1)
    {
        system("cls");
        printf("### Cartório da EBAC ###\n\n");
        printf("ESCOLHA A OPÇÃO DESEJADA DO MENU:\n\n");
        printf("\t1 - Registrar Nomes\n");
        printf("\t2 - Consultar Nomes\n");
        printf("\t3 - Deletar Nomes\n");
        printf("\t0 - Sair\n\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        system("cls");

        switch (opcao)
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
        case 0:
            printf("Saindo do sistema...\n");
            exit(0);
        default:
            printf("Essa opção não está disponível!\n");
            system("pause");
            break;
        }
    }


}
 
