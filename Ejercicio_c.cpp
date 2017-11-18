#include <stdio.h>
/*Comentario
Programa que lee en un arreglo de estructuras los datos
de N empleados de la empresa y que imprima los datos del empleado con
mayor y menor salario.
Fecha:18-11-17
Elaborado por:Leyder Londoño Mejia*/
struct empleado{
	char nombre[20];
	char sexo[20];
	float salario;	
}empleados[100];

void referencia(empleado v[],int longt);

int main() 
{	
	empleado v[100];
	int n;
	referencia(v,n);
	return 0;
}

void referencia(empleado v[],int longt){
	int i,SalarioM,SalarioMe;
	float Alto = 0.0, Bajo = 9999999;
	printf("Ingrese Cantidad de empleados \n ");
	scanf("%d",&longt);
	
	for(i=0;i<longt;i++){
		fflush(stdin);
		printf("Nombre Empleado \n ");
		gets(empleados[i].nombre);
		fflush(stdin);
		printf("Sexo Empleado \n ");
		gets(empleados[i].sexo);
		printf(" Salario del Empleado \n");
		scanf("%f",&empleados[i].salario);
		printf("----------\n------------\n");
	}
	for(i=0;i<longt;i++){
		if(empleados[i].salario > Alto){ 
			Alto= empleados[i].salario;
			SalarioM = i;
		}
		else if(empleados[i].salario < Bajo){
			Bajo = empleados[i].salario;
			SalarioMe = i;
		}
	}
	
	printf("\n El Empleado con el mayor salario es \n");
	printf("\n Nombre %s",empleados[SalarioM].nombre);
	printf("\n Sexo %s",empleados[SalarioM].sexo);
	printf("\n Salario: %.2f",empleados[SalarioM].salario);
	
	printf("\n El Empleado con el menor salario es: \n");
	printf("\n Nombre %s",empleados[SalarioMe].nombre);
	printf("\n Sexo %s",empleados[SalarioMe].sexo);
	printf("\n Salario %.2f \n",empleados[SalarioMe].salario);
	
}
