#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que gere uma matriz 5x5*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mat[5][5], linha, coluna;
	
	for(linha = 0; linha < 5; linha ++){
		for(coluna = 0; coluna < 5; coluna ++){
			mat[linha][coluna] = 1;
			if(linha == coluna){
				mat[linha][coluna] = 0;
			}
			printf("%d", mat[linha][coluna]);
		}
		printf("\n");
	}
	
}

