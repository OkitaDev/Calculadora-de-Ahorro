#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "TDA_Mapa/hashmap.h"
#include "interfaz.h"

typedef struct tipoMoneda
{
	long long cantidad;
	int identificador;
}tipoMoneda;


tipoMoneda * lecturaInfo(char * lineaLeida)
{
	tipoMoneda * nuevaEntrada = malloc (sizeof(tipoMoneda));
	char * fragmento;

	fragmento = strtok(lineaLeida, ",");
	nuevaEntrada->identificador = strtol(fragmento, NULL, 10);
	fragmento = strtok(NULL, ",");
	nuevaEntrada->cantidad = strtol(fragmento, NULL, 10);
	return nuevaEntrada;
}

void importarArchivo(HashMap * mapaMonedas)
{
	FILE * archivo = fopen("archivo.csv", "r");
	
	if(archivo == NULL)
	{
		printf(red"\nNo se leyo el archivo!\n"reset);
		return;
	}
	printf(blue"\nSe esta leyendo el archivo\n\n"reset);

	char lineaLeida[50];
	while(fgets(lineaLeida, 49, archivo))
	{
		tipoMoneda * nuevaEntrada = lecturaInfo(lineaLeida);
		printf("Voy a insertar la moneda %i con cantidad %lli\n", nuevaEntrada->identificador, nuevaEntrada->cantidad);
		insertMap(mapaMonedas, &nuevaEntrada->identificador, nuevaEntrada);
	}

	printf(green"\nSe importo correctamente la informacion!\n"reset);
}