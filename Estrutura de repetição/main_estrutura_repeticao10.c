#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Desenvolva um programa que leia uma sequência de letras (a... z) terminada em ponto (.) e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.*/

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char word;
	int conta, conte, conti, conto, contu;
	conta = conte = conti = conto = contu = 0;
	
	printf("Digite uma letra: \n");
	scanf(" %c", &word);
	
	while(word != '.'){
		switch(word){
			case 'a':
				conta++;break;
			case 'e':
				conte++;break;
			case 'i':
				conti++;break;
			case 'o':
				conto++;break;
			case 'u':
				contu++;break;
		}
		scanf(" %c", &word);
	}
	printf("O total de a: %d \n", conta);
	printf("O total de e: %d \n", conte);
	printf("O total de i: %d \n", conti);
	printf("O total de o: %d \n", conto);
	printf("O total de u: %d \n", contu);
}
