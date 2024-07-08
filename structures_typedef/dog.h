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

 /* typedef - Indica la creacion de un alias */
 /* Sintaxis: typedef estructura nuevonombre */

/* Defino un tipo dog_t como "alias" de struct dog */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
