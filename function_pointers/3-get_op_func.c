#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
/**
 * get_op_func - Retrieves a pointer to a function corresponding to the provided operator
 * @s: A string representing an arithmetic operator
 * Return: Pointer to a function that takes two integers and returns an integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =
		{
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
	}
	return (ops[i].f);
	printf("Error\n");
}
