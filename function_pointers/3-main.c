#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 for wrong number of arguments, 99 for invalid
 *         operator, or 100 for division/modulo by zero.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (get_op_func(operator) == NULL)
		return (99);
	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
