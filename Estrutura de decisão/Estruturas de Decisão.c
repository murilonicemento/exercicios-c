#include <stdio.h>
#include <stdlib.h>

/*int main(){
	
	int cadastrado, ativo, logado;
	char opcao;
	cadastrado = ativo = logado = 0;
	
	printf("Deseja cadastrar a sua conta? S/N \n");
	scanf(" %c", &opcao);
	if(opcao == 'S'){
		cadastrado = 1;
		printf("Conta cadastrada \n");
	}
	
	printf("Deseja ativar a sua conta? S/N \n");
	scanf(" %c", &opcao);
	if(opcao == 'S'){
		ativo = 1;
		printf("Conta ativada \n");
	}
	
	printf("Deseja logar na sua conta? S/N \n");
	scanf(" %c", &opcao);
	if(opcao == 'S'){
		logado = 1;
		printf("Conta logada \n");
	}
	
	if((cadastrado == 1) && ((ativo == 1) || (logado == 1))){
		printf("Seja bem-vindo! \n");
	}else{
		printf("Algo deu errado! \n");
	}
}*/

//Estrutura de decisão aninhadas e encadeadas
int main(){
	int opcao;
	
	printf("Entre com um número inteiro: \n");
	scanf(" %d", &opcao);
	
	if(opcao >= 0){
		if(opcao == 0){
			printf("Número nulo")
		}else{
			printf("Número positivo \n"); 
	}else{
		printf("Número negativo \n");	
	}
	
	printf("Entre com 1 para adicionar e 2 para exluir \n");
	switch(opcao){
		case 1: {
			printf("Numero 1 \n");
			break;
		}
		case 2: {
			printf("Numero 2 \n");
			break;
		}
		default: printf("Opcao invalida \n");
	}
	printf("Final do programa");
}







