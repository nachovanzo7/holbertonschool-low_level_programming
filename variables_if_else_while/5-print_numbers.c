#include <stdio.h>
/**
*main - Los numeros entre 0 y 9
*Return: siempre retorna 0
*/

int main(void)
{
	for (int num = 0; (num % 10) == 0; num++)
	{
		printf("%i", num);
	}
	return (0);
}
