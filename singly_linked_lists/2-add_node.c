#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/**
*add_node - Reemplaza e imprime el head del Linked Lists
*Return: retorna la direccion de memoria del head
*@head: espacio de memoria del primer nodo
*@str: string pasado por parametro (valor (list_t).strx
*/
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *p;

	i = 0;

	p = (list_t *)malloc(sizeof(list_t)); /* Asigno memoria para la estructura */

	if (p == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	p->str = strdup(str);

	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;

	p->len = i;
	p->next = *head;
	*head = p;

	return (p);


}
