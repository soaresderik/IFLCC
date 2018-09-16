#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    int i, j;
    int principal = 0, secundaria = 0;
		
    /* gerando a matriz */
    printf( "Matriz:\n" );
    for( i = 0; i < 5; i++ ) {
        for( j = 0; j < 5; j++ ) {
            matriz[i][j] = rand() % 9 + 1;
            printf( "%3d", matriz[i][j] );
        }
        printf( "\n" );
    }

    for( i = 0; i < 5; i++ ) {
        principal += matriz[i][i];
    }
    
    for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if (j == (5 - 1 - i)) {
				secundaria += matriz[i][j];
			}
		}
	}
	
    printf("Soma da diagonal principal: %d", principal);
    printf("\nSoma da diagonal secundaria: %d", secundaria);

}
