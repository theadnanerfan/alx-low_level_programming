#include "main.h"

/**
 * _strspn - obtains length of substring
 * @s: string to look to
 * @accept: matching chars string
 * Return: number of bytes of first string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, x;
	int f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		x = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				x = 1;
			}
		}
		if (x == 0)
		{
			return (f);
		}
	}
	return (0);
}
