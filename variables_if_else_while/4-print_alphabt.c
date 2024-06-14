#include <stdio.h>
#include <ctype.h>
/**
*main - Devuelve el abecedario 3 veces
*Return: Devuelve siempre 0
*/

int main(void)
{
	char min;

	for (min = 'a'; min <= 'z'; min++)
	{
		if (min != 'q' && min != 'e')
			putchar(min);
	}

	putchar('\n');
	return (0);
}
