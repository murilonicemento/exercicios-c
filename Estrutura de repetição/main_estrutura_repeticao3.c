#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Programa que ler o salario de 10 funcionarios e calcula e mostra o maior salario e a media salarial da empresa*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	float salary, higher_salary, sum_salary, average;
	higher_salary = sum_salary = 0;
	
	for(cont = 1; cont <= 10; cont += 1){
		printf("Digite o seu salário: \n");
		scanf(" %f", &salary);
		sum_salary += salary;
		if(salary > higher_salary){
			higher_salary = salary;
		}
		average = sum_salary/10;
	}
	printf("O maior salário é %f e a média salarial da empresa é %f \n", higher_salary, average);
	 
	
}

