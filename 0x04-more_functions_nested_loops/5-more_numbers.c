#include "main.h"

/**
 *  * more_numbers - prints 10 times from 0 to 14
 *   * Return: 0-14 10 times then line
 *    */
void more_numbers(void)
{
int i, x;

for (x = 0; x < 10; x++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0')
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
