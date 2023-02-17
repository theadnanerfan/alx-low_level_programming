#include <stdio.h>

/**
 * main - prints all abc lowercase then uppercase
 * only with putchar
 * Return: 0
 */

int main(void)
{
int lower = 'a';
int upper = 'A';

while (lower <= 'z')
{
putchar(lower);
lower += 1;
}
while (upper <= 'Z')
{
putchar(upper);
upper += 1;
}
putchar('\n');
return (0);
}
