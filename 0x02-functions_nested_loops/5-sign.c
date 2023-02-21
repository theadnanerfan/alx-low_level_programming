#include "main.h"
/**
 * print_sign - prints sign of numb
 * @x: input num to check
 * Return: 1 if positive, -1 if negative and 0 if Zero
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	if (x < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
