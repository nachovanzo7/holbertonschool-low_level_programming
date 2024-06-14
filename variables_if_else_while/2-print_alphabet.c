#include <stdio.h>
/**
*main - Desplegar todo el abecedario
*Return: retorna siempre 0
*/

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}

	putchar('\n');
	return (0);
}
