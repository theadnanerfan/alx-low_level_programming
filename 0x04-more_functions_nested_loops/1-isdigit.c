#include "main.h"

/**
 * _isdigit -  check digit under 10
 * @c: input
 * Return: 1 when true else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);
	else
	return (0);
}
