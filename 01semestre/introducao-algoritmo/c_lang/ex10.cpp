#include <stdio.h>
#include <stdlib.h>

/*	
	10. Faça um algoritmo que leia uma matriz mat 2 x 3 e imprima na tela a soma de
	todos os elementos da matriz mat.		
*/

int main(){
	int matriz[2][3], i, j, soma = 0;
	
	printf( "Matriz:\n" );
    for( i = 0; i < 2; i++ ) {
        for( j = 0; j < 3; j++ ) {
            matriz[i][j] = rand() % 9 + 1;
            printf( "%3d", matriz[i][j] );
        }
        printf( "\n" );
    }
	
	for( i = 0; i < 2; i++ ){
        for(j = 0; j < 3; j++){
        	soma += matriz[i][j];
		}
    }
	
	
	printf("\n\nSoma dos elementos: %d", soma);	
}
