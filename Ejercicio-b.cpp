#include <stdio.h>
/*Comentario
Estructura Estudiantes, en la cual se tendran los siguientes
campos:Nombre,edad,grado,promedio.Pedir datos al usuario para 3 alumnos
comprobar cual de los 3 tiene el mejor promedio y imprimir los datos del
alumno
Fecha:18 nov 2017
Elaborado por: Leyder Londoño Mejia*/
struct Estudiantes
{
	char nombre[30];	
	int edad;
	float grado;
	float promedio;	
}alumnos[3];
void referencia(Estudiantes v[]);
Estudiantes v[100];
int main() {
	referencia(v);
	return 0;
}
void referencia(Estudiantes v[]){
	int i,lugar;
	float MayorNota=0.0;
	
	for(i=0;i<3;i++){
		printf("\n Nombre \n");
        fflush(stdin);
		fgets(alumnos[i].nombre,30,stdin);
		printf("Edad \n");
		scanf("%d",&alumnos[i].edad);
		printf("Grado \n");
		scanf("%d",&alumnos[i].grado);
		printf("Promedio \n");
		scanf("%d",&alumnos[i].promedio);
		printf("--------- \n -----------\n");
	}
	
	for(i=0;i<3;i++){
		if(alumnos[i].promedio > MayorNota){
			MayorNota=alumnos[i].promedio;
			lugar=i;
		}
	}
	printf("Datos del estudiante con mejor promedio es \n");
	printf("Nommbre %s",alumnos[lugar].nombre);
	printf("Nommbre %d",alumnos[lugar].edad);
	printf("Nommbre %.2f",alumnos[lugar].grado);
	printf("Nommbre %.2f \n",alumnos[lugar].promedio);
	
}

	
