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
    if (n == 0)
    {
        _putchar('0');
    }
    int digits = 0;
    int temp = n;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    char c;
    while (digits > 0)
    {
        temp = n;
        for (int i = 1; i < digits; i++)
        {
            temp /= 10;
        }
        c = '0' + temp;
        _putchar(c);
        digits--;
    }
}
