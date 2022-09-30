#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float height, width, length, daily_intake;
	
	printf("\n \t Reservatório de água \n");
	
	printf("Digite a altura em centímetros ");
	scanf("%f", &height);
	printf("Digite a largura em centímetros ");
	scanf("%f", &width);
	printf("Digite o comprimento em centímetros ");
	scanf("%f", &length);
	printf("\n consumo médio diário em litros ");
	scanf("%f", &daily_intake);
	
	//capacidade total em litros
	
	float total_capacity = width * length * height / 1000; // cm -> dm divide por 1000
	
	//autonomia do reservatório
	
	float reservoir_autonomy = total_capacity / daily_intake;
	
	//resultado
	
	printf("\n Capacidade total, em litros, do reservatório: %.1f", total_capacity);
	printf("\n Autonomia, em dias, do reservatório: %.1f", reservoir_autonomy);
	
	//classificação do consumo
	
	if(reservoir_autonomy < 2){
		printf("\n Consumo elevado");
	}else if(reservoir_autonomy >= 2 && reservoir_autonomy <= 7 ){
		printf("\n Consumo moderado");
	}else {
		printf("\n Consumo reduzido");
	}
	
}
