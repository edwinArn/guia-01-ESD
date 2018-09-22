#include <stdio.h>

int main(){
	int a=5,b=10,op;
	
	int *pa;
	int *pb;
	
	pa=&a;
	pb=&b;
	
	//menu
	do{
		printf("1-suma\n2-resta\n3-direcciones\n");
		scanf("%d",&op);
		printf("\n");
		if(op==1){
			//suma
			printf("%d + %d = %d",*pa,*pb,*pa+*pb);
			printf("\n");
			printf("\n");
		}else if(op==2){
			//resta
			printf("%d - %d = %d",*pa,*pb,*pa-*pb);
			printf("\n");
			printf("\n");
		}else if(op==3){
			//direccion
			printf("a = %d",pa);
			printf("\n");
			printf("b = %d",pb);
			printf("\n");
			printf("\n");
		}
		
	}while(op<4);
	
	
	printf("\n");
	
}
