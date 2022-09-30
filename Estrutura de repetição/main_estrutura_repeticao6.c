#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*programa que leia um número N e, em seguida, uma lista de N números inteiros.
Esse programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	int num, list_num, sum_even_num, sum_odd_num, cont;
	sum_even_num = sum_odd_num = 0;
	
	printf("Digite a quantidade de números da lista: \n");
	scanf(" %d", &list_num);
	
	for(cont = 1; cont <= list_num; cont++){
		printf("Digite um número: \n");
		scanf(" %d", &num);
		
		if(num%2 == 0){
			sum_even_num += num;
		}else{
			sum_odd_num += num;
		}
	}
	printf("A soma dos números pares é %d e a soma dos números impares é %d \n", sum_even_num, sum_odd_num);	
}
