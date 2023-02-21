#include "main.h"
/**
 * _islower - check if input is lowercase
 * @c: character to test.
 *
 * Return: 1 if true else 0 
 */
int _islower(char char)
{
	if (char >= 'a' && char <= 'z')
	{
		return (1);
	}
	return (0);
}
