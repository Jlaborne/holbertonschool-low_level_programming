#include "main.h"

/**
 * print_last_digit - will print the last digit of a given number.
 * @n: Number used to find the last digit.
 *
 * Description: will print the last digit of a given number. If the
 * number is a negative the value will be return unsigned int.
 *
 * Return: last digit as int value.
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x *= -1;
	}
	_putchar('0' + x);
	return (x);
}
