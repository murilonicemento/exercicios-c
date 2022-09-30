#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça, no emulador a seguir, um algoritmo que leia números inteiros e armazene-os na matriz 4x4.
Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).
Na diagonal principal, os elementos têm linha = colona: [0][0], [1][1], [2][2], [3][3].*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mat[4][4], linha, coluna;
	
	printf("Digite um valor para os elementos da matriz: \n");
	
	for(linha = 0; linha < 4; linha ++){
		for(coluna = 0; coluna < 4; coluna ++){
			if(linha == coluna){
				printf("Elemento [%d][%d] = 0 \n", linha, coluna);
				mat[linha][coluna] = 0;
			}else{
				printf("Elemento [%d][%d] = \n", linha, coluna);
				scanf(" %d", &mat[linha][coluna]);
			}
		}
	}
	for(linha = 0; linha < 4; linha ++){
		for (coluna = 0; coluna < 4; coluna++){
			printf("Elemento[%d][%d] = %d \n", linha, coluna, mat[linha][coluna]);
		}
	}
}
