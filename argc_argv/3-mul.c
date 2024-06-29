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
	
	if (argv[2] != NULL)
	{
	/* Fuente: Biblioteca de Atoi - Universidad de Cordoba */
	i = atoi(argv[1]); /* Convertir char a int con atoi */
	x = atoi(argv[2]); 
	}

	if (argv[2] == NULL)
	{
		printf("%s\n", "Error");
		
		return (1);
	}

	printf("%d\n", (i * x));
	
	(void)argc;

	return (0);
}
