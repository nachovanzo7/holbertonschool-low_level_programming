#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Imprimir la suma de dos numeros
 *Return: retorna 0
 *@argc: cantidad de argumentos del array
 *@argv: los numeros ingresados
 */

int main(int argc, char *argv[])
{
	int x;
	int suma = 0;

	if (argv[1] == NULL) /* Si no tiene 1 argumento no recibio nada */
	{
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		if (!isdigit(argv[x])) /* Verifica si el argumento es valido como numero */
		{
			printf("%s\n", "Error");

			return (1);
		}
		suma += atoi(argv[x]); /* Cada vuelta suma el entero a la variable */
	}

	printf("%d\n", suma);

	return (0);

}

