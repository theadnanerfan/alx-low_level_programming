#include "lists.h"

/**
 * print_listint - prints all linked list
 * @h: linked list to print
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		printf("%d\n", (*h).n);
		nodecount++;
		h = (*h).next;
	}

	return (nodecount);
}
