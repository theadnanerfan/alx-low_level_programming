#include "main.h"

/**
 * _sqrt - helper function for sqrt
 * @x: number to sqrt
 * @y: iteratable by recursion to get value of sqrt
 * Return: 1 and -1 when fail
 */

 /**
 * _sqrt_recursion - returns sqrt of n recursively
 * @n: integer
 * Return: 1 and -1 when fail
 *
 */

int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
