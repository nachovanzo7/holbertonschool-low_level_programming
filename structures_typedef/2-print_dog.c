#include "dog.h"
#include <stdio.h>

/**
 *print_dog - Imprima la estructura "dog"
 *Return: no retorna nada
 *@d: es la estructura "dog"
 */

void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	name = (*d).name;
	age = (*d).age;
	owner = (*d).owner;

	/* Imprimir nombre */
	printf("Name: %s", name);
	
	/* Imprimir Edad */
	printf("Age: %f", age);

	/* Imprimir Owner */
	printf("Owner: %s", owner);
}
