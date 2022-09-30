#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de uma empresa.
 Na sequência, deve ler o salário de cada um dos 50 funcionários, calcular e mostrar o novo salário reajustado, 
 aplicando a porcentagem de ajuste sobre os respectivos salários atuais. 
 Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.*/
 
 void main(){
	setlocale(LC_ALL, "Portuguese");
	
 	int cont;
 	float percent, salary, readjusted_salary, higher_salary;
 	
 	printf("Digite a porcentagem de reajuste: \n");
 	scanf(" %f", &percent);
 	
 	higher_salary = 0;
 	
 	for(cont = 1; cont <= 5; cont += 1){
 		printf("Digite o seu salário: \n");
 		scanf(" %f", &salary);
 		
 		readjusted_salary = (salary * percent/100) + salary;
 		
 		if(readjusted_salary > higher_salary){
 			higher_salary = readjusted_salary;
		 }
	 }
	 printf("O maior salário é %f", readjusted_salary);
 }
