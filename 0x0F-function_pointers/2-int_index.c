#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - returns index if true, -1 others
 * @array: Array
 * @size: Array size
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL)
		return (-1);
	if (size < 1)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
