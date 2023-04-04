#include "lists.h"

/**
 * listint_len - gets linkedlist length
 * @h: linked list to iterate on
 * Return: node count
 */
size_t listint_len(const listint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		nodecount++;
		h = (*h).next;
	}

	return (nodecount);
}
