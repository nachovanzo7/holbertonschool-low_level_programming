#ifndef dogh
#define dogh

#include <stdio.h>

/**
 *struct dog - Datos sobre la Entidad "Perro"
 *
 *@name: Nombre del Perro
 *@age: Edad del Perro
 *@owner: Propietario del Perro
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
