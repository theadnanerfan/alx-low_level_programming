#include <stdio.h>
#include <ctype.h>

/**
 * main - print in lowercase then new line
 * only with putchar in reverse order
 * Return: 0
 */

int main(void)
{
int l = 'z';

do {
putchar(l);
l -= 1;
} while (l <= 'a');
putchar('\n');
return (0);
}
