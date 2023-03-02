#include "main.h"
/**
 *reverse_array - flip an array
 *@a: array point
 *@n: array length
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int i = 0;

	n = n - 1;
	while (i <= n)
	{
		x = a[i];
		a[i++] = a[n];
		a[n--] = x;
	}
}
