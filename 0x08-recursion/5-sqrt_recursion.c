#include "main.h"

 /**
 * _sqrt_recursion - returns sqrt of n recursively
 * @n: integer
 * Return: 1 and -1 when fail
 */
 int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

int sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt(x, y + 1));
}
