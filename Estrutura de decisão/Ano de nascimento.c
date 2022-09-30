#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Ano de nascimento*/
#define current_year 2022
#define vaccine_age 10
void main (){
	setlocale(LC_ALL, "Portuguese");
	
	int age, month, current_month;
	
	printf("Digite  a sua idade: \n");
	scanf(" %d", &age);
	
	printf("Digite o seu mês de nascimento: \n");
	scanf(" %d", &month);
	
	printf("Qual o mês em que você se encontra: \n");
	scanf(" %d", &current_month);
	
	if(month <= current_month){
		printf("Você nasceu no ano de %d \n", current_year - age);
	}else{
		printf("Você nasceu no ano de %d \n", current_year - age - 1);
	}
	if(age < vaccine_age){
		printf("Você não se encontra na faixa para ser vacinado(a)! \n");
	}else{
		printf("Você se encontra na faixa para ser vacinado(a)! \n");
	}
}
