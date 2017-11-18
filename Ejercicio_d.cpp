#include <stdio.h>
/*Comentario
Hacer 2 estructuras una llamada promedio que tendra los siguientes miembros: 
nota1,nota2,nota3; y otro llamada alumno que tendra los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura
alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por
ultimo imprimir todos sus datos incluidos el promedio.
Fecha:18-11-17
Elaborado por: Leyder Londoño Mejia*/
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
}alumno1;

void estudiante(alumno v[]);

int main()
{
	alumno v[100];
	estudiante(v);
	return 0;
}

void estudiante(alumno v[])
{
	float promedio=0;	
	printf("Nombre \n ");
	fflush(stdin);
	fgets(alumnos[i].nombre,30,stdin);
	printf("Sexo \n ");
	gets(alumno1.sexo);
	printf("Edad \n ");
	scanf("%i",&alumno1.edad);
	printf(" Ingrese las 3 notas \n");
	scanf("%f %f %f",&alumno1.prom.nota1,&alumno1.prom.nota2,&alumno1.prom.nota3);	
	promedio = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;	
	printf("\n\n ------ *Datos del Alumno* -------\n");
	printf("\n Nombre %s",alumno1.nombre);
	printf("\n Sexo %s",alumno1.sexo);
	printf("\n Edad %i",alumno1.edad);
	printf("\n Promedio %.2f \n",promedio);		
}
