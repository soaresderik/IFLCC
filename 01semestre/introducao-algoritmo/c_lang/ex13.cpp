#include <stdio.h>
#include <stdlib.h>

/*	
	13.Fa�a um algoritmo que preencha um vetor V[25], com valores digitados pelo
	usu�rio, e em seguida preencha uma matriz M[5][5] com os valores do vetor V.	
*/

int main(){
	int vet[25], mat[5][5], i, j, count = 0;
	
	/*
	
	Gerar n�meros aleatoriamente
	
	for(i = 0; i < 25; i++){
		vet[i]= rand() % 9 + 1;
	}
	
	*/
	
	for(i = 0; i < 25; i++){
		printf("Digite o %do valor", vet[i]);
	}
	
	for(i = 0; i < 25; i++){
		printf("%d", vet[i]);
	}
	
	printf("\n");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			mat[i][j] = vet[count];
			count++;
			printf( "%3d", mat[i][j] );
		}
		printf("\n");
	}
}
