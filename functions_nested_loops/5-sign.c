#include "main.h"

/**
 * print_sign - check if a number is positive or negative
 *@n: the number to be checked
 *
 *Return: 1 if n > 0. 0 if n = 0 and -1 if n < 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(r + '0');
		_putchar('\n');
		return (-1);
	}
	if (n > 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(r + '0');
		_putchar('\n');
		return (1);
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(r + '0');
		_putchar('\n');
		return (0);
	}
}
