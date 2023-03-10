#include <stdio.h>
#include <stdlib.h>

/**
 * main - name
 * @argc: cmd.
 * @argv: vectror.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int prod = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else if (argc == 3)
	{
		for (x = 0 ; x < argc ; x++)
		{
			if (x == 1)
			{
				y = atoi(argv[x]);
			}
			else if (x == 2)
			{
				z = atoi(argv[x]);
			}
		}
	prod = z * y;
	printf("%d\n", prod);
	}
	return (0);
}
