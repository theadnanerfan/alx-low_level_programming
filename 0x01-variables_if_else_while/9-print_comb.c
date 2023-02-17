#include <stdio.h>

/**
 * main -  prints all combinations of single digit
 * separated by ',' then space
 * only with putchar function
 * Return: 0
 */

int main(void)
{
int n = 48;
while (n < 58)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
n += 1;
}
putchar('\n');
return (0);
}
