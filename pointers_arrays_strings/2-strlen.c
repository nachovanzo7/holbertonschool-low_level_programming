#include "main.h"

/**
*_strlen - Contar el largo del string
*Return: no retorna nada
*@s: cada letra del string
*/

int _strlen(char *s)
{
	int cant;
	int x;

	cant = 0;

	for (x = *s; x != '\0'; x++)
	{
		x = *s++;
		cant++;
	}

	return (cant);
}

