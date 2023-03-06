#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string
 * @s: string to look for
 * @accept: string with the bytes needed
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
