#include "main.h"

/**
 * _puts_recursion - print string then line
 * @s: string
 * Return: 1 or -1
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
