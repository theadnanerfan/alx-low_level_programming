#include "main.h"

/**
 * _prime - helper function for priming
 * @x: same number as n
 * @y: number that iterates from 1 to n
 * Return: 1 and -1 for fail
 */
int _prime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (_prime(x, y + 1));
}
/**
 * is_prime_number - calculates if its a prime number
 * @n: Number Integer
 *
 * Return: 1 and -1 for fail
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
