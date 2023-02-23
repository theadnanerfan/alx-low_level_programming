#include "main.h"

/**
 * print_most_numbers - print all nums but 2/4
 * Return: all nums but 2/4 then new line
 * */
void print_most_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
if ((i == 4) || (i == 2))
continue;
else
_putchar(i + '0');
}
_putchar('\n');
}
