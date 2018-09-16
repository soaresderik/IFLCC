#include <stdio.h>
#include <stdlib.h>

/*
	4. Faça um algoritmo que copie, na ordem inversa, o conteúdo de um vetor V1[8] em
	um segundo vetor V2[8].
*/

int main(){
	int vet1[8], vet2[8], i, j = 0;
	
	for(i = 0; i < 8; i++){
		vet1[i] = rand() % 8 + 1;
	}
	
	for(i = 7; i >= 0; i--){
		vet2[j] = vet1[i];
		j++;
	}
	
	for(i = 0; i < 8; i++){
		printf("vet1[%d][%d]   vet2[%d][%d]\n", i, vet1[i], i, vet2[i]);
	}
}
