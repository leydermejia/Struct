#include <stdio.h>
/*Comentario
Utilizar las 2 estructuras del ejercicio d, pero ahora pedir los datos para N 
alumnos, y calcular cual de todos tiene el mejor promedio, e imprimir sus datos.
Fecha:18-11-17
Elaborado por: leyder Londoño Mejia*/
struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alumnos[100];

void estudiantes(alumno v[],int longt);

int main()
{
	alumno v[100];
	int longt;
	estudiantes(v,longt);
	return 0;
}

void estudiantes(alumno v[],int longt)
{
	int i,PromedioM;
	float promedio[100], mayor = 0.0;
	printf(" Ingrese Cantidad de Alumnos ");
	scanf("%i",&longt);	
	for(i=0;i<longt;i++){
		printf(" Nombre \n");
		fflush(stdin);
		fgets(alumnos[i].nombre,30,stdin);
		printf(" Sexo \n ");
		gets(alumnos[i].sexo);
		printf(" Edad \n");
		scanf("%i",&alumnos[i].edad);
		printf(" Notas \n");
		scanf("%f %f %f",&alumnos[i].prom.nota1,&alumnos[i].prom.nota2,&alumnos[i].prom.nota3);
		printf("-----\n-------\n");		
		promedio[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;		
		if(promedio[i] > mayor){
			mayor = promedio[i];
			PromedioM = i;
		}	
	}	
	printf("\n------*Alumno con Mayor Promedio*-------\n");
	printf("\n Nombre %s",alumnos[PromedioM].nombre);
	printf("\n Sexo %s",alumnos[PromedioM].sexo);
	printf("\n Edad %i",alumnos[PromedioM].edad);
	printf("\n Promedio %.2f\n",promedio[PromedioM]);
}
