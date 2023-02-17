#include <stdio.h>

/**
 * main - print all numbers less than 10 with 2 putchars
 * Return: 0
 */

int main(void)
{
int x = 10;
int n = 48;
while (x < 10)
{
putchar(n);
n += 1;
}
putchar('\n');
return (0);
}
