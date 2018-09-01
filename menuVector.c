#include <stdio.h>


int main (){
	int tamano,opcion,posicion,numero,cont;
	
		printf("Ingrese el tamaño del vector\n");
		scanf("%d",&tamano);
		int vector[tamano];
		
		for(cont=0;cont<tamano;cont++){
		vector[cont]=0;
	}

		do{
			printf("Elija la acccion ha realizar:\n");
			printf("1 - Agregar un dato\n");
			printf("2 - Buscar valor en el vector\n");
			printf("3 - Editar\n");
			printf("4 - Eliminar\n");
			printf("5 - Mostrar vectro\n");
			printf("Otro numero para salir\n");
			scanf("%d",&opcion);
		
			if(opcion==1){
				printf("Ingrese el numero que desea agregar:\n");
				scanf("%d",&numero);
				printf("En que posicion desea colocarlo (entre 1 y %d)\n",tamano);
				scanf("%d",&posicion);
				if(posicion<0 || posicion>tamano){
					printf("no existe esa posicion\n");
				}
				else{
					
					vector[posicion-1]=numero;
				}
			}else if(opcion==2){
				printf("Ingrese el numero que desea buscar:\n");
				scanf("%d",&numero);
				for(cont=0;cont<tamano;cont++){
					if(vector[cont]==numero){
						printf("La posicion del numero %d es %d\n", numero,cont);
					}
				}
			}else if(opcion==3){
				printf("Ingrese la posicion que desea editar (entre 1 y %d)\n",tamano+1);
				scanf("%d",&posicion);
				if(posicion<0 || posicion>tamano){
					printf("no existe esa posicion\n");
				}
				else{
					printf("Ingrese el nuevo numero ");
					scanf("%d", & vector[posicion-1]);
				}
			}else if(opcion==4){
				printf("Ingrese la posicion que desea editar (entre 1 y %d)\n",tamano+1);
				scanf("%d",&posicion);
				if(posicion<0 || posicion>tamano){
					printf("no existe esa posicion\n");
				}
				else{
					vector[posicion-1]=0;
				}
			}else if(opcion==5){
				for(cont=0; cont<tamano; cont++){
				printf("%d\t", vector[cont]);
			}
			printf("\n\n");
			}
		}while(opcion>0 && opcion<6);
	
	
	return 0;
	}
