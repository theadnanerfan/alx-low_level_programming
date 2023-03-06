#include "main.h"
#include <stdio.h>

/**
 * *_strstr - finds substring
 * @haystack: string to look inside
 * @needle: substring to find
 * Return: pointer to the start of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (NULL);
}
