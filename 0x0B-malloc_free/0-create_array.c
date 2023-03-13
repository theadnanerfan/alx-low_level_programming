#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of a char
 * @size: array size
 * @c: array char
 * Return: array pointer when success, null otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;
	
	p = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
