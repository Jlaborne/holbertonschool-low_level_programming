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
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
