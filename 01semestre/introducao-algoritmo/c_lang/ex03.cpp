#include <stdio.h>
#include <stdlib.h>

/* 
	3. Faça um algoritmo para ler um vetor de 20 números. Após isto, ler mais um número
	qualquer, calcular e escrever quantas vezes esse número aparece no vetor.	
*/

int main(){
	int vet[20], i, n, aux = 0;
	
	for(i = 0; i < 20; i++){
		vet[i] = rand() % 10 + 1;
	}
	
	printf("Digite um valor que deseja encontrar (1 a 10): ");
	scanf("%d", &n);
	
	for(i = 0; i < 20; i++){
		if(vet[i] == n){
			aux++;
		}
	}
	
	printf("\n\n\nO numero %d aparece %dx", n, aux);
}
