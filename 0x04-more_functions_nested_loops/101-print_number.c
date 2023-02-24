#include "main.h"

/**
 * print_number - prints numbs with putchar
 * @n: number
 */

void print_number(int n)
{
int digit, temp;
temp = n;
while (temp != 0)
{
digit = temp % 10;
temp /= 10;
_putchar(digit + '0');
}
_putchar('\n');
}
