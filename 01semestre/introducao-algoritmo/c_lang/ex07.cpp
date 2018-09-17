#include <stdio.h>

/* 
	7. Faça um algoritmo para preencher um vetor de 10 posições, depois ordenar os
	elementos desse vetor em ordem crescente. No final mostre o vetor ordenado.
*/

int main(){
	int vet[10], i, j, aux;
		
	for(i = 0; i < 10; i++){
		printf("Digite o %do valor: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(vet[i] < vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
	
	for(i = 0; i < 10; i++){
		printf("vet[%d] = %d \n", i, vet[i]);
	}
}
