#include <stdio.h>

/**
 * main - prime numbs
 * Return: 0
 */

int main(void)
{
long int n = 612852475143;
long int largest_prime_factor = 2;

while (n != largest_prime_factor)
{
if (n % largest_prime_factor == 0)
{
n = n / largest_prime_factor;
}
else
{
largest_prime_factor++;
}
}

printf("%ld\n", largest_prime_factor);
return (0);
}
