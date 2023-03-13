#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies a string
 * @str: string we want to copy
 * Return: succes points to string copied , null otherwise
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i = 0;
	unsigned int l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	str2 = malloc(sizeof(char) * (l + 1));

	if (str2 == NULL)
		return (NULL);

	while ((str2[i] = str[i]) != '\0')
		i++;

	return (str2);
}
