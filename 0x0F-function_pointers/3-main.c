#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - get_op_func for operators
 * if not 4 arguments return 98
 * if op null return 99
 * if div , mod 0 return 100
 * @argc: args
 * @argv: pointer pointer to args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, res;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	res = res(x, y);

	printf("%d\n", res);
	return (0);
}
