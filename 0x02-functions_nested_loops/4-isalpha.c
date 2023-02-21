#include "main.h"
/**
 * _isalpha - check if input is alphebetical
 * @ch: character
 * Return: 1 if alph else 0
 */
int _isalpha(char ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		return (1);
	}
	return (0);
}
