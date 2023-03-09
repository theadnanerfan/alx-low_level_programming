#include "main.h"

/**
 * getstrlength - obtains length of a string
 * @x: String
 * @y: int for counting
 * Return: 1 or -1 when failed
 */
int getstrlength(char *x, int y)
{
	if (*x == 0)
		return (y - 1);
	return (getstrlength(x + 1, y + 1));
}
/**
 * revstringcomp - compares a reverse string to non reversed
 * @a: String
 * @len: length
 * Return: 1 or -1 when failed
 */

int revstringcomp(char *a, int l)
{
	if (*a != *(a + len))
		return (0);
	else if (*a == 0)
		return (1);
	return (revstringcomp(a + 1, len - 2));
}
/**
 * is_palindrome - palindrome check
 * @s: input
 * Return: 1 or -1 when failed
 */
int is_palindrome(char *s)
{
	int len;

	len = getstrlength(s, 0);
	return (revstringcomp(s, len));
}
