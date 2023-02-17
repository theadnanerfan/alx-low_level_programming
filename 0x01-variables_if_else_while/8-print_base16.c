#include <stdio.h>

/**
 * main - print all numbers less than 16
 * with putchar then new line
 * Return: 0
 */

int main(void)
{
int n = 0;
int a = 'a';

while (n < 15)
{
putchar(a);
a += 1;
n += 1;
}
putchar('\n');
return (0);
}
