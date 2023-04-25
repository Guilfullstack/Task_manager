/***
Para entender como funciona cada recurso
Acesse esse link= https://replit.com/@GuilhermeAlme18/Aprendendo-C
***/
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
 //(nome de usuário, senha, idade, instituição em que estuda
char nome[21];
int senha=34;
char instituicao[21];
char letra='G';

int main(){
    printf("\n ___________    ____      __________     __    ___     __|__|__   =====");
    printf("\n||____  ____| //    \\    //   ______)  ||  |  /  /    ([o]=[o])    =====");
    printf("\n    ||  |    //  /\\  \\   \\\\  (______   ||  | /  /   ___\\_____/___    =====");
    printf("\n    ||  |   //  /__\\  \\   \\\\______  \\  ||  |/  /    |  |     |  |    =====");
    printf("\n    ||  |  //  /____\\  \\  _______/  /  ||  |\\  \\   (|) |_____| (|) =====");
    printf("\n    ||__| //__/      \\__\\ \\________/   ||__| \\__\\      oo   oo    =====");
    printf("\n __      __       ____       ___   ___       ____       __________   _________  __________");
    printf("\n|| \\    / |     //    \\     ||  \\  | |     //    \\     ||  ______| ||  ______| ||  _____ |");
    printf("\n||  \\  /  |    //  /\\  \\    ||   \\ | |    //  /\\  \\    ||  | _____ ||  |______ ||  |___| |");
    printf("\n||   \\/   |   //  /__\\  \\   ||    \\| |   //  /__\\  \\   ||  | |_  | ||   _____| ||      __|");
    printf("\n||  |  |  |  //  /____\\  \\  ||  |\\ \\ |  //  /____\\  \\  ||  |___| | ||  |______ ||  |\\  \\");
    printf("\n||__|  |__| //__/      \\__\\ ||__| \\_\\| //__/      \\__\\ ||________| ||________| ||__| \\__\\ \n");
    /***MENU INICIAL***/
    int opcao;
    char letrad='a';
    int senhad;
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nSEJA BEM VINDO!\nDIGITE UMA OPCAO!\
           \n1- LOGAR \
           \n2- CADASTRAR \
            \n3- SAIR \
            \n>>");
    scanf("%d",&opcao);
    system("cls");
    switch(opcao){
        case 1:
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
            printf("\n-----------------------");
            printf("\n||-----  LOGIN  -----||");
            printf("\n-----------------------");
            printf("\nDigite uma letra: ");
            scanf("%s", &letrad);
            printf("Digite uma senha: ");
            scanf("%d", &senhad);
            if(letra == letrad && senha == senhad){
                printf("login valido");
            }else{
                printf("login invalido");
            }
        break;
        case 2:
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
            printf("\n--------------------------------");
            printf("\n||--------  CADASTRO  --------||");
            printf("\n--------------------------------");
            printf("\nDigite um nome de usuario:  ");
            scanf("%s",&nome);
            printf("\nDigite uma senha numerica:  ");
            scanf("%d",&senha);
            printf("Cadastrando....");
            printf("\nCadastro completo!\nAcessando sistema...\n");
        break;
        case 3:
            printf("\nSaindo...");
        break;
        default:
            printf("\n-->Opcao invalida tente novamente!");
        break;
}

    /***MENU PRINCIPAL***/

   /* printf("\nO QUE DESEJA ACESSAR? \
           \n1- PERFIL \
            \n2- ENXAMES \
            \n3- ESPPECIES \
            \n4- TAREFAS \
            \n5- PRODUCAO \
            \n6- RELATORIOS \
            \n7- ENCERRAR \
            \n>>");*/

    return 0;
}
