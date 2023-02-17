#include <stdio.h>
#include <ctype.h>

/**
 * main - print in lowercase then new line
 * only with putchar
 * Return: 0
 */

int main(void)
{
int l = 'a';

do {
putchar(l);
l += 1;
} while (l <= 'z');
putchar('\n');
return (0);
}
