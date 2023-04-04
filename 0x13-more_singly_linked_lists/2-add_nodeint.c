#include "lists.h"

/**
 * add_nodeint - adds new node at start of ll
 * @head: first node pointer
 * @n: what to insert
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	(*newnode).n = n;
	(*newnode).next = *head;
	*head = newnode;

	return (newnode);
}
