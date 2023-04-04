#include "lists.h"

/**
 * reverse_listint - reverse linkedlist
 * @head: source pointer for head of ll
 * Return: new list pointer head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *source = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = source;
		source = *head;
		*head = next;
	}

	*head = source;

	return (*head);
}
