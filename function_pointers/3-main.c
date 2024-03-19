#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
int main(int argc, char* argv[])
{
	int num1, num2;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	operator = argv[3];

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
		return(100);
	}

	printf ("%d\n",get_op_func(operator)(num1, num2));
	return (0);
}
