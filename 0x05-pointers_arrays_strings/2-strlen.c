#include "main.h"

/**
 * _strlen - acts as String.length()
 * @s: string to evaluate
 * Return: length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
