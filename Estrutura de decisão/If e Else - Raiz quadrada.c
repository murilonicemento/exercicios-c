#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Calcular a raiz quadrada e informa se ela é uma raiz quadrada perfeita ou não*/
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int number, square;
	
	printf("Digite um número inteiro: \n");
	scanf(" %d", &number);
	
	square = sqrt(number);
	
	if(square * square == number){
		printf("Esse número é uma raiz quadrada perfeita!");
	}else{
		printf("Esse número não é uma raiz quadrada perfeita!");
	}
}
