#include "main.h"
/**
 * print_alphabet - print lower alphabets then line.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
