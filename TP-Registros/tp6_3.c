//generar un vector de registros del punto 1 para 20 alumnos, ingresando por teclado los daots e imprimiendo luego en pantalla

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct alumno { 
	int legajo; 
	int anio_ingreso; 
	double nota; 

	
}; 	



int main() { 
	int n = 1; // declaro el tamaño que va a tener el vector  
	struct alumno listaalumnos[n]; //llamo a esa diciendole el tamaño (n) 
	
	
	for (int i = 0; i < 1; i++) {  //aca voy a hacer un for para registrar a cada alumno 
	printf("registrar a la persona %i\n", i + 1); 
	
	printf("Ingrese el numero de legajo del alumno:");
	scanf("%d",&listaalumnos[i].legajo); //cargo el legao con un & terminando en .legajo
	
	printf("Ingrese el numero de anio de que ingreso el alumno: ");
	scanf("%d",&listaalumnos[i].anio_ingreso);
	
	printf("Ingrese el numero de la nota del alumno: ");
	scanf("%lf",&listaalumnos[i].nota);
	
	}
	
	printf("Los alumnos registrados\n\n");
	
	for (int i = 0; i < n; i++) {  //recorro todos los alumnos que registre con su determinado legajo, año de ingreso y su nota 
		printf(" Numero de legajo %d, anio de ingreso es en el anio %d y su nota es %.2f\n", listaalumnos[i].legajo, listaalumnos[i].anio_ingreso, listaalumnos[i].nota);
	
	}
	
	return 0; 
	
	
}
