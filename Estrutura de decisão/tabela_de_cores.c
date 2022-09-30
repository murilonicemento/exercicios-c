#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int choice;

    printf("O que você deseja que a Alexa faça? ");
    printf("======================================================= \n");
    printf("1 - Ligar a Luz \n");
    printf("2 - Ligar a TV \n");
    printf("3 - Ligar o Computador \n");
    printf("4 - Apague a Luz \n");
    printf("5 - Desligar a TV \n");
    printf("6 - Desligar o Computador \n");
    printf("7 - Sair \n");
    printf("======================================================= \n");
    scanf("%d", &choice);

    switch(choice){
        case 1: //ligar a luz
            system("cls"); //limpa a tela
            printf("Alexa, ligue a luz! \n");
            printf("... \n");
            sleep(3);
            system("cls");
            system("color 60");//o primeiro número é referente a cor de fundo e o segundo é referente a cor do texto
            printf("Luz ligada! \n");
            break;
        case 2: //ligar a TV
            system("cls"); 
            printf("Alexa, ligue a TV! \n");
            printf("... \n");
            sleep(3);
            system("cls");
            system("color 17");
            printf("Tv ligada! \n");
            break;
        case 3: //Ligar o computador
            system("cls"); 
            printf("Alexa, ligue o computador! \n");
            printf("... \n");
            sleep(3);
            system("cls");
            system("color 10");
            printf("Computador ligado! \n");
            break;
        case 4: //Apagar a luz
            system("cls"); 
            system("color 60");
            printf("Alexa, apague a luz! \n");
            printf("... \n");
            sleep(3);
            system("cls");
            system("color 20");
            printf("Luz apagada! \n");
            break;
        case 5: //desligar a TV
            system("cls");
            system("color 17"); 
            printf("Alexa, desligue a TV! \n");
            printf("... \n");
            sleep(3);
            system("cls");
            system("color 07");
            printf("Tv desligada! \n");
            break;
        case 6: //desligar o computador
            system("cls"); 
            system("color 20");
            printf("Alexa, desligue o computador! \n");
            printf("... \n");
            sleep(3);
            system("cls");
            system("color 07");
            printf("Computador desligado! \n");
            break;
        case 7: //sair
            system("cls"); 
            system("color F0");
            printf("Alexa, tchau! \n");
            printf("... \n");
            sleep(3);
            system("cls");
            system("color 07");
            printf("Tchau! \n");
            break;
        default:
            system("cls");
            system("color 47");
            printf("Valor inserido inválido");
            break;
    }
}
