#include "main.h"

/**
 * print_number - prints a multi-digit integer using putchar
 * @n: the integer to print
 */
void print_number(int n)
{
unsigned int x = n;
if (n < 0)
{
_putchar('-');
x = -x;
}
if (x / 10)
{
print_number(x / 10);
}
_putchar(x % 10 + '0');
}
