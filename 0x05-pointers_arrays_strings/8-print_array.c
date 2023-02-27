#include <stdio.h>
#include "main.h"

/**
 * print_array - prints array values of given n indecies
 * @a: array
 * @n: number of values
 */
void print_array(int *a, int n)
{
	int i;

	if (a[1] != '\0')
	{
	printf("%d", a[0]);
	}
	else
	{
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
		printf("\n");
	}
}
