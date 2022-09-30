#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Programa que ler 15 número inteiros e positivos e mostre o maior deles*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, num, higher_number;
	higher_number = 0;
	
	for(cont=1; cont<=5; cont += 1){
		printf("Digite um número: \n");
		scanf(" %d", &num);
		if(num > higher_number){
			higher_number = num;
		}
	}
	printf("O maior número é %d \n", higher_number);
}
