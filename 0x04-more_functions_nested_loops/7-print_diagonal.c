#include "main.h"

/**
 * print_diagonal -  draws a diagonal
 * @n: inpout size
 * Return: diagonal line of n size
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
