#include "main.h"

/**
 * print_number - prints numbs with putchar
 * @size: number
 * Return: 0
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}
