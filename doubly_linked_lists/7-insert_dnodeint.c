#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *insert_dnodeint_at_index - Insertar nuevo nodo en index solicitada
 *Return: Direccion de nuevo nodo, NULL en caso de error
 *@h: puntero a nodo
 *@idx: posicion para agregar nuevo nodo
 *@n: valor de atributo del nodo
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *lista, *aux;
	unsigned int i;

	lista = malloc(sizeof(dlistint_t));
	aux = *h;
	i = 0;

	if (lista == NULL)
		return (NULL);

	lista->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (aux && i < idx - 1)
	{
		aux = aux->next;
		i++; /* voy hasta la posicion requerida */
	}

	if (!aux)
		return (NULL);

	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	lista->next = aux->next;
	lista->prev = aux;

	if (aux->next)
		aux->next->prev = lista;
	aux->next = lista;

	return (lista);
}
