#include "main.h"

/**
 * print_number - prints numbs with putchar
 * @size: number
 * Return: 0
 */

void print_number(int n)
{
int digit, temp;
temp = n;
do {
digit = temp % 10;
temp /= 10;
_putchar(digit + '0');
}
while (temp != 0);
_putchar('\n');
return 0;
}
