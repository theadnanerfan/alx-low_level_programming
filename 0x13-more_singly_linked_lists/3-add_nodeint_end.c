#include "lists.h"

/**
 * add_nodeint_end - link list add node
 * @head:first element list pointer
 * @n: data to insert
 * Return: next node pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *second;

	second = malloc(sizeof(listint_t));
	if (!second)
		return (NULL);

	second->n = n;
	second->next = NULL;

	if (*head == NULL)
	{
		*head = second;
		return (second);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = second;

	return (second);
}
