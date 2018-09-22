#include <stdio.h>

int main() {
    int fil,col,filas,columnas;
    printf("Ingrese el numero de filas\n");
    scanf("%d",&filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d",&columnas);
    int A[filas][columnas];
    int B[filas][columnas];
    int C[filas][columnas];

    printf("Ingrese la matriz A\n");
    for (fil=0;fil<filas;fil++) {
        for (col=0;col<columnas;col++) {
            printf("ingrese el numero en la posicion %d%d\n",fil,col);
            scanf("%d",&A[fil][col]);
        }
    }
    printf("Ingrese la matriz B\n");
    for (fil=0;fil<filas;fil++) {
        for (col=0;col<columnas;col++) {
            printf("ingrese el numero en la posicion %d%d\n",fil,col);
            scanf("%d",&B[fil][col]);
        }
    }
   
    for (fil=0;fil<filas;fil++) {
        printf("\n");
        for (col=0;col<columnas;col++) {
            C[fil][col]=B[col][fil]*A[fil][col];
        }
    }
       printf("Matriz C");
    for (fil=0;fil<filas;fil++) {
        printf("\n");
        for (col=0;col<columnas;col++) {
            printf("%d\t",C[fil][col]);
        }
    }
    printf("\n");
    return 0;
}
