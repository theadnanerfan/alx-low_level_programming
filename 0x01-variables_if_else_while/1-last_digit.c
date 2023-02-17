#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate random n then print last digit
 * and print if its greater than 5 or smaller than 6 and not 0
 * or if its 0
 * Return: 0
 */

int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else if (last != 0 && last < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
return (0);
}
