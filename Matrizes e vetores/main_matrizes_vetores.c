#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma, no emulador a seguir.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	const int tamvet = 5;
	int cont;
	float vet[tamvet], media, soma = 0;
	
	for(cont = 0; cont < tamvet; cont ++){
		printf("Digite a nota do aluno: \n");
		scanf(" %f", &vet[cont]);
		soma += vet[cont];
	}
	
	media = soma / tamvet;
	printf("A média da turma é: %.2f \n", media);
	
	for(cont = 0; cont < tamvet; cont ++){
		if(vet[cont] >= media){
			printf("Notas acima da média da turma: %.2f \n", vet[cont]);
		}
	}
}
