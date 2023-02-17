#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print out positive or negative
 * if greater than 0 then positive
 * if less then 0 then negative
 * otherwise 0
 * Return: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	{
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
