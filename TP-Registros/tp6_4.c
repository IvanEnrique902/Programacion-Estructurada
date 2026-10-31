// crear un registro para almacenar informacion relacionada con un musico, cada muscio cuenta con un nombre, una edad, un genero musical e informacion sobre sus discos 
// cada disco posee un titulo añpo de lantazamiento y su cantidad de canciones

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct discos { 
	char titulo[20];
	int año_lanzamiento; 
	int cantidad_canciones; 
	
}; 

struct musico { 
	char nombre[20]; 
	int edad; 
	char genero_musical[20]; 
	struct discos os; 
	
} musico_1; 




int main() {  
	struct musico directo = {
		.nombre = {"Indio solari"},
		.edad = 76,
		.genero_musical = {"Rocanrol"}
	
};


	int n = 2;   
	struct discos lista_discos[n]; 
	
	for (int i = 0; i < n; i++) { 
	printf("Registrando los discos: "); 
	
	printf("Ingrese el nombre del disco: ");
	scanf("%s",lista_discos[i].titulo); 
	
	printf("Ingrese la fecha de lanzamiento del disco: "); 
	scanf("%i",&lista_discos[i].año_lanzamiento); 
	
	printf("Ingrese la cantidad de canciones que tenga ese disco: "); 
	scanf("%i",&lista_discos[i].cantidad_canciones); 
	}
	
	
	
	printf("el nombre es %s\n", directo.nombre);
	printf("La edad del musico es %d\n",directo.edad); 
	printf("El genero musical que tiene es %s\n",directo.genero_musical);
	
	
		printf("--DISCOS DEL ARTISTA--\n"); 
	for (int i = 0; i < n; i++) { 	
		printf("TITULO: %s FECHA DE LANZAMIENTO DISCO: %i CANTIDAD DE CANCIONES EN ESE DISCO %i\n", lista_discos[i].titulo,lista_discos[i].año_lanzamiento,lista_discos[i].cantidad_canciones);
	
}
	return 0; 
	
	
}

