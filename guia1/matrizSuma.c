#include <stdio.h>
int main (){
	int filas,columnas,fil,col,suma;
	
	printf("Cuantas filas sera la matriz A?\n");
	scanf("%d",&filas);
	printf("Cuantas columnas sera la matriz A?\n");
	scanf("%d",&columnas);
	int A[filas][columnas];
	
	printf("Llene la matriz A?\n");
	for(fil=0;fil<filas;fil++){
		for(col=0;col<columnas;col++){
			printf("ingrese el numero en la posicion %d%d\n",fil,col);
			scanf("%d",&A[fil][col]);
		}
	}
	
	printf("Matriz A \n");
	for(fil=0;fil<filas;fil++){
		for(col=0;col<columnas;col++){
			printf("%d\t",A[fil][col]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Suma de cada fila\n");
	for(fil=0;fil<filas;fil++){
		suma=0;
		for(col=0;col<columnas;col++){
			suma=suma+A[fil][col];
		}
		printf("suma de fila %d = %d\n",fil+1,suma);
	}
	
	printf("\n");
	printf("Suma de cada columna\n");
	for(col=0;col<columnas;col++){
		suma=0;
		for(fil=0;fil<filas;fil++){
			suma=suma+A[fil][col];
		}
		printf("suma de columna %d = %d\n",col+1,suma);
	}
	
	col=1;
	suma=0;
	printf("\n");
	printf("Suma de digonal positiva\n");
	for(fil=0;fil<filas;fil++){
			suma=suma+A[fil][columnas-col];
			col=col+1;
	}
	printf("suma de la digonal positiva es  %d\n",suma);

	col=0;
	suma=0;
	printf("\n");
	printf("Suma de diagonal negativa\n");
    for (fil=0;fil<filas;fil++) {
        suma=suma+A[fil][col];
        col=col+1;
    }
	printf("suma de la digonal negativa es %d\n",suma);
	
	return 0;
	}
