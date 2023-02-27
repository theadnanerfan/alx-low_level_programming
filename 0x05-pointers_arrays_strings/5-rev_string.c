#include "main.h"

/**
 * rev_string - make a string reversed
 * @s: input string
 */
void rev_string(char *s)
{
	char temp;
	int i;

	int inp = 0;
	int out = 0;

	while (s[inp] != '\0')
	{
		inp++;
	}

	out = inp - 1;

	for (i = 0; i < inp / 2; i++)
	{
		temp = s[i];
		s[i] = s[out];
		s[out--] = temp;
	}
}
