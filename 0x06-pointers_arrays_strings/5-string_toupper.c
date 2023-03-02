#include "main.h"
/**
 *string_toupper - all lower to upper
 *@x: pointer to string.
 *Return: upper string point
 */
char *string_toupper(char *x)
{
	int l = 0;

	while (x[l] != '\0')
	{
		if (x[l] >= 97 && x[l] <= 122)
		{
			x[l] = x[l] - 32;
		}
		l++;
	}
	return (x);
}
