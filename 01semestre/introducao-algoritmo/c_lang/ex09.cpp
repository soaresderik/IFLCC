#include <stdio.h>
#include <stdlib.h>

/*
	9. Faça um algoritmo para calcular o determinante de uma matriz M(3 x 3).
*/

int main(){
	int mat[3][3], i, j, det;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			mat[i][j] = rand() % 5 + 1;
            printf( "%3d", mat[i][j] );
		}
		printf( "\n" );
	}
	
	det = ( 
			(mat[0][0]*mat[1][1]*mat[2][2]) + (mat[0][1]*mat[1][2]*mat[2][0]) + (mat[0][2]*mat[1][0]*mat[2][1]) 
		  ) 
		  - 
		  (
		  	(mat[0][1]*mat[1][0]*mat[2][2]) + (mat[0][0]*mat[1][2]*mat[2][1]) + (mat[0][2]*mat[1][1]*mat[2][0])
		  );
	
	printf("\n\nO determinante é: %d", det);
}
