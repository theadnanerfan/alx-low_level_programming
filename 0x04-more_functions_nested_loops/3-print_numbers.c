#include "main.h"

/**
 * print_numbers - prints nums from 0 to 9
 * Return: numbers and line
 */
void print_numbers(void)
{
	int i;
	char x;
	for (i = 0; i <= 9; i++)
	{
	x += i;
	_putchar(x);
	_putchar('\n');
	}
}
