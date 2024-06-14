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
		putchar(min);

	for (min = 'A'; min <= 'Z'; min++)
		putchar(min);

	putchar('\n');
	return (0);
}
