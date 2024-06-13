#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - Diferenciar positivos de negativos
*Return: siempre retorna 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	printf("is zero");
	else if (n > 0)
	printf("is positive");
	else
	printf("is negative");
	return (0);
}
