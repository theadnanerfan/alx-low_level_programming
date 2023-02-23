#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of it
 * Return: null
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
		for (x = size; x > 0; x--)
		{
			for (y = 1; y <= size; y++)
				if (y >= x)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
_putchar('\n');
}
