#include <stdio.h>

int main (){
	int vector[5];
	int numero;
	int *puntero;
	
	//llenado del vector
	for (int i=0;i<5;i++){
		printf("ingrese el valor numero %d; \n",i+1);
		scanf("%d",&numero);
		vector[i]=numero;
	}
	
	puntero=&vector;
	
	//imprimiendo vector
	printf("\n");
	printf("\nvector ordenado\n");
	for (int i=0;i<5;i++){
		printf("\n");
		printf("%d",*puntero);
		printf("\t");
		printf("%p",puntero);
		puntero++;
	}
	puntero--;
	
	//imprimiendo el vector de forma inversa
	printf("\n");
	printf("\nvector inverso\n");
	for (int i=0;i<5;i++){
		printf("\n");
		printf("%d",*puntero);
		printf("\t");
		printf("%p",puntero);
		puntero--;
	}
	
}
