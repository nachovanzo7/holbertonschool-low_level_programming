#include <stdio.h>

/**
 *main - Imprime todos los argumentos recibidos
 *Return: retorna 0
 *@argc: cantidad de argumentos
 *@argv: array
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}	
	
	return (0);

}
