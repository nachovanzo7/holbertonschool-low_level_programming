#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lista, *aux;

	lista = malloc(sizeof(dlistint_t));

	if (lista == NULL)
		return (NULL);

	lista->n = n;
	lista->next = NULL;

	if (*head == NULL)
	{
		lista->prev = NULL;
		*head = lista;
		return (lista);
	}

	aux = *head;

	while (aux->next != NULL)
		aux = aux->next;
	
	aux->next = lista;
	lista->prev = aux;

	return (lista);

}
