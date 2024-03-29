#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
/**
 * get_op_func - Return a pointer to a function corresponding to the operator
 * @s: A string representing an arithmetic operator
 * Return: Pointer to a function that takes two integers and returns an integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	return (NULL);
}
