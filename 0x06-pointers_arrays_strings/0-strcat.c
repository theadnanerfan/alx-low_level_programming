#include "main.h"
/**
*_strcat - concat 2 strings
*@dest: destination str
*@src: source str
*Return: destination pointer
 */
char *_strcat(char *dest, char *src)
{
int l=0;
int i;

while (dest[l] != '\0')
{
l++;
}
for (i = 0; src[i] != '\0'; i++, l++)
{
dest[l] = src[i];
}
dest[l] = '\0';
return (dest);
}
