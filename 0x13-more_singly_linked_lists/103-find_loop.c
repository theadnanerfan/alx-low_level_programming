#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: linkedlist to find
 * Return: node adress found
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *secnd = head;

	if (!head)
		return (NULL);

	while (first && secnd && secnd->next)
	{
		secnd = secnd->next->next;
		first = first->next;
		if (secnd == first)
		{
			first = head;
			while (first != secnd)
			{
				first = first->next;
				secnd = secnd->next;
			}
			return (secnd);
		}
	}

	return (NULL);
}
