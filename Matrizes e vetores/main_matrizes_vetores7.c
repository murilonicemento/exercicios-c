#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um algoritmo, no emulador a seguir, que leia dados inteiros e armazene-os em uma matriz 3x4. 
Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][4], linha, coluna, cont_par, cont_impar;
	
	for (linha = 0; linha < 3; linha ++){
		for(coluna = 0; coluna < 4; coluna ++){
			printf("Elemento[%d][%d] = \n", linha, coluna);
			scanf(" %d", &mat[linha][coluna]);
		}
	}
	for (linha = 0; linha < 3; linha ++){
		for (coluna = 0; coluna < 4; coluna ++){
			if(mat[linha][coluna]%2 == 0){
				cont_par++;
			}else{
				cont_impar++;
			}
		}
	}
	printf("Par: %d \n", cont_par);
	printf("Impar: %d \n", cont_impar);
}
