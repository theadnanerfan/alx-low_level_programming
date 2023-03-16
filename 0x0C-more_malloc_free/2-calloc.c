#include <stdlib.h>
#include "main.h"

/**
 * *_memset - puts a byte in all mem
 * @s: memory to be placed to
 * @b: char to place
 * @n: amount of times to copy
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocs mem for array
 * @nmemb: array elements
 * @size: size of elements
 * Return: pointer to mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
