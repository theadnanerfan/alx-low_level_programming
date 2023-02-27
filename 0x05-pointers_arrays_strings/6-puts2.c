#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int x;

	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	for (x = 0; x < size; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
