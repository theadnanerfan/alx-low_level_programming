#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of two diags of sq
 * @a: matrix to print diagonals
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum = 0;
	unsigned int sum2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		sum += a[(size * x) + x];
		sum2 += a[(size * (x + 1)) - (x + 1)];
	}
	printf("%d, %d\n", sum, sum2);
}
