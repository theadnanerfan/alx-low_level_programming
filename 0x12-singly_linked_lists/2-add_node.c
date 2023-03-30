#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to list
 * @head: pointer to pointer for the list
 * @str: string to add
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	nnode = malloc(sizeof(list_t));
	if (!nnode)
		return (NULL);

	(*nnode).str = strdup(str);
	(*nnode).len = len;
	(*nnode).next = (*head);
	(*head) = nnode;

	return (*head);
}
