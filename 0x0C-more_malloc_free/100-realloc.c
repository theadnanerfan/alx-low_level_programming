#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - uses malloc and free to allocate
 * @ptr: pointer to prev mem
 * @old_size: size of mem allocated
 * @new_size: new size of mem
 * Return: pointer to new mem block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;
	char *pold;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (p == 0)
		return (NULL);

	pold = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = pold[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = pold[i];
	}

	free(ptr);
	return (p);
}
