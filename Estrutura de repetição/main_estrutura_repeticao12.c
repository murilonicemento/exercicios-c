#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenvolva um programa que leia uma sequência de números, podendo terminar com o número 0 ou 9. 
Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	do{
		printf("Digite um número: \n");
		scanf(" %d", &num);
		if(num != 0 && num != 9){
			if(num%2 == 0){
				printf("Sucessor = %d \n", num + 1);
			}else {
				printf("Antecessor = %d \n", num - 1);
			}
		}
	}
	while(num != 0 && num != 9);
}
