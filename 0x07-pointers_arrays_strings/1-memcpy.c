#include "main.h"

/**
 * *_memcpy - copies selected mem
 * @dest: dest memory
 * @src: source memory
 * @n: bytes to copy
 * Return: pointer to dest mem
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
