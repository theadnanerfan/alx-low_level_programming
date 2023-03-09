#include "main.h"

/**
 * _print_rev_recursion - reverse prints string
 * @s: string
 * Return: 1 or -1
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
