#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Will prints all natural numbers from n to 98
 * @n: the number at witch the print will start
 * Description: will prints all natural numbers from n to 98
 * format : n, n, n, .., 98$
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
