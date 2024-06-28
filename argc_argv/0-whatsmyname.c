#include <stdio.h>

/**
 *main - Imprime el nombre del archivo
 *Return: retorna 0
 *@argc: posicion
 *@argv: array
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);

	return (0);

}
