#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - get operator from main
 * @s: string of op
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int x = 0;

	while (op_s[x].op)
	{
		if (*(op_s[x].op) == *s)
			return (op_s[x].f);
		x++;
	}
	return (NULL);
}
