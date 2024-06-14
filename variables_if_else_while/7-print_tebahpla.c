#include <stdio.h>
/**
*main - Vamos a invertir el texto ingresado
*Return: Va a devovler 0
*/

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);

	putchar('\n');
	return (0);
}
