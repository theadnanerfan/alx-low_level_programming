#include <stdio.h>
#include <stdlib.h>

/**
 * main -  name
 * @argc: integer
 * @argv: vector char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
