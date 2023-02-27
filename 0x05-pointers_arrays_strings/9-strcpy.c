#include "main.h"

/**
 * *_strcpy - copy string pointed by src
 * @dest: destination string
 * @src: input string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
