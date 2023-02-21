#include "main.h"
/**
 * print_last_digit - prints last digit of a numb
 * @x: input num
 * Return: last digit
 */
int print_last_digit(int x)
{
	x %= 10;
	if (x< 0)
	{
		x = x * -1;
	}
	_putchar('0' + x);
	return (x);
}
