#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. 
Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. 
Em caso positivo, mostre a posição do vetor em que ele se encontra.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int tamvet = 5, tamlist = 10;
	int vet[tamvet], cont, posvet, achou, num;
	
	printf("Digite os dados do vetor: \n");
	
	for(cont = 0; cont < tamvet; cont ++){
		scanf(" %d", &vet[cont]);
		printf("Digite números a procurar: \n");	
	}
	for (cont = 1; cont <= 10; cont ++){
		scnf(" %d", &num);
	}
	//verifica se o número está no vetor
	posvet = 0; 
	achou = 0;
	while(posvet <= -1 && achou == 0){
		if(num == vet[posvet]){
			achou = 1;
		}else{
			posvet ++;
		}
	}
	if(achou == 1){
		printf("Achou uma posição: %d \n", posvet);
	}else{
		printf("Não achou o número \n");
	}
}
