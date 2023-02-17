#include <stdio.h>

/**
 * main - prints all lowercase letters, skipping 'e' and 'q'
 * Return: Always 0
 */
int main(void)
{
int l = 'a';

do {
if (l != 'e' && l != 'q')
putchar(l);
l += 1;
} while (l <= 'z');
putchar('\n');
return (0);
}
