#include <stdio.h>
#include <string.h>

/*
	1. Escreva um algoritmo que permita a leitura das matr�culas de 10 pessoas e
	armazene as matr�culas lidas em um vetor. Ap�s isto, o algoritmo deve permitir a
	leitura de mais 1 matr�cula qualquer de pessoa e depois escrever a mensagem
	ACHEI, se a matr�cula estiver entre as 10 matr�culas lidas anteriormente
	(guardados no vetor), ou N�O ACHEI caso contr�rio.
*/

int main(){
	int vet[10], i, mat;
	char result[30];
	
	for(i = 0; i < 10; i++){
		printf("Cadastre a %do matricula: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("\n\nEncontre a matricula: ");
	scanf("%d", &mat);
	
	for(i = 0; i < 10; i++){
		if(vet[i] == mat){
			strcpy(result, "ACHEI! :D");
		}else{
			strcpy(result,"NAO ACHEI! :-(");
		}
	}
	
	printf("\n\n\nResultado: %s", result);
	
}
