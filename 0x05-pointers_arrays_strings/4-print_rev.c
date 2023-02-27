#include "main.h"

/**
 * print_rev - prints reversed string
 * @s: input string pointer
 */
void print_rev(char *s)
{
	int j, index;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	index = i;

	for (j = index - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
