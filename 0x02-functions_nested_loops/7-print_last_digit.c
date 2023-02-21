#include "main.h"
/**
 * print_last_digit - prints last digit of a numb
 * @x: input num
 * Return: last digit
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
	x *= -1;
	x %= 10;
	}
	else
	{
	x %= 10;
	}
	_putchar(x);
	return (x);
}
