#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Liberar espacio de memoria de una estructura 
 *Return: no retorna nada
 *@d: estructura
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);

		free((*d).owner);

		free(d);
	}
}

