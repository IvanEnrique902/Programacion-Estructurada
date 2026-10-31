#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int main() { 

FILE *f = fopen("cadenas.txt", "r");

fclose(f);


f = fopen("cadenas.txt", "r");


if (f == NULL) { 
	printf("Error en el archivo"); 
	return 1; 
	}
	
	
printf("Todo fue leido correctamente\n"); 


int c;

while ((c = getc(f)) != EOF) { 
	printf("%c",c); // si quiero imprimir cada letra de lo asignado hago printf("%c\n ",c)
	
}

fclose(f);

return 0; 
}
	 
