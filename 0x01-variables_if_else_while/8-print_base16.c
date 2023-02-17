#include <stdio.h>

/**
 * main - print all numbers less than 16
 * with putchar then new line
 * Return: 0
 */

int main(void)
{
int n = 48;
int a = 'a';

while (n < 58)
{
putchar(n);
n += 1;
}
while (a < 'g')
{
putchar(a);
a += 1;
}
return (0);
}
