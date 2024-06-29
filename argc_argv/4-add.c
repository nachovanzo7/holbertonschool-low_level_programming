#include <stdio.h>
#include <stdlib.h>

/**
 *main - Imprimir la suma de dos numeros
 *Return: retorna 0
 *@argc: cantidad de argumentos del array
 *@argv: los numeros ingresados
 */

int main(int argc, char *argv[])
{
	int x = 0;

	if (argv[1] == NULL) /* Si no tiene 1 argumento no recibio nada */
	{
		return (0);
	}

	for (x = 0; x < argc; x++)
	{
		if (!(atoi(argv[x]))) /* Verifica si el argumento es valido como numero */
		{
			printf("%s\n", "Error");
			return (0);
		}
		x += atoi(argv[x]); /* Cada vuelta suma el entero a la variable */
	}

	printf("%d\n", x);

	return (0);

}

