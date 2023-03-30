#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gets num of elements in ll
 * @h: list pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = (*h).next;
	}
	return (i);
}
