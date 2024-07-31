#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *sum_dlistint - Suma de todos los n de la lista
 *Return: retorna la suma calculada
 *@head: nodo de la lista
 */

int sum_dlistint(dlistint_t *head)
{
	int suma;

	suma = 0;

	while (head)
	{
		suma += head->n;
		head = head->next;
	}

	return (suma);
}
