#include "main.h"

/**
 * print_number - prints a multi-digit integer using putchar
 * @n: the integer to print
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
int divisor = 1;
while (n / divisor >= 10)
divisor *= 10;
while (divisor > 0)
{
int digit = (n / divisor) % 10;
_putchar(digit + '0');
divisor /= 10;
}
}
