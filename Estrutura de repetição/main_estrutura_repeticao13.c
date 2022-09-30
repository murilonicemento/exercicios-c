#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenvolva um programa que leia o salário bruto de 15 funcionários de uma empresa, calcule e exiba o salário líquido de cada funcionário. 
Lembre-se de que o salário líquido é calculado abatendo o imposto do salário bruto, com base na tabela de imposto abaixo.
Ao final, mostre o total de salários brutos, salários líquidos e impostos de todos os funcionários.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	float gross_salary, net_salary, tax, gross_total, total_liquid, total_tax;
	gross_salary = net_salary = tax = gross_total = total_liquid = total_tax = 0;
	
	for(cont = 1; cont <= 5; cont++){
		printf("Digite seu salário bruto: \n");
		scanf(" %f", &gross_salary);
		if(gross_salary > 999){
			tax = gross_salary * 0.1;
			net_salary = gross_salary - tax;
			printf("Salário liquido = %.2f \n\n", net_salary);
		}else if(gross_salary > 1999){
			tax = gross_salary * 0.15;
			net_salary = gross_salary - tax;
			printf("Salário liquido = %.2f \n\n", net_salary);
		}else if(gross_salary > 9999){
			tax = gross_salary * 0.2;
			net_salary = gross_salary - tax;
			printf("Salário liquido = %.2f \n\n", net_salary);
		}else if(gross_salary > 99999){
			tax = gross_salary * 0.25;
			net_salary = gross_salary - tax;
			printf("Salário liquido = %.2f \n\n", net_salary);
		}else{
			tax = gross_salary * 0.3;
			net_salary = gross_salary - tax;
			printf("Salário liquido = %.2f \n\n", net_salary);
		}
		gross_total += gross_salary;
		total_liquid += net_salary;
		total_tax += tax;
		
	}
		printf("Total salário bruto = %.2f \n", gross_total);
		printf("Total salário liquido = %.2f \n", total_liquid);
		printf("Total imposto = %.2f \n", total_tax);
}
