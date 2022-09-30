#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu, no emulador a seguir.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[5] = {0,0,0,0,0}, cont;
	char letra;
	
	scanf(" %c", &letra);
	
	while(letra != 'z'){
		switch(letra){
			case 'a':
				vet[0]++;
				break;
			case 'e':
				vet[1]++;
				break;
			case 'i':
				vet[2]++;
				break;
			case 'o':
				vet[3]++;
				break;
			case 'u':
				vet[4]++;
				break;
		}
		scanf(" %c", &letra);
	}
	for(cont = 0; cont < 5; cont ++){
		printf("%d \n", vet[cont]);
	}
}
