#include "main.h"

/**
 * puts2 - prints every 2nd char
 * @str: input string
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
