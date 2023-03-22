#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - goes through an array
 * @array: array
 * @size: size of it
 * @action: a func
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
