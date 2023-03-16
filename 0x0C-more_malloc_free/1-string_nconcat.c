#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates bytes of string on another
 * @s1: string dest
 * @s2: string src
 * @n: number of bytes
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	if (n < l2)
		s = malloc(sizeof(char) * (l1 + 1 + n));
	else
		s = malloc(sizeof(char) * (l1 + 1 + l2));

	if (s == 0)
		return (NULL);

	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		s[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
