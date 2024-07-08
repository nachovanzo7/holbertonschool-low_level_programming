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

	if (name != NULL)
	/* Imprimir nombre */
	printf("Name: %s\n", name);
	
	else 
		printf("Name: %s\n", "(nil)");

	/* Imprimir Edad */
	printf("Age: %f\n", age);

	if (owner != NULL)
	/* Imprimir Owner */
	printf("Owner: %s\n", owner);

	else
		printf("Owner: %s\n", "(nil)");
}
