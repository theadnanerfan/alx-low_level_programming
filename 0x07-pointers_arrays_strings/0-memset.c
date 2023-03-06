#include "main.h"

/**
 *_memset - adds a byte to mem loc
 * @s: mem loc
 * @b: character to be copied
 * @n: amount of times to copy
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
