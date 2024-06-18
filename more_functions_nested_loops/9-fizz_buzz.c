#include <stdio.h>

/**
*main - Multiplo de 3 Fizz, Multiplo de 5 Buzz y ambos FizzBuzz
*Return: no retorna nada
*/

int main(void)
{
	int x;

	for (x = 0; x < 99; x++)
	{
		if (((x % 3) == 0) && ((x % 5) == 0))
			printf("FizzBuzz");
		else if ((x % 5) == 0)
			printf("Buzz");
		else if ((x % 3) == 0)
			printf("Fizz");
		else
			printf("%i", x);

		if (x < 100)
			printf(" ");

		else
			printf("\n");
	}
	return (0);
}
