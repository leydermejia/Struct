#include <stdio.h>
#include <stdlib.h>
/*Comentario
Estructura llamada competidor, en la cual se tendrán los siguientes
miembros: Nombre, edad, sexo, club, pedir datos al usuario para un competidor, y
asignarle una categoría de competición:
- Juvenil <= 15 años
- Señor <= 30 años
- Veterano > 30 años
Posteriormente imprimir todos los datos del competidor, incluida su categoría de
competición.
Fecha:18-11-17
Elaborado por:Leyder Londoño Mejia*/

struct Competidores
{
	char nombre[30];	
	char sexo[10];
	char club[30];
	char categoria[20];
	int edad;	
};

void datos(Competidores v[],int tam);

int main() {
	
	Competidores v[100];
	int tam;
	datos(v,tam);
	return 0;
}

void datos(Competidores v[],int tam){
	printf("Ingrese Cantidad de Competidores:\n");
	scanf("%d",&tam);
	printf("Ingrese Datos de los Competidores:\n");	
	for (int i=0;i<tam;i++){
		fflush(stdin);
		printf("Nombre: ");
		fgets(v[i].nombre,30,stdin);
		
		printf("Edad: \n");
		scanf("%d",&v[i].edad);
		
		fflush(stdin);
		printf("Sexo: \n");
		fgets(v[i].sexo,10,stdin);
		
		fflush(stdin);
		printf("Club:\n ");
		fgets(v[i].club,30,stdin);

		if(v[i].edad<=15){
			strcpy(v[i].categoria, "Infantil");
		}
		else if(v[i].edad<=30){
			strcpy(v[i].categoria, "Joven");
		}else{
			strcpy(v[i].categoria, "Mayor");
		}
	}	
	printf("<<<<Listado de Competidores>>>>\n");	
	for(int i=0;i<tam;i++){
		printf("Nombre:%s \r\t Edad:%d\t Sexo:%s \r\t Club:%s \r\t Categoria:%s\t\n",v[i].nombre,v[i].edad,v[i].sexo,v[i].club,v[i].categoria);
	}
}
