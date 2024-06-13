#include <stdlib.h>
#include <time.h>
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
	if (n % 2 == 0)
	printf("Es un numero par");
	else
	printf("Es un numero impar");
	return (0);
}
