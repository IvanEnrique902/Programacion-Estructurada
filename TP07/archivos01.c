#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main() { 

FILE *f;
f = fopen("cadenas.txt", "w");

if (f == NULL) { 
	printf("Error en el archivo"); 
	return 1; 
	}
	
char cadena[100]; 
for (int i = 0; i < 5; i ++) { 
	printf("Ingrese una cadena %d",i+1); 
	fgets(cadena,sizeof(cadena),stdin); 
	
	fprintf(f,"%s",cadena); 
}

fclose(f);

return 0; 
}
	 
