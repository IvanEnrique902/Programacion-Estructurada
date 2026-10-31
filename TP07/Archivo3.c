

//En un archivo secuencial (por ejemplo “lluvias.txt”) se almacenan datos sobre la lluvia caída en un cierto período. Cada línea corresponde a un día y contiene los siguientes datos: 
//Día-Mes-Año-Precipitaciones (0 si no llovió)  
//Preparar un algoritmo con los procedimientos necesarios para: 
//Cargar los datos correspondientes a los 30 días del mes de septiembre del corriente año. 
//Leer el archivo e informar por pantalla:cuántos días hubo sin lluvias, cuántos días llovió  menos de 50 mm y cuántos llovió 50 mm ó más.  



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

FILE *archivo; 

archivo = fopen("lluvias.txt", "w"); 
	if (archivo == NULL) {
	 printf("Error en el archivo"); 
	 return 1;
  }

printf("Todo fue leido correctamente\n"); 

int mm; 
int sin_lluvia = 0; 
int menos_50mm = 0; 
int mas_50mm = 0; 

for (int dia = 0; dia < 3; dia++) { 
	printf("INGRESE LAS PRECIPITACIONES EN EL DIA %i: ", dia + 1); 
	scanf("%d", &mm); 
	if(mm == 0) {
		sin_lluvia +=1; 
	}
	
	if(mm >= 50) { 
		mas_50mm +=1; 
	}
	
	if(mm < 50) {
		menos_50mm +=1; 
	}
	fprintf(archivo, "%02d-09-2026-%d\n", dia, mm);

}	
	 	
	printf("dias sin lluvias fueron %d\n ",sin_lluvia);
	printf( "dias con mas de 50mm fueron %d\n ",mas_50mm);
	printf( "dias con menos de 50mm fueron %d\n ",menos_50mm);


fclose(archivo);

} 
