#include "main.h"
/**
 *_strcmp - compares two strings.
 *@s1: first string
 *@s2: second string
 *Return: less than 0 if less, greater than 0 if more,0 for equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0,
	int x;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	x = s1[i] - s2[i];
	return (x);
}
