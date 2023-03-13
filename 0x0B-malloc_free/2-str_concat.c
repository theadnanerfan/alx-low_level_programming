#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concats 2 strings
 * @s1: string for concat
 * @s2: second string to concat to
 * Return: pointer to new string , null when fail
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);

	if (s1)
	{
		while (i < l1)
		{
			s[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (l1 + l2))
		{
			s[i] = s2[j];
			i++;
			j++;
		}
	}
	s[i] = '\0';

	return (s);
}
