#include <stdio.h>

int main (){
	int filas,columnas,fil,col;
	
	printf("Cuantas filas sera la matriz A?\n");
	scanf("%d",&filas);
	printf("Cuantas columnas sera la matriz A?\n");
	scanf("%d",&columnas);
	int A[filas][columnas];
	int B[columnas][filas];
	
	printf("Llene la matriz A?\n");
	for(fil=0;fil<filas;fil++){
		for(col=0;col<columnas;col++){
			printf("ingrese el numero en la posicion %d%d\n",fil,col);
			scanf("%d",&A[fil][col]);
			B[col][fil]=A[fil][col];
		}
	}
	
	printf("Matriz A \n");
	for(fil=0;fil<filas;fil++){
		for(col=0;col<columnas;col++){
			printf("%d\t",A[fil][col]);
		}
		printf("\n");
	}
	
	printf("Matriz B \n");
	for(fil=0;fil<columnas;fil++){
		for(col=0;col<filas;col++){
			printf("%d\t",B[fil][col]);
		}
		printf("\n");
	}
	
	return 0;
	}

