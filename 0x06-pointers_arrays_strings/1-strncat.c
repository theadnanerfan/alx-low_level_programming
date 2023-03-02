#include "main.h"
/**
 *_strncat - concat 2 strings without null byte termination
 *@dest: destination string.
 *@src: source string.
 *@n: bytes to concat
 *Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, l++)
	{
		dest[l] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
