#include "main.h"
#include <stdio.h>

/**
 * natural_sums_multiplies_under1024 - sums multiples of 3 and 5 under 1024
 * Return: 0
 */

int main()
{
int sum = 0;
int i;

for (i=0; i<1024; i++)
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
