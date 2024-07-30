#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_dlistint - Imprime todo lo que contenga la Lista Doble
 *Return: retorna el entero contenido
 *@h: puntero a la estructura
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);

}
