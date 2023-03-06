#include "main.h"

/**
 * _strpbrk - finds the first occurrence in a string of any of a set of bytes
 * @str: the string to search for matches
 * @byte_set: the set of bytes to search for in the string
 * Return: a pointer to the byte in the string that matches one of the bytes in
 * the set, or NULL if no such byte is found
 */
char *_strpbrk(char *str, char *byte_set)
{
	int idx_str, idx_byte_set;

	for (idx_str = 0; *str != '\0'; idx_str++)
	{
		for (idx_byte_set = 0; byte_set[idx_byte_set] != '\0'; idx_byte_set++)
		{
			if (*str == byte_set[idx_byte_set])
			{
				return (str);
			}
		}
		str++;
	}

	return (NULL);
}
