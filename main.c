#include <stdio.h>

#include "Librerias/interfaz.h"
#include "Librerias/TDA_Mapa/hashmap.h"
#include "Librerias/alcancia.h"

int main()
{
	int opcion;
	HashMap * mapaMonedas = createMap(5);
	do
	{
		mostrarMenu();
		scanf("%i", &opcion);
		if(opcion == 0) break;

		switch(opcion)
		{
			case 1:
				if(size(mapaMonedas) == 0)importarArchivo(mapaMonedas);
				else printf(red"\nYa leyo el archivo\n");
				break;
			case 2:
				break;
			case 3:

				break;
			default:
				printf(red"\nNo existe tal opcion!\n"reset);
				break;
		}
	}while(opcion != 0);
	
	printf(blue"\nFIN DEL PROGRAMA\n\n"reset);

	return 0;
}