#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Programa que ler 3 notas de 40 alunos, calcule a média e a situação de aprovação deles*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	int cont;
	float grade1, grade2, grade3, average;
	
	for(cont = 1; cont <= 40; cont += 1){
		printf("Digite nota 1: \n");
		scanf(" %f", &grade1);
		
		printf("Digite nota 2: \n");
		scanf(" %f", &grade2);
		
		printf("Digite nota 3: \n");
		scanf(" %f", &grade3);
		
		average = (grade1 + grade2 + grade3) / 3;
		
		if(average >= 7){
			printf("Média do aluno: %.2f. Aluno aprovado! \n", average);
		}else{
			printf("Média do aluno: %.2f. Aluno Reprovado! \n", average);
		}
	}
	
}
