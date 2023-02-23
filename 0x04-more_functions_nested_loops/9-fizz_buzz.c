#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints 1 to 100 fizzing 3 multiples and buzzing 5
 * fizzbuzzing multiples of both
 * Return: 0
 */
int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", buzz);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fizzbuzz);
		else if (i % 3 == 0)
			printf("%s ", fizz);
		else if (i % 5 == 0)
			printf("%s ", buzz);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
