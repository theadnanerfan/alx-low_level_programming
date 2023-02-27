#include "main.h"

/**
 * swap_int - swaps 2 pointers
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
