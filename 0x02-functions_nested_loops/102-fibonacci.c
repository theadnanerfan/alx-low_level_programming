#include "main.h"
#include <stdio.h>

/**
 * main - fibonacci under 50
 * Return: 0
 */

int main(void)
{
int i;
int n = 50;
long a = 0;
long b = 1;
long c;

for (i = 3; i <= n; i++)
{
c = b + a;
a = b;
b = c;
printf("%ld, ", c);
}
printf("\n");
return (0);
}
