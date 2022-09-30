#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. 
Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:

Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor;
Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.
Ao final, mostre o conteúdo dos dois vetores simultaneamente */

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int tamvet = 5;
	int vet[tamvet], vet2[tamvet], cont;
	
	for(cont = 0; cont < tamvet; cont ++){
		scanf(" %d", &vet[cont]);
		if(vet[cont]%2 == 0){
			vet2[cont] = vet[cont] + 1;
		}else{
			vet2[cont] = vet[cont] - 1;
		}
	}
	printf("Elementos de vet1 e vet2: \n");
	for(cont = 0; cont < tamvet; cont ++){
		printf(" %d \n", vet[cont]);
		printf(" %d \n", vet2[cont]);
	}
}

