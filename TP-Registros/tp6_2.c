#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct alumno { 
	int legajo; 
	double nota; 
	int anio_ingreso; 
	int anio_actual; 
	
};
void calcularfecha (struct alumno f, anio_actual) { 
	int anio_ingreso = 2020; 
	int anio_actual = 2026;
	int resultado = anio_ingreso - anio_actual; 
	printf("El resultado es %d", resultado); 
	
};
	
	
	

int main() { 
	struct alumno directo = { //{4845, 7.34, 2020};
		.legajo = 4845,
		.nota = 7.34,
		.anio_ingreso = 2020,
		.anio_actual = 2026
	}; 
	printf("numero de legajo es %i\n", directo.legajo);
	printf("numero de nota es %.2f\n", directo.nota);
	printf("la fecha en que ingreso es %i\n", directo.anio_ingreso);
	calcularfecha(directo);

	return 0; 
	
}

	
