#include <stdio.h>
/**
*main - Devolver todos los numeros de base 10
*Return: Retorna siempre 0
*/

int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
