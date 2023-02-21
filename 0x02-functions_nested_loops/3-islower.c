#include "main.h"
/**
 * _islower - check if input is lowercase
 * @ch char as int
 * Return: 1 if true else 0
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	return (0);
}
