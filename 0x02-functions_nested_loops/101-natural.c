#include "main.h"
#include <stdio.h>

/**
 * main - multiples of 3 and 5 under 1024
 * Return: 0
 */

int main(void)
{
int sum = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0)
{
sum += i;
continue;
}
else if (i % 5 == 0)
{
sum += i;
continue;
}
}
printf("%d", sum);
printf("\n");
return (0);
}
