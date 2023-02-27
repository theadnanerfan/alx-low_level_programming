#include "main.h"

/**
 * puts_half - print the 2nd half of the string
 * @str: input string
 */
void puts_half(char *str)
{
	int x, y;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (x = l / 2; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
		else if (l % 2 != 0)
	{
		for (y = (l - 1) / 2; y < l - 1; y++)
		{
			_putchar(str[y + 1]);
		}
	}
	_putchar('\n');
}
