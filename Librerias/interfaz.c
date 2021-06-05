#include <stdio.h>

#define red "\e[1;91m"
#define green "\e[1;92m" 
#define yellow "\e[1;93m"
#define blue "\e[1;94m"
#define reset "\e[0m"

void mostrarMenu()
{
	printf(blue"\nAlcancia de Ahorro\n");
	printf(yellow"\n1.) Importar Archivo");
	printf("\n2.) Exportar Archivo");
	printf("\n3.) Cambiar cantidad\n");
	printf("\n0.) Salir del programa\n"reset);
	printf("\nElija una opcion del menu: ");
}