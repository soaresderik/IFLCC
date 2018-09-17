#include <stdio.h>
#include <stdlib.h>

/*	
	12. Faça um algoritmo para calcular a transposta de uma matriz MAT (3x6).	
*/

int main(){
	int matA[3][6], matB[6][3], i, j;
	
	printf( "Matriz:\n" );
    for(i = 0; i < 3; i++ ) {
        for( j = 0; j < 6; j++ ) {
            matA[i][j] = rand() % 9 + 1;
            printf( "%3d", matA[i][j] );
        }
        printf( "\n" );
    }
    
    printf( "\n" );
    printf( "Matriz Transposta:\n" );
    for( i = 0; i < 6; i++ ) {
        for( j = 0; j < 3; j++ ) {
            matB[i][j] = matA[j][i];
            printf( "%3d", matB[i][j] );
        }
        printf( "\n" );
    }
}
