#include "dog.h"
#include <stdio.h>

/**
 *init_dog - Inicializar una variable de tipo "struct dog"
 *Return: no retorna nada
 *@d: Estructura "dog"
 *@name: atributo de estructura "dog" - Nombre de perro
 *@age: atributo de estructura "age" - Edad de perro
 *@owner: atributo de estructura "owner" - Due√o de perro
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
