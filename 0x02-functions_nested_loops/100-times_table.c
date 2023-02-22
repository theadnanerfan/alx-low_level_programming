#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints time table of n
 * @n: input num
 *
 * Return: void
 */
void print_times_table(int n)
{
        int i, j, res;
if (n > 15 || n < 0)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
res = i * j;
if (j == 0)
printf("%d", res);
else if (res < 10)
printf(",   %d", res);
else if (res < 100)
printf(",  %d", res);
else
printf(", %d", res);
}
printf("\n");
}
}
