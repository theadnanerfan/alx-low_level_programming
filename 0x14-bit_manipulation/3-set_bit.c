#include "main.h"

/**
 * set_bit - set bit at index
 * @n: pointer to desired change
 * @index: index set to 1
 * Return: 1 for success -1 Otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
