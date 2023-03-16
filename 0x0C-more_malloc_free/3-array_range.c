s#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create arr of ints
 * @min: min range
 * @max: max range
 * Return: new array point
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int len = max - min + 1;

	if (min > max)
		return (NULL);

	p = malloc(lenof(int) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
