#include "main.h"

/**
 * print_to_98 - Will prints all natural numbers from n to 98
 * @n: the number at witch the print will start
 * Description: will prints all natural numbers from n to 98
 * format : n, n, n, .., 98$
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		for (; n < 0; n++)
		{
			_putchar('n');

			if (n <= -10)
			{
				_putchar ((n / 10) * -1 + '0');
				_putchar ((n % 10) * -1 + '0');
			}
			else
			{
				_putchar (-1 * n + '0');
			}
			_putchar (',');
			_putchar (' ');
		}

		for (; n < 98; n++)
		{
			if (n >= 10)
			{
				_putchar ((n / 10) + '0');
				_putchar ((n % 10) + '0');
			}
			else
			{
				_putchar (n + '0');
			}
			_putchar (',');
			_putchar (' ');
		}
	}
	_putchar ((n / 10) + '0');
	_putchar ((n % 10) + '0');
}
