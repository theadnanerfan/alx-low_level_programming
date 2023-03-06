#include "main.h"
#include <stdio.h>

/**
 * *_strchr - finds char in string
 * @s: string to find
 * @c: char to find
 * Return: a pointer to the first character found
 */
char *_strchr(char *s, char c)
{
int x;
while (1)

{
x = *s++;
if (x == c)
{
return (s - 1);
}
if (x == 0)
{
return (NULL);
}
}
}
