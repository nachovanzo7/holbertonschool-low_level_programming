#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *lista;

	lista = malloc(sizeof(dlistint_t)); /*Reservo espacio en memoria*/

	if (lista == NULL) /*No hay memoria suficiente*/
		return (NULL);

	lista->n = n; /*Le asigno el entero a la nueva lista*/
	lista->prev = NULL; /* El nodo previo al header es nulo */
	lista->next = *head; /* Asigno valor al primer nodo */

	if (*head != NULL) /* Si la lista no esta vacia, nuevo header */
		(*head)->prev = lista;

	*head = lista; /*Muevo el nodo para que apunte al nuevo nodo*/

	return (lista);
}
