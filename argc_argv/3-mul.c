#include "stdio.h"
#include <stdlib.h>

/**
 *main - Imprimir la suma de dos numeros
 *Return: retorna 0
 *@argc: cantidad de argumentos del array
 *@argv: 2 numeros
 */

int main(int argc, char *argv[])
{
	int i;
	int x;

	i = atoi(argv[1]);
	x = atoi(argv[2]);

	printf("%d\n", (i + x));
	
	(void)argc;

	return (0);
}
