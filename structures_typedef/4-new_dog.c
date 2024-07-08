#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *new_dog - Crea una nueva entidad Perro
 *@name: nombre del perro
 *@age: edad del perro
 *@owner: propietario del perro
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int x;
	int len = 0, len2 = 0;

	if (name != NULL && owner != NULL)
	{
		p = malloc(sizeof(dog_t)); /*Creo espacio de memoria para la estructura */

		if (p == NULL)
		{
			free(p);
			return (NULL);
		}

		for (x = 0; name[x] != '\0'; x++)
			len++; /* Longitud de String "name" */

		for (x = 0; owner[x] != '\0'; x++)
			len2++; /*Longitud de String "owner" */

		(*p).name = malloc(len + 1); /* Reservo memoria para el nombre */

		if ((*p).name == NULL)
		{
			free(p);
			return (NULL);
		}

		(*p).owner = malloc(len2 + 1); /* Reservo memoria para el propietario */

		 if ((*p).owner == NULL)
                {
			free((*p).name);
                        free(p);
                        return (NULL);
                }

		/* Asigno los valores por parametro */
		(*p).name = strcpy((*p).name, name);
		(*p).age = age;
		(*p).owner = strcpy((*p).owner, owner);

	}

	return (p);
}

