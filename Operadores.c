#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Calculo da área de um triângulo*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, area;
	
	printf("Informe o valor da base do triângulo: \n");
	scanf(" %f", &base);
	
	printf("Informe o valor da altura do triângulo:");
	scanf("%f", &altura);
	
	area = base * altura / 2;
	
	//Resultado
	printf("A área do triângulo equivale à %.2f", area);
}
