#include "main.h"

/**
 * _isupper - check capital
 * @ch: input
 * Return: 1 ch capital, 0 small
 */
int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	return (1);
	else
	return (0);
}
