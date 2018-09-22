#include <stdio.h>

int main(){
	int A[5];
	int B[5];
	int numero;
	
	int *pa;
	int *pb;
	int *paux;
	
	//llenado del vector A
	printf("llenar vector A\n");
	for (int i=0;i<5;i++){
		printf("ingrese el valor numero %d; \n",i+1);
		scanf("%d",&numero);
		A[i]=numero;
	}
	
	//llenado del vector B
	printf("\nllenar vector B\n");
	for (int i=0;i<5;i++){
		printf("ingrese el valor numero %d; \n",i+1);
		scanf("%d",&numero);
		B[i]=numero;
	}
	pa=&A;
	pb=&B;
	
	//imprimiendo vector A
	printf("\n");
	printf("\nvector A\n");
	for (int i=0;i<5;i++){
		printf("%d",*pa);
		printf("\t");
		pa++;
	}
	
	//disminuyen pa
	for (int i=0;i<5;i++){
		pa--;
	}
	
	//imprimiendo vector B
	printf("\n");
	printf("\nvector B\n");
	for (int i=0;i<5;i++){
		printf("%d",*pb);
		printf("\t");
		pb++;
	}

	//disminuyendo pb
	for (int i=0;i<5;i++){
		pb--;
	}
	
	//cambiamos las direcciones
	paux=pa;
	pa=pb;
	pb=paux;
	
	printf("\nel vector de A mstra los valores de B y viceversa\n");
	//imprimiendo vector A
	printf("\n");
	printf("\nvector A\n");
	for (int i=0;i<5;i++){
		printf("%d",*pa);
		printf("\t");
		pa++;
	}
	
	//imprimiendo vector B
	printf("\n");
	printf("\nvector B\n");
	for (int i=0;i<5;i++){
		printf("%d",*pb);
		printf("\t");
		pb++;
	}
	
}
