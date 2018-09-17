#include <stdio.h>

/*
	6. Escrever um algoritmo que lê um vetor N(20) e o escreve. Troque, a seguir, o 1º
	elemento com o último, o 2º com o penúltimo etc. até o 10º com o 11º e escreva o
	vetor N assim modificado.
*/

int main(){
	int vet[20], vet2[20], i, aux;
	
	for(i = 0; i < 20; i++){
		printf("Digite o %do valor: ", i + 1);
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < 10; i++){
		vet2[19-i] = vet[i];
		vet2[i] = vet[19-i];
	}
	
	for(i = 0; i < 20; i++){
		printf("vetor1 [%d][%d]    vetor2 [%d][%d] \n", i, vet[i], i, vet2[i]);
	}
}
