#include <stdio.h>

/**
 *main - Retorna cantidad de argumentos
 *Return: retorna 0
 *@argc: argumentos pasados
 *@argv: array
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1); /* El ultimo argumento es NULL */
	(void)argv;
	return (0);
}
