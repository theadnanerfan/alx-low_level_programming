#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - uses malloc to aloc mem
 * @b: bytes to alloc
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
